/*
 * XREFs of NtGdiGetFontData @ 0x1C00184C0
 * Callers:
 *     <none>
 * Callees:
 *     ulGetFontData @ 0x1C00185C4 (ulGetFontData.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  void *v9; // rdi
  unsigned int FontData; // ebx
  ULONG64 v12; // rdx

  v9 = 0LL;
  FontData = -1;
  if ( a5 )
  {
    if ( a5 <= 0x2710000 )
      v9 = (void *)AllocFreeTmpBuffer(a5);
    if ( v9 )
    {
      FontData = ulGetFontData(a1, a2, a3, v9, a5);
      if ( FontData != -1 )
      {
        if ( FontData > a5 )
          FontData = -1;
        if ( FontData != -1 )
        {
          v12 = (ULONG64)a4 + FontData;
          if ( v12 > MmUserProbeAddress || v12 <= (unsigned __int64)a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a4, v9, FontData);
        }
      }
      FreeTmpBuffer(v9);
    }
  }
  else
  {
    return (unsigned int)ulGetFontData(a1, a2, a3, 0LL, 0);
  }
  return FontData;
}
