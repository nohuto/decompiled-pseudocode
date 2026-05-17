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

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int Context; // eax
  __int64 v6; // rbx
  bool v7; // zf
  unsigned __int64 v8; // rdx
  int v9; // esi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 Mapping; // rax
  __int64 v14; // [rsp+20h] [rbp-59h] BYREF
  __int64 v15; // [rsp+28h] [rbp-51h] BYREF
  __int64 v16; // [rsp+30h] [rbp-49h]
  __int64 v17; // [rsp+38h] [rbp-41h]
  __int128 v18; // [rsp+40h] [rbp-39h] BYREF
  __int128 v19; // [rsp+50h] [rbp-29h]
  __int128 v20; // [rsp+60h] [rbp-19h]
  _QWORD v21[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v14);
  v6 = v14;
  v21[0] = 524290LL;
  if ( Context < 0 )
    v6 = 0LL;
  v21[1] = a1;
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v14 = v6;
  if ( v7 )
  {
    v23 = *(_QWORD *)(a1 + 128) << 12;
    v23 += *(_QWORD *)(a1 + 88) << 12;
    v22 = *(_QWORD *)(a1 + 136) << 12;
    v6 = v14;
    v22 += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v23 = *(_QWORD *)(a1 + 568);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v21, 32LL, *(_QWORD *)(a2 + 24));
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 8), v8, v10, v11);
      ++*(_DWORD *)v6;
    }
    RtlLockHeap(a1);
    while ( (int)RtlpWalkHeapInternal(a1, (__int64)&v18) >= 0 )
    {
      if ( (BYTE2(v19) & 1) != 0 )
      {
        v17 = *((_QWORD *)&v18 + 1);
        v15 = v18;
        v16 = 0LL;
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping(v6, v18);
          if ( Mapping )
            v16 = *(_QWORD *)(Mapping + 16);
        }
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v15, 24LL, *(_QWORD *)(a2 + 24));
        if ( v9 < 0 )
          goto LABEL_19;
      }
    }
    v15 = 305450479LL;
    v17 = 0xFFFFFFFFLL;
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v15, 24LL, *(_QWORD *)(a2 + 24));
    if ( v9 >= 0 )
      v9 = 0;
LABEL_19:
    RtlUnlockHeap(a1);
    if ( v3 )
    {
      --*(_DWORD *)v6;
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v6 + 8));
    }
  }
  return (unsigned int)v9;
}
