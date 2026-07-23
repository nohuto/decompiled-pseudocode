/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x180116410
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     RtlpWalkHeapInternal @ 0x180063B9C (RtlpWalkHeapInternal.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180115DC0 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011639C (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 Mapping; // rax
  _RTL_SRWLOCK *v11; // [rsp+20h] [rbp-59h] BYREF
  __int64 v12; // [rsp+28h] [rbp-51h] BYREF
  __int64 v13; // [rsp+30h] [rbp-49h]
  __int64 v14; // [rsp+38h] [rbp-41h]
  __int128 v15; // [rsp+40h] [rbp-39h] BYREF
  __int128 v16; // [rsp+50h] [rbp-29h]
  __int128 v17; // [rsp+60h] [rbp-19h]
  _QWORD v18[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v11);
  v6 = v11;
  v18[0] = 524290LL;
  if ( Context < 0 )
    v6 = 0LL;
  v18[1] = HeapHandle;
  v7 = HeapHandle[4] == -571548178;
  v11 = v6;
  if ( v7 )
  {
    v20 = *((_QWORD *)HeapHandle + 16) << 12;
    v20 += *((_QWORD *)HeapHandle + 11) << 12;
    v19 = *((_QWORD *)HeapHandle + 17) << 12;
    v6 = v11;
    v19 += *((_QWORD *)HeapHandle + 12) << 12;
  }
  else
  {
    v19 = *((_QWORD *)HeapHandle + 72) - *((_QWORD *)HeapHandle + 83);
    v20 = *((_QWORD *)HeapHandle + 71);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v18, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6 + 1);
      ++*(_DWORD *)&v6->0;
    }
    RtlLockHeap(HeapHandle);
    while ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64)&v15) >= 0 )
    {
      if ( (BYTE2(v16) & 1) != 0 )
      {
        v14 = *((_QWORD *)&v15 + 1);
        v12 = v15;
        v13 = 0LL;
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v6, v15);
          if ( Mapping )
            v13 = *(_QWORD *)(Mapping + 16);
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v12, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_19;
      }
    }
    v12 = 305450479LL;
    v14 = 0xFFFFFFFFLL;
    v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v12, 24LL, *(_QWORD *)(a2 + 24));
    if ( v8 >= 0 )
      v8 = 0;
LABEL_19:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
    {
      --*(_DWORD *)&v6->0;
      RtlReleaseSRWLockShared(v6 + 1);
    }
  }
  return (unsigned int)v8;
}
