/*
 * XREFs of sub_14085DA10 @ 0x14085DA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025B380 @ 0x14025B380 (sub_14025B380.c)
 *     sub_14036C210 @ 0x14036C210 (sub_14036C210.c)
 *     sub_1407F1400 @ 0x1407F1400 (sub_1407F1400.c)
 *     sub_1407F15C0 @ 0x1407F15C0 (sub_1407F15C0.c)
 */

__int64 __fastcall sub_14085DA10(__int64 a1, __int128 *a2, __int128 *a3, __int64 a4, KSPIN_LOCK **a5)
{
  KSPIN_LOCK *v5; // rsi
  __int64 *v6; // rbx
  KSPIN_LOCK **v7; // r14
  __int128 v8; // xmm1
  int v9; // eax
  int v10; // edi
  __int64 *v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  KSPIN_LOCK *v15; // [rsp+80h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 && a4 && (v7 = a5) != 0LL )
  {
    v8 = *a3;
    v14 = *a2;
    v13 = v8;
    v9 = sub_14036C210(a1, &v14, &v13, a4, 0, (__int64 *)&v12);
    v6 = v12;
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = sub_1407F1400(v12, &v15);
      if ( v10 >= 0 )
      {
        *v7 = v15;
        return (unsigned int)v10;
      }
      v5 = v15;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v6 )
    sub_1407F15C0(v6);
  if ( v5 )
    sub_14025B380(v5);
  return (unsigned int)v10;
}
