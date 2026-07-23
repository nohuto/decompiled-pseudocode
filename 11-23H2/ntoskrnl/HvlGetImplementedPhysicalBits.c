/*
 * XREFs of HvlGetImplementedPhysicalBits @ 0x140381950
 * Callers:
 *     KiDetectKvaLeakage @ 0x140A8DE50 (KiDetectKvaLeakage.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x1403819A4 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall HvlGetImplementedPhysicalBits(int *a1)
{
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  HviGetEnlightenmentInformation(&v4);
  v2 = BYTE8(v4) & 0x7F;
  if ( (BYTE8(v4) & 0x7F) != 0 )
  {
    *a1 = v2;
    LOBYTE(v2) = 1;
  }
  return v2;
}
