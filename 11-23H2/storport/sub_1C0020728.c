/*
 * XREFs of sub_1C0020728 @ 0x1C0020728
 * Callers:
 *     sub_1C00A353C @ 0x1C00A353C (sub_1C00A353C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00207BC @ 0x1C00207BC (sub_1C00207BC.c)
 */

__int64 __fastcall sub_1C0020728(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = sub_1C0007CF4(256LL, 40LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
      result = sub_1C00207BC(v4, 20LL, L"%06x", *(_DWORD *)(a1 + 96) & 0xFFFFFF);
    else
      result = sub_1C00207BC(
                 v4,
                 20LL,
                 L"%02x%02x%02x",
                 *(unsigned __int8 *)(a1 + 96),
                 *(unsigned __int8 *)(a1 + 97),
                 *(unsigned __int8 *)(a1 + 98));
  }
  else
  {
    result = 3221225495LL;
  }
  *a2 = v5;
  return result;
}
