/*
 * XREFs of sub_1C0012FC0 @ 0x1C0012FC0
 * Callers:
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C00382BC @ 0x1C00382BC (sub_1C00382BC.c)
 *     sub_1C003AC60 @ 0x1C003AC60 (sub_1C003AC60.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     sub_1C004BD5C @ 0x1C004BD5C (sub_1C004BD5C.c)
 *     sub_1C0061200 @ 0x1C0061200 (sub_1C0061200.c)
 *     sub_1C0062370 @ 0x1C0062370 (sub_1C0062370.c)
 * Callees:
 *     sub_1C0013068 @ 0x1C0013068 (sub_1C0013068.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 */

__int64 __fastcall sub_1C0012FC0(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned __int8 v5; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = sub_1C0013068(a1 + 640);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  if ( v3 )
    v5 = *(_BYTE *)(v3 + 56);
  else
    v5 = -1;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C(
      *(_QWORD *)(a1 + 24),
      5,
      (_DWORD)retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)*(_DWORD *)(a1 + 96) | (v5 << 8)) << 8)) << 8),
      *(int *)(a1 + 680),
      v2,
      0LL);
  return v4;
}
