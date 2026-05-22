/*
 * XREFs of ?ConfigurePositionXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180137DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18010E31C (--1-$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V-$all.c)
 *     ??$SaveIterableListToLocal@VInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaModifier@2345@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@3@PEAV?$vector@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@V?$allocator@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1801352E4 (--$SaveIterableListToLocal@VInteractionTrackerInertiaModifier@Interactions@Composition@UI@Window.c)
 *     ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137B44 (-ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV-$span@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::ConfigurePositionXInertiaModifiers(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rsi
  void *v8; // rdi
  gsl::details *v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v14 = 0LL;
  v13 = 0LL;
  v3 = Windows::UI::Composition::AnimationHelper::SaveIterableListToLocal<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>(
         a2,
         (__int64)&v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC53,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v3);
LABEL_5:
    std::vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>::~vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>((__int64)&v13);
    return v4;
  }
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
  v6 = a1 - 136;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v6 + 32) & 2) == 0 )
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    v4 = -2147483629;
    goto LABEL_5;
  }
  v8 = (void *)v13;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v12, (__int64)(*((_QWORD *)&v13 + 1) - v13) >> 3);
  if ( v12[0] == -1LL || !v8 && v12[0] )
  {
    gsl::details::terminate(v9);
    JUMPOUT(0x180137F7DLL);
  }
  if ( !v12[0] )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(v6 + 344));
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v6 + 24) + 456LL),
      *(_DWORD *)(v6 + 128),
      37,
      0);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v6 + 24) + 456LL),
      *(_DWORD *)(v6 + 128),
      41,
      0LL,
      0LL);
    goto LABEL_13;
  }
  v12[1] = v8;
  v10 = Windows::UI::Composition::Interactions::InteractionTracker::ConfigureInertiaModifiers(v6, v12, 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
LABEL_13:
    v11 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6FC,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)(unsigned int)v10);
  DoStackCaptureDirect(v11, 0xC5Au);
LABEL_14:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  if ( v8 )
    std::_Deallocate<16,0>(v8, (v14 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
  return v11;
}
