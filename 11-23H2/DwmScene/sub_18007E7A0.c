/*
 * XREFs of sub_18007E7A0 @ 0x18007E7A0
 * Callers:
 *     sub_18007CBB4 @ 0x18007CBB4 (sub_18007CBB4.c)
 *     sub_18007CC70 @ 0x18007CC70 (sub_18007CC70.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18007E7A0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
