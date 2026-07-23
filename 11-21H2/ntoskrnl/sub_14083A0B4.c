/*
 * XREFs of sub_14083A0B4 @ 0x14083A0B4
 * Callers:
 *     sub_1408394BC @ 0x1408394BC (sub_1408394BC.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     RtlMergeRangeLists @ 0x1409B59D0 (RtlMergeRangeLists.c)
 * Callees:
 *     sub_14083A1D0 @ 0x14083A1D0 (sub_14083A1D0.c)
 */

__int64 __fastcall sub_14083A0B4(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 v6; // r9
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned __int64 *v10; // rdx
  _QWORD *v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx

  *((_BYTE *)a2 + 33) &= ~2u;
  v4 = a2[1];
  v5 = 0;
  v6 = *a2;
  if ( (_QWORD *)*a1 == a1 || v6 > *(_QWORD *)(a1[1] - 32LL) )
  {
LABEL_3:
    v7 = (_QWORD *)a1[1];
    v8 = a2 + 5;
    if ( (_QWORD *)*v7 != a1 )
      __fastfail(3u);
    *v8 = a1;
    a2[6] = (__int64)v7;
    *v7 = v8;
    a1[1] = v8;
  }
  else
  {
    v10 = (unsigned __int64 *)(*a1 - 40LL);
    while ( 1 )
    {
      if ( v4 < *v10 )
      {
        v12 = (__int64 *)v10[6];
        v13 = *v12;
        a2[5] = *v12;
        a2[6] = (__int64)v12;
        *(_QWORD *)(v13 + 8) = a2 + 5;
        *v12 = (__int64)(a2 + 5);
        return v5;
      }
      if ( *v10 >= v6 || v10[1] >= v6 )
        return (unsigned int)sub_14083A1D0(a1, v10, a2, a3);
      v11 = (_QWORD *)v10[5];
      v10 = v11 - 5;
      if ( a1 == v11 )
        goto LABEL_3;
    }
  }
  return v5;
}
