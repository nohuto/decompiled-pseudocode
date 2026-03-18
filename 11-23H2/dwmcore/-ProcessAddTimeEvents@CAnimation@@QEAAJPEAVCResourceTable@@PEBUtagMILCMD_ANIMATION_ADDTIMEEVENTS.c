/*
 * XREFs of ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x18021F4D8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJPEFBUDwmAnimationTimeEventData@@I@Z @ 0x18021F418 (-AddMultipleAndSet@-$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJPEFBUDwmAnimationTimeEventD.c)
 */

__int64 __fastcall CAnimation::ProcessAddTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_ADDTIMEEVENTS *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = DynArray<DwmAnimationTimeEventData,0>::AddMultipleAndSet((__int64)this + 152, a4, a5 >> 4);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1C8u, 0LL);
  return v7;
}
