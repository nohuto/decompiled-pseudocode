/*
 * XREFs of sub_1406A05E4 @ 0x1406A05E4
 * Callers:
 *     sub_1402298D0 @ 0x1402298D0 (sub_1402298D0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406A06A8 @ 0x1406A06A8 (sub_1406A06A8.c)
 *     sub_1407F8C9C @ 0x1407F8C9C (sub_1407F8C9C.c)
 */

__int64 __fastcall sub_1406A05E4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v9; // rcx
  int v12; // eax

  v3 = *(unsigned int *)(a1 + 596);
  v4 = (_QWORD *)(a1 + 584);
  v5 = *(_QWORD **)(a1 + 584);
  v9 = &v5[v3];
  while ( v5 < v9 )
  {
    if ( *v5 == a2 )
      return 0;
    ++v5;
  }
  if ( (unsigned int)sub_1406A06A8(v3, a2, a3, (int)a1 + 592, (__int64)v4) )
  {
    *(_QWORD *)(*v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 596))++) = a2;
    v12 = sub_14042A5E0(*(_QWORD *)(a1 + 352), a3);
    if ( v12 >= 0 )
      return 0;
    return (unsigned int)v12;
  }
  else
  {
    sub_1407F8C9C(a1);
    return (unsigned int)-1073741670;
  }
}
