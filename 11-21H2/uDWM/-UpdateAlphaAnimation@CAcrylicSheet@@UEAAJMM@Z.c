/*
 * XREFs of ?UpdateAlphaAnimation@CAcrylicSheet@@UEAAJMM@Z @ 0x18009B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x18009AA6C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateAlphaAnimation(CAcrylicSheet *this, float a2, float a3)
{
  int started; // eax
  unsigned int v4; // ebx

  started = CAcrylicSheet::StartAlphaAnimation((CAcrylicSheet *)((char *)this - 296), *((double *)this - 13), a2, a3);
  v4 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x384u);
  return v4;
}
