/*
 * XREFs of MiSplitMirrorBitMap @ 0x140A2F344
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 *     MiActOnMirrorBitmap @ 0x140A2F2A8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14020B1E8 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitMirrorBitMap(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rdi
  __int64 result; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v5 = a2 + a3;
    result = MiSplitBitmapPages(9, v3 + (a2 >> 3), 8 * (((a2 + a3 + 7) >> 3) - (a2 >> 3)));
    if ( !(_DWORD)result )
      return result;
    if ( v5 > *a1 )
      *a1 = v5;
  }
  return 1LL;
}
