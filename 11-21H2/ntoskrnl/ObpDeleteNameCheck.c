/*
 * XREFs of ObpDeleteNameCheck @ 0x1407A3190
 * Callers:
 *     ObpDereferenceNamedObject @ 0x140202270 (ObpDereferenceNamedObject.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140668C60 (ObpDeleteDirectoryEntry.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x1406A9B40 (ObpLookupDirectoryEntry.c)
 *     ObpLockDirectoryExclusive @ 0x1406B96B0 (ObpLockDirectoryExclusive.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B96E8 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbp
  struct _KTHREAD *v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rbx
  struct _KTHREAD *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v3 = a1 - v2;
    if ( a1 != v2 )
    {
      v4 = a1 + 16;
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v4, 0LL);
        v6 = *(_QWORD *)v3;
        if ( !*(_QWORD *)v3 || (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
        {
          ExReleasePushLockEx(v4, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v13 = 0x10000000000LL;
        v7 = KeGetCurrentThread();
        v12 = (unsigned __int64)v6;
        --v7->KernelApcDisable;
        v8 = KeAbPreAcquire(v6 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 296), 0LL) )
          break;
        if ( v8 )
          KeAbPostReleaseEx(v6 + 296, v8);
        KeLeaveCriticalRegion();
        *(_QWORD *)&v12 = 0LL;
        BYTE5(v13) = 0;
        ObfReferenceObject((PVOID)v6);
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
        ObpLockDirectoryExclusive((__int64)&v12, v6);
        v11 = KeGetCurrentThread();
        --v11->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v4, 0LL);
        if ( *(_QWORD *)v3 == v6 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v6);
          goto LABEL_12;
        }
        if ( (_QWORD)v12 )
          ObpUnlockDirectory((__int64)&v12);
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
        HalPutDmaAdapter((PADAPTER_OBJECT)v6);
      }
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
LABEL_12:
      if ( *(_DWORD *)(v3 + 24) )
      {
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        ObpLookupDirectoryEntry((unsigned __int16 *)(v3 + 8), 0, (__int64 *)&v12);
        v9 = (_QWORD *)*((_QWORD *)&v12 + 1);
        v10 = (_QWORD *)**((_QWORD **)&v12 + 1);
        *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v12 + 1) + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v12 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v9 = *v10;
        *v10 = 0LL;
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
        if ( v10 )
          ObpDeleteDirectoryEntry(v10, (void **)&v12);
      }
      if ( (_QWORD)v12 )
        ObpUnlockDirectory((__int64)&v12);
    }
  }
}
