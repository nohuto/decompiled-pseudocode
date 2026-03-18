/*
 * XREFs of sub_1407E2434 @ 0x1407E2434
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     MmProbeAndLockPagesPrivate @ 0x140256F38 (MmProbeAndLockPagesPrivate.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ZwFlushInstructionCache @ 0x14041D520 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140649758 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 *     WbAlloc @ 0x1407E3010 (WbAlloc.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     WbVerifyVirtualAddressSignature @ 0x1407E4008 (WbVerifyVirtualAddressSignature.c)
 *     sub_1407E4280 @ 0x1407E4280 (sub_1407E4280.c)
 *     WbAllocateUserMemory @ 0x1407E43F0 (WbAllocateUserMemory.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E2434(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  _DWORD *v5; // rbx
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  const void *v14; // rax
  __int64 v15; // rdx
  void *v16; // r15
  __int64 *v17; // rbx
  _QWORD *v18; // r10
  _QWORD *v19; // rdx
  __int64 *v20; // r9
  __int64 v21; // rax
  __int64 *v22; // r15
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  _KPROCESS *Process; // r8
  __int16 v26; // ax
  enum wil_ReportingKind v28; // [rsp+30h] [rbp-B8h]
  enum wil_ReportingKind v29; // [rsp+30h] [rbp-B8h]
  void *Src; // [rsp+58h] [rbp-90h] BYREF
  void *v31; // [rsp+60h] [rbp-88h] BYREF
  int v32; // [rsp+68h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-78h]
  int v34; // [rsp+78h] [rbp-70h]
  int v35; // [rsp+7Ch] [rbp-6Ch]
  PMDL Mdl; // [rsp+80h] [rbp-68h]
  PMDL v37; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+90h] [rbp-58h] BYREF
  void *v39; // [rsp+98h] [rbp-50h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-48h]

  v31 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v37 = 0LL;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v40 = (unsigned int)dword_140C5A700;
  v4 = WbAlloc(88LL, &v31);
  if ( v4 < 0 )
    goto LABEL_60;
  v5 = v31;
  memset(v31, 0, 0x58uLL);
  v5[4] &= ~1u;
  v6 = 1;
  *((_QWORD *)v5 + 10) = 1LL;
  if ( *(_DWORD *)(a2 + 8) == 1 )
  {
    v4 = sub_1407E2020((UCHAR *)(a2 + 16), 0xF8u);
    if ( v4 < 0 )
      goto LABEL_60;
    MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
    {
      v4 = -1073741801;
      goto LABEL_60;
    }
    MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList, v7);
    v32 = 1;
    v4 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 328));
    if ( v4 < 0 )
      goto LABEL_60;
    goto LABEL_13;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    &stru_140CE21C8,
    0xE67B5Au,
    0,
    0,
    &Feature_PdttSupport_logged_traits,
    0,
    v28);
  if ( *(_DWORD *)(a2 + 8) )
  {
    v4 = -1073741811;
    goto LABEL_60;
  }
  v4 = sub_1407E2020((UCHAR *)(a2 + 16), 0xF0u);
  if ( v4 < 0 )
    goto LABEL_60;
  MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
  if ( !MemoryDescriptorList )
  {
    v4 = -1073741801;
    goto LABEL_60;
  }
  MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList, v8);
  v32 = 1;
  v4 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 328));
  if ( v4 >= 0 )
  {
LABEL_13:
    v4 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v39, &v38);
    if ( v4 >= 0 )
    {
      v4 = WbAlloc(*(unsigned int *)(a2 + 320), &Src);
      if ( v4 >= 0 )
      {
        v9 = *(unsigned int *)(a2 + 284);
        if ( (_DWORD)v9 )
        {
          v10 = *(_QWORD *)(a2 + 272);
          if ( v10 + v9 > 0x7FFFFFFF0000LL || v10 + v9 < v10 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
            LODWORD(v9) = *(_DWORD *)(a2 + 284);
          }
        }
        memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v9);
        if ( *(_DWORD *)(a2 + 8) == 1 )
        {
          if ( *(_DWORD *)(a2 + 284) < 4u )
          {
            v4 = -1073741811;
            goto LABEL_60;
          }
          *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
        }
        else
        {
          wil_details_FeatureReporting_ReportUsageToService(
            &stru_140CE21C8,
            0xE67B5Au,
            0,
            0,
            &Feature_PdttSupport_logged_traits,
            0,
            v28);
          if ( *(_DWORD *)(a2 + 8) )
          {
            v4 = -1073741811;
            goto LABEL_60;
          }
        }
        Mdl = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
        if ( !Mdl )
        {
          v4 = -1073741801;
          goto LABEL_60;
        }
        MmProbeAndLockPagesPrivate((__int64)Mdl, v11);
        v34 = 1;
        v4 = sub_1407E4280(
               0,
               (int)Src + *(_DWORD *)(a2 + 288),
               (int)Src + *(_DWORD *)(a2 + 288),
               *(_DWORD *)(a2 + 284),
               a2 + 88,
               *(_DWORD *)(a2 + 280),
               a2 + 96);
        if ( v4 >= 0 )
        {
          v4 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 272));
          if ( v4 >= 0 )
          {
            v12 = *(_QWORD *)(a2 + 296);
            if ( !v12 )
              goto LABEL_44;
            v13 = *(unsigned int *)(a2 + 308);
            v14 = *(const void **)(a2 + 296);
            if ( (_DWORD)v13 && (v12 + v13 > 0x7FFFFFFF0000LL || v12 + v13 < v12) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              LODWORD(v13) = *(_DWORD *)(a2 + 308);
              v14 = *(const void **)(a2 + 296);
            }
            memmove((char *)Src + *(unsigned int *)(a2 + 312), v14, (unsigned int)v13);
            if ( *(_DWORD *)(a2 + 8) == 1 )
            {
              if ( *(_DWORD *)(a2 + 308) < 4u )
              {
                v4 = -1073741811;
                goto LABEL_60;
              }
              *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
            }
            else
            {
              wil_details_FeatureReporting_ReportUsageToService(
                &stru_140CE21C8,
                0xE67B5Au,
                0,
                0,
                &Feature_PdttSupport_logged_traits,
                0,
                v29);
              if ( *(_DWORD *)(a2 + 8) )
              {
                v4 = -1073741811;
                goto LABEL_60;
              }
            }
            v37 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
            if ( !v37 )
            {
              v4 = -1073741801;
              goto LABEL_60;
            }
            MmProbeAndLockPagesPrivate((__int64)v37, v15);
            v35 = 1;
            v4 = sub_1407E4280(
                   0,
                   (int)Src + *(_DWORD *)(a2 + 312),
                   (int)Src + *(_DWORD *)(a2 + 312),
                   *(_DWORD *)(a2 + 308),
                   a2 + 88,
                   *(_DWORD *)(a2 + 304),
                   a2 + 96);
            if ( v4 >= 0 )
            {
              v4 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 296));
              if ( v4 >= 0 )
              {
LABEL_44:
                v16 = v39;
                memmove(v39, Src, *(unsigned int *)(a2 + 320));
                v17 = (__int64 *)v31;
                v18 = (char *)v31 + 64;
                *((_QWORD *)v31 + 8) = *(_QWORD *)a2;
                v19 = v17 + 5;
                v17[5] = (__int64)v16;
                v20 = v17 + 3;
                v17[3] = v38 + *(unsigned int *)(a2 + 288);
                v21 = *(unsigned int *)(a2 + 312);
                if ( (_DWORD)v21 )
                {
                  v22 = v17 + 4;
                  v17[4] = v38 + v21;
                }
                else
                {
                  v22 = (__int64 *)((char *)v31 + 32);
                  *((_QWORD *)v31 + 4) = 0LL;
                }
                v23 = v31;
                *((_DWORD *)v31 + 18) = *(_DWORD *)(a2 + 320);
                v23[6] = *(_QWORD *)(a2 + 272);
                v24 = *(_QWORD *)(a2 + 272) - *v20;
                v23[7] = v24;
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( !Process[1].Affinity.StaticBitmap[30] )
                  goto LABEL_53;
                v26 = WORD2(Process[2].Affinity.StaticBitmap[20]);
                if ( v26 != 332 && v26 != 452 )
                  v6 = 0;
                if ( v6 )
                  *(_QWORD *)*v19 = *v18;
                else
LABEL_53:
                  *(_QWORD *)*v19 = v24;
                *(_QWORD *)(*v19 + 8LL) = v40;
                v4 = ZwFlushInstructionCache(-1LL, *v20);
                if ( v4 >= 0 )
                {
                  if ( !*(_QWORD *)(a2 + 296) || (v4 = ZwFlushInstructionCache(-1LL, *v22), v4 >= 0) )
                  {
                    if ( a3 )
                    {
                      *a3 = v31;
                      v31 = 0LL;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_60:
  if ( MemoryDescriptorList )
  {
    if ( v32 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v34 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v37 )
  {
    if ( v35 )
      MmUnlockPages(v37);
    IoFreeMdl(v37);
  }
  sub_1407E3B7C(a1, v31);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v4;
}
