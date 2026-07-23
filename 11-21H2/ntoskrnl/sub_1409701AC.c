/*
 * XREFs of sub_1409701AC @ 0x1409701AC
 * Callers:
 *     sub_1407063CC @ 0x1407063CC (sub_1407063CC.c)
 * Callees:
 *     sub_14059E8F0 @ 0x14059E8F0 (sub_14059E8F0.c)
 */

__int64 __fastcall sub_1409701AC(char *BugCheckParameter3, __int64 a2, ULONG_PTR *a3, __int64 a4)
{
  __int64 *v4; // rsi
  unsigned __int64 v7; // rbx

  v4 = (__int64 *)(a2 + 48);
  v7 = ((*(_DWORD *)(a2 + 24) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  for ( *(_QWORD *)(a4 + 8) = v7 << 12; v7; --v7 )
  {
    sub_14059E8F0(BugCheckParameter3, *v4, *a3, 0x1000u);
    *a3 += 4096LL;
    ++v4;
  }
  return 0LL;
}
