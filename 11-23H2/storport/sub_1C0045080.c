/*
 * XREFs of sub_1C0045080 @ 0x1C0045080
 * Callers:
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortPauseDevice @ 0x1C0046AE0 (StorPortPauseDevice.c)
 *     sub_1C004BD5C @ 0x1C004BD5C (sub_1C004BD5C.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 * Callees:
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C0040CEC @ 0x1C0040CEC (sub_1C0040CEC.c)
 */

void __fastcall sub_1C0045080(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_1C0040CEC(a1 + 656);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 56);
  else
    v3 = -1;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C(
      *(_QWORD *)(a1 + 24),
      4,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)*(_DWORD *)(a1 + 96) | (v3 << 8)) << 8)) << 8),
      *(int *)(a1 + 680),
      0LL,
      0LL);
}
