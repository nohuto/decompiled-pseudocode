/*
 * XREFs of sub_1C0061148 @ 0x1C0061148
 * Callers:
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 * Callees:
 *     sub_1C0013068 @ 0x1C0013068 (sub_1C0013068.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 */

__int64 __fastcall sub_1C0061148(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned int)sub_1C0013068(a1 + 640);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C(
      *(_QWORD *)(a1 + 24),
      5,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)*(_DWORD *)(a1 + 96) | (v4 << 8)) << 8)) << 8),
      *(int *)(a1 + 680),
      v2,
      0LL);
  if ( (_DWORD)v2 )
    sub_1C001A194(a1, 0);
  return (unsigned int)v2;
}
