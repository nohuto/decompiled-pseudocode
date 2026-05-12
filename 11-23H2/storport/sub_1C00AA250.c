/*
 * XREFs of sub_1C00AA250 @ 0x1C00AA250
 * Callers:
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C00AA250(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rax

  v2 = *(unsigned int *)(a1[29] + 64LL);
  v3 = (unsigned int)(v2 + 16);
  if ( v3 < 0x10 )
    return 3221225495LL;
  if ( v3 < v2 )
    return 3221225495LL;
  v4 = (_QWORD *)sub_1C0007CF4(64LL, v3, 1162699090LL, *(_QWORD *)(*a1 + 8LL));
  a1[30] = v4;
  if ( !v4 )
    return 3221225495LL;
  *v4 = a1;
  *(_QWORD *)(a1[30] + 8LL) = a1;
  return 0LL;
}
