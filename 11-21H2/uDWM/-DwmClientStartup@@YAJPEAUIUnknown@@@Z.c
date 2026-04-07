/*
 * XREFs of ?DwmClientStartup@@YAJPEAUIUnknown@@@Z @ 0x1800522A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1800524C4 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DwmClientStartup(struct IUnknown *a1, struct CDesktopManager **a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDesktopManager::Create(a1, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"2", 2LL, v2, 0x6Eu);
  return v3;
}
