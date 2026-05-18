/*
 * XREFs of sub_180017448 @ 0x180017448
 * Callers:
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 * Callees:
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_180018610 @ 0x180018610 (sub_180018610.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180035680 @ 0x180035680 (sub_180035680.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180017448(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]

  sub_180018610(a2);
  sub_18002C460(a1 + 101, &v12);
  v4 = a1 + 108;
  v11 = 0LL;
  v5 = a2[1];
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v6 = *a2;
    *(_QWORD *)&v11 = *a2;
    *((_QWORD *)&v11 + 1) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
    v7 = v5;
  }
  v8 = (_QWORD *)a1[109];
  if ( v8 == (_QWORD *)a1[110] )
  {
    sub_180011198(a1 + 108, (__int64)v8, &v11);
    v9 = *((_QWORD *)&v11 + 1);
  }
  else
  {
    *v8 = v6;
    v8[1] = v7;
    v9 = 0LL;
    *((_QWORD *)&v11 + 1) = 0LL;
    a1[109] += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int, _QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(
      *((_QWORD *)&v11 + 1),
      v8,
      v7,
      v4,
      1,
      v11);
  if ( v13 )
    j_LanguageEnumProc(v12, v8, v7, v4);
  sub_180035680(a1, *a2, 1LL, v4);
  return a2;
}
