/*
 * XREFs of sub_140AA1F1C @ 0x140AA1F1C
 * Callers:
 *     sub_140AA18D0 @ 0x140AA18D0 (sub_140AA18D0.c)
 * Callees:
 *     sub_140AA1B48 @ 0x140AA1B48 (sub_140AA1B48.c)
 */

__int64 __fastcall sub_140AA1F1C(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  __int64 *v5; // rsi
  int v7; // ecx
  int v8; // ecx
  __int64 v10; // rbx
  __int64 v11; // r8
  _QWORD *v12; // rax

  v3 = *a2;
  *a3 = 0LL;
  v5 = 0LL;
  *(_OWORD *)a1 = v3;
  *(_OWORD *)(a1 + 16) = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 64) = a2[4];
  v7 = *(_DWORD *)a1 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 != 1 )
      return 3221225659LL;
    v5 = (__int64 *)(a1 + 24);
    v10 = 56LL;
  }
  else
  {
    v10 = 24LL;
  }
  if ( v5 )
    v11 = *v5;
  else
    v11 = 0LL;
  v12 = sub_140AA1B48(*(_QWORD *)(v10 + a1), *(_QWORD *)(a1 + 32), v11);
  *a3 = v12;
  if ( !v12 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 32) = v12;
  if ( !v5 || (*v5 = (__int64)sub_140AA1EB0, *(_QWORD *)(v10 + a1)) )
    *(_QWORD *)(v10 + a1) = sub_140AA1E50;
  return 0LL;
}
