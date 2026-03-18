/*
 * XREFs of ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x1801A6160
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x18027C568 (-WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::WaitForVBlank(CDDisplayRenderTarget *this, void *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( *((_QWORD *)this + 4) )
  {
    v2 = CDDisplaySwapChain::WaitForVBlank(this, a2);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0xE1u);
  }
  else
  {
    v4 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003304442, 0xE5u);
  }
  return v4;
}
