/*
 * XREFs of ?InsertKeyFrame@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMM@Z @ 0x18007C760
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertScalarKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMMPEAVCompositionEasingFunction@234@@Z @ 0x18007C7DC (-InsertScalarKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMMPEAVCompositionEasingFunc.c)
 */

__int64 __fastcall Windows::UI::Composition::ScalarKeyFrameAnimation::Api::InsertKeyFrame(
        Windows::UI::Composition::ScalarKeyFrameAnimation::Api *this,
        float a2,
        float a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  signed int inserted; // eax
  unsigned int v6; // edi

  v3 = (Windows::UI::Composition::ScalarKeyFrameAnimation::Api *)((char *)this - 496);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 59);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertScalarKeyFrame(v3, a2, a3, 0LL);
    v6 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, inserted, 0x49u, 0LL);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
