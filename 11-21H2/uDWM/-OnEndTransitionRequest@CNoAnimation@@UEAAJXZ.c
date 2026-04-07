/*
 * XREFs of ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800D7EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800D80E0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 */

__int64 __fastcall CNoAnimation::OnEndTransitionRequest(CNoAnimation *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  CBaseObject *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = CStoryboard::OnEndTransitionRequest(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(this, 0LL, 1, 1, &v6);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x117Du);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x117Bu);
  }
  return v3;
}
