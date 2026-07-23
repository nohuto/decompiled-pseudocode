/*
 * XREFs of sub_14045ADBE @ 0x14045ADBE
 * Callers:
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 *     sub_140573B50 @ 0x140573B50 (sub_140573B50.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045ADBE(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 192);
  v6 = 3LL * (a4 + a3 * (unsigned int)*(unsigned __int8 *)(a1 + 185));
  v7 = a2 & *(_QWORD *)(v5 + 8 * v6);
  v8 = a2 & *(_QWORD *)(v5 + 8 * v6 + 8);
  v9 = a2 & *(_QWORD *)(v5 + 8 * v6 + 16);
  if ( v9 )
  {
    result = 0LL;
    if ( v8 )
    {
      a2 = v7;
      if ( !v7 )
        a2 = v8;
    }
    else
    {
      v8 = v9;
      a2 = v9;
    }
  }
  else
  {
    v9 = a2;
    v8 = a2;
    result = 1LL;
  }
  *a5 = a2;
  a5[1] = v8;
  a5[2] = v9;
  return result;
}
