/*
 * XREFs of sub_180031DF4 @ 0x180031DF4
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B227C @ 0x1800B227C (sub_1800B227C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180031DF4(_QWORD *a1, __int128 *a2, __int64 a3)
{
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int128 v8; // rdi
  __int128 v9; // kr00_16
  volatile signed __int32 *v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v12 = 0LL;
  v5 = *((_QWORD *)a2 + 1);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v8 = *a2;
        v12 = v8;
        goto LABEL_6;
      }
    }
  }
  v8 = v12;
LABEL_6:
  if ( (_QWORD)v8 )
  {
    a1[2] = sub_1800B227C(v8, a3);
    v9 = 0uLL;
    if ( *((_QWORD *)&v8 + 1) )
    {
      v9 = v8;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 12LL));
    }
    *a1 = v9;
    v10 = (volatile signed __int32 *)a1[1];
    a1[1] = *((_QWORD *)&v9 + 1);
    if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  sub_180010910((__int64)&v12);
  return a1;
}
