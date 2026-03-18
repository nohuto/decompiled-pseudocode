/*
 * XREFs of BgpGxRectangleCreate @ 0x140AAD404
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x1403A89B4 (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x140AABCD8 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AABE28 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     BgpGxFindSubRectangle @ 0x140AAC700 (BgpGxFindSubRectangle.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x140AB14B4 (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x140AB1844 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x1403AA754 (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * a2 * *a1);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
