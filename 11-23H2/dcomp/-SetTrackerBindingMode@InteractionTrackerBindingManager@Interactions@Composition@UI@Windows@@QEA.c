/*
 * XREFs of ?SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIW4InteractionBindingAxisModes@2345@@Z @ 0x180187BFC
 * Callers:
 *     ?SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0W4InteractionBindingAxisModes@2345@@Z @ 0x18013AA10 (-SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInterac.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@?$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V?$allocator@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAU234567@AEAI1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801878EC (--$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@-$vector@UInteractionTr.c)
 *     ??$_Move_unchecked@PEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@PEAU123456@@std@@YAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@PEAU123456@00@Z @ 0x180187A74 (--$_Move_unchecked@PEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@In.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::SetTrackerBindingMode(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  int v4; // esi
  __int64 v7; // rcx
  _DWORD *i; // rbx
  const void *v9; // r9
  _DWORD *v10; // rax
  const char *v11; // [rsp+28h] [rbp-20h]
  int v12[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = a4;
  if ( a2 == a3 )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontrackerbindingmanager.cpp",
      (const char *)0x80070057LL,
      (int)"Tried to bind a tracker to itself.",
      v11);
    return 2147942487LL;
  }
  else
  {
    v7 = a1 + 136;
    v12[0] = a4;
    for ( i = *(_DWORD **)v7; i != *(_DWORD **)(a1 + 144); i += 3 )
    {
      if ( a2 == *i && a3 == i[1] || a2 == i[1] && a3 == *i )
      {
        if ( i[2] == a4 )
          return 0LL;
        i[2] = a4;
        v9 = i;
        goto LABEL_17;
      }
    }
    if ( !a4 )
      return 0LL;
    v10 = *(_DWORD **)(v7 + 8);
    if ( v10 == *(_DWORD **)(v7 + 16) )
    {
      std::vector<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem>::_Emplace_reallocate<unsigned int &,unsigned int &,enum InteractionTrackerBindingModeFlags &>(
        (const char *)v7,
        (__int64)v10,
        &v14,
        &v15,
        v12);
      v4 = v12[0];
    }
    else
    {
      *v10 = a2;
      v10[1] = a3;
      v10[2] = a4;
      *(_QWORD *)(v7 + 8) += 12LL;
    }
    v9 = (const void *)(*(_QWORD *)(a1 + 144) - 12LL);
LABEL_17:
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0,
      v9,
      0xCuLL);
    if ( !v4 )
    {
      std::_Move_unchecked<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem *,Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem *>(
        (__int64)(i + 3),
        *(_QWORD *)(a1 + 144),
        (__int64)i);
      *(_QWORD *)(a1 + 144) -= 12LL;
    }
    return 0LL;
  }
}
