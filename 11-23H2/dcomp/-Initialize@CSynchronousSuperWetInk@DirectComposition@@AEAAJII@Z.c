/*
 * XREFs of ?Initialize@CSynchronousSuperWetInk@DirectComposition@@AEAAJII@Z @ 0x1800FC9B8
 * Callers:
 *     ?Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enum@SynchronousSuperWetLookupMode@@PEAPEAV12@@Z @ 0x1800FC3CC (-Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::Initialize(
        DirectComposition::CSynchronousSuperWetInk *this)
{
  int TipPointsQueue; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  TipPointsQueue = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                     (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 2) + 8LL),
                     10,
                     *((int *)this + 20));
  if ( TipPointsQueue < 0 )
  {
    v3 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)TipPointsQueue);
    return (unsigned int)TipPointsQueue;
  }
  TipPointsQueue = DirectComposition::CSynchronousSuperWetInk::CreateTipPointsQueue(this);
  if ( TipPointsQueue < 0 )
  {
    v3 = 51LL;
    goto LABEL_3;
  }
  TipPointsQueue = DirectComposition::CSynchronousSuperWetInk::CreatePerFrameDataQueue(this);
  if ( TipPointsQueue < 0 )
  {
    v3 = 58LL;
    goto LABEL_3;
  }
  return 0LL;
}
