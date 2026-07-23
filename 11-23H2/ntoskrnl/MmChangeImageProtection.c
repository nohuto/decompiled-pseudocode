/*
 * XREFs of MmChangeImageProtection @ 0x140724040
 * Callers:
 *     <none>
 * Callees:
 *     MiSessionReferenceImage @ 0x14020A978 (MiSessionReferenceImage.c)
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_PFN_IS_PROTO @ 0x1402A3100 (MI_PFN_IS_PROTO.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiSetImageProtection @ 0x14034BC20 (MiSetImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     VslValidateDynamicCodePages @ 0x14087F138 (VslValidateDynamicCodePages.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  struct _KTHREAD *Lock; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // r12d
  _QWORD *v18; // r15
  _QWORD *v19; // r13
  unsigned int v21; // r9d
  __int64 v22; // rdi
  __int64 BugCheckParameter2; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+28h] [rbp-40h]

  v5 = a2;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v24 = a3;
    if ( a3 == (unsigned int)a3 && (*(_BYTE *)(a1 + 10) & 7) == 2 && !*(_DWORD *)(a1 + 44) )
    {
      v7 = *(_DWORD *)(a1 + 40);
      if ( (v7 & 0xFFF) == 0 )
      {
        v8 = v7 >> 12;
        Lock = MmAcquireLoadLock();
        --Lock->KernelApcDisable;
        --Lock->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        v10 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 0);
        v11 = (__int64)v10;
        if ( v10 )
        {
          v12 = v10[6];
          v13 = a3 + v5;
          v14 = v12 + *((unsigned int *)v10 + 16);
          if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v14
            || v5 < v12
            || v13 > v14
            || v13 - 1 < v5 )
          {
            v16 = -1073741800;
          }
          else
          {
            v15 = *(_DWORD *)(v11 + 104);
            if ( (v15 & 0x80000) != 0 )
            {
              v16 = -1073741757;
            }
            else
            {
              v16 = 0;
              *(_DWORD *)(v11 + 104) = v15 | 0x80000;
              if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
                MiSessionReferenceImage(v12);
              else
                ++*(_WORD *)(v11 + 108);
            }
          }
        }
        else
        {
          v16 = -1073741275;
        }
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)Lock);
        MmReleaseLoadLock((__int64)Lock);
        if ( v16 < 0 )
          goto LABEL_25;
        if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
        {
          v17 = 0;
          v18 = (_QWORD *)(a1 + 48);
          if ( !v8 )
          {
LABEL_22:
            MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 1u);
            if ( a4 == 1 )
            {
              if ( (MiFlags & 0x4000) == 0 || (v16 = VslValidateDynamicCodePages(a1, v5, v24), v16 >= 0) )
              {
                v21 = 3;
                if ( (MiFlags & 0x8000) != 0 && v16 == 300 )
                  v21 = 19;
                MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), v21);
                v16 = 0;
              }
            }
            else if ( (MiFlags & 0x8000) != 0 && v8 )
            {
              v22 = v8;
              do
              {
                MiClearPfnImageVerified(48LL * *v18++ - 0x220000000000LL, 24);
                --v22;
              }
              while ( v22 );
            }
            goto LABEL_24;
          }
          v19 = (_QWORD *)(a1 + 48);
          while ( 1 )
          {
            BugCheckParameter2 = 48LL * *v19 - 0x220000000000LL;
            if ( MI_PFN_IS_PROTO(BugCheckParameter2) )
              break;
            if ( (MiGetPagePrivilege(BugCheckParameter2, 0, 0LL) & 0x40) != 0 )
            {
              v16 = -1073741755;
              goto LABEL_24;
            }
            ++v17;
            ++v19;
            if ( v17 >= v8 )
            {
              v5 = a2;
              goto LABEL_22;
            }
          }
        }
        v16 = -1073741800;
LABEL_24:
        MmAcquireLoadLock();
        --Lock->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        *(_DWORD *)(v11 + 104) &= ~0x80000u;
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)Lock);
        MiUnloadSystemImage(v11, -1);
        MmReleaseLoadLock((__int64)Lock);
LABEL_25:
        KeLeaveCriticalRegionThread((__int64)Lock);
        return (unsigned int)v16;
      }
    }
  }
  return 3221225485LL;
}
