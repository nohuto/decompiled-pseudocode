/*
 * XREFs of sub_140587900 @ 0x140587900
 * Callers:
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_14058727C @ 0x14058727C (sub_14058727C.c)
 *     sub_1405891A4 @ 0x1405891A4 (sub_1405891A4.c)
 */

unsigned __int64 *__fastcall sub_140587900(__int64 a1)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // rax

  v2 = a1 & 0x3FFFFF;
  v3 = (_QWORD *)(qword_140C52968 + 8 * v2);
  v4 = sub_14058727C(v3);
  v7 = *(_QWORD *)(v4 + 16) + 24512LL * *((unsigned int *)sub_1402C1550((unsigned __int64)(unsigned int)v2 << 18) + 2);
  v8 = *(unsigned __int64 **)(v7 + 22640);
  while ( v8 )
  {
    v9 = v8[3] & 0x3FFFFF;
    if ( v2 <= v9 )
    {
      if ( v2 >= v9 )
        break;
      v8 = (unsigned __int64 *)*v8;
    }
    else
    {
      v8 = (unsigned __int64 *)v8[1];
    }
  }
  if ( (*(_DWORD *)v3 & 0x1C00000) == 0x1000000LL )
    sub_1405891A4(v4, a1, v5, v6);
  RtlAvlRemoveNode((unsigned __int64 *)(v7 + 22640), v8);
  *v3 &= ~0x1000000000000uLL;
  return v8;
}
