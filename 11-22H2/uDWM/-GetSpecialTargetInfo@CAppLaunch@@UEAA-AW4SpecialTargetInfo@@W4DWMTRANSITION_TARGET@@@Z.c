/*
 * XREFs of ?GetSpecialTargetInfo@CAppLaunch@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DAC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppLaunch::GetSpecialTargetInfo(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  _DWORD *i; // r9

  v2 = 0;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CAppLaunch::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( ++v3 )
      return v2;
  }
  return (unsigned int)`CAppLaunch::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[2 * v3 + 1];
}
