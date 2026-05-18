/*
 * XREFs of sub_180026808 @ 0x180026808
 * Callers:
 *     sub_1800280E8 @ 0x1800280E8 (sub_1800280E8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_180018610 @ 0x180018610 (sub_180018610.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800355F8 @ 0x1800355F8 (sub_1800355F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180026808(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp-10h]

  sub_180018610(a2);
  sub_18002C460(a1 + 101, &v16);
  v6 = a1 + 108;
  v14 = 0LL;
  v7 = a2[1];
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    v8 = *a2;
    *(_QWORD *)&v14 = *a2;
    *((_QWORD *)&v14 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    v9 = v7;
  }
  v10 = (_QWORD *)a1[109];
  if ( v10 == (_QWORD *)a1[110] )
  {
    sub_180011198(a1 + 108, (__int64)v10, &v14);
    v11 = *((_QWORD *)&v14 + 1);
  }
  else
  {
    *v10 = v8;
    v10[1] = v9;
    v11 = 0LL;
    *((_QWORD *)&v14 + 1) = 0LL;
    a1[109] += 16LL;
  }
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int, _QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(
      *((_QWORD *)&v14 + 1),
      v10,
      v9,
      v6,
      1,
      v14);
  if ( v17 )
    j_LanguageEnumProc(v16, v10, v9, v6);
  v15 = 0LL;
  v12 = a3[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a3[1];
  }
  *(_QWORD *)&v15 = *a3;
  *((_QWORD *)&v15 + 1) = v12;
  sub_1800355F8(a1, *a2, &v15, v6);
  sub_180010910((__int64)a3);
  return a2;
}
