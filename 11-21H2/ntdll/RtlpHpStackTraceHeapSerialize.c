/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x180116020
 * Callers:
 *     <none>
 * Callees:
 *     RtlLockHeap @ 0x180015BE0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpWalkHeapInternal @ 0x180057468 (RtlpWalkHeapInternal.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x1801159E8 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180115FAC (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int Context; // eax
  __int64 v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 Mapping; // rax
  __int64 v11; // [rsp+20h] [rbp-59h] BYREF
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
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v11);
  v6 = v11;
  v18[0] = 524290LL;
  if ( Context < 0 )
    v6 = 0LL;
  v18[1] = a1;
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v11 = v6;
  if ( v7 )
  {
    v20 = *(_QWORD *)(a1 + 128) << 12;
    v20 += *(_QWORD *)(a1 + 88) << 12;
    v19 = *(_QWORD *)(a1 + 136) << 12;
    v6 = v11;
    v19 += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v20 = *(_QWORD *)(a1 + 568);
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
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 8));
      ++*(_DWORD *)v6;
    }
    RtlLockHeap(a1);
    while ( (int)RtlpWalkHeapInternal(a1, (__int64)&v15) >= 0 )
    {
      if ( (BYTE2(v16) & 1) != 0 )
      {
        v14 = *((_QWORD *)&v15 + 1);
        v12 = v15;
        v13 = 0LL;
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping(v6, v15);
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
    RtlUnlockHeap(a1);
    if ( v3 )
    {
      --*(_DWORD *)v6;
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v6 + 8));
    }
  }
  return (unsigned int)v8;
}
