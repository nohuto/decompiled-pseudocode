/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00B4184
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E2880 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x1C00B41E0 (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C00B4DA8 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 OldRedirectionBitmap; // rsi
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = 0;
  OldRedirectionBitmap = GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL, v4, v5);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
  }
  return v2;
}
