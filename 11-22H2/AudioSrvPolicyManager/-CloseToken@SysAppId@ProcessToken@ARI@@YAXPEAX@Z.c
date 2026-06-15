/*
 * XREFs of ?CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z @ 0x180046EF0
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180047130 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::ProcessToken::SysAppId::CloseToken(ARI::ProcessToken::SysAppId *this, void *a2)
{
  if ( this != (ARI::ProcessToken::SysAppId *)-4LL )
    CloseHandle(this);
}
