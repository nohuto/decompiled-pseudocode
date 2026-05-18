/*
 * XREFs of sub_18002A4FC @ 0x18002A4FC
 * Callers:
 *     sub_18007CBD4 @ 0x18007CBD4 (sub_18007CBD4.c)
 *     sub_18007CC7C @ 0x18007CC7C (sub_18007CC7C.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 *     sub_1800868D4 @ 0x1800868D4 (sub_1800868D4.c)
 *     sub_18008F64C @ 0x18008F64C (sub_18008F64C.c)
 *     sub_18008FDC8 @ 0x18008FDC8 (sub_18008FDC8.c)
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 *     sub_1800958C0 @ 0x1800958C0 (sub_1800958C0.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800F25E0 @ 0x1800F25E0 (sub_1800F25E0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18002A4FC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
