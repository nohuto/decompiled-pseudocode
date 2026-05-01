/*
 * XREFs of ?IsAllowedSignInfo@@YA_NPEBG0@Z @ 0x180639638
 * Callers:
 *     ?IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z @ 0x180639690 (-IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsAllowedSignInfo(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v3; // bl

  v3 = 0;
  if ( !StrCmpICW(a1, L"Microsoft Corporation") )
    return StrCmpICW(a2, L"Microsoft Edge") == 0;
  return v3;
}
