/*
 * XREFs of ?RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@@Z @ 0x18013A78C
 * Callers:
 *     ?Remove@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z @ 0x180190138 (-Remove@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVis.c)
 *     ?RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18019030C (-RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?erase@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@@2@@Z @ 0x18013C748 (-erase@-$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::RemoveManipulation(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::UI::Composition::CompositionManipulation *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v6; // rdi
  struct Windows::UI::Composition::CompositionManipulation **v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  const void *v12; // r9
  __int64 v13; // rcx
  const char *v14; // r9
  const char *v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x40E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid manipulation object specified",
      v15);
    return 2147942487LL;
  }
  v6 = (_QWORD *)((char *)this + 200);
  v7 = (struct Windows::UI::Composition::CompositionManipulation **)*((_QWORD *)this + 25);
  v8 = *((_QWORD *)this + 29) - *((_QWORD *)this + 28);
  v9 = (__int64)(*((_QWORD *)this + 26) - (_QWORD)v7) >> 4;
  if ( v9 )
  {
    if ( (v8 & 0xFFFFFFFFFFFFFFF8uLL) > 0x1000 )
    {
      RoOriginateErrorW(2147942487LL, 0LL, L"Manipulations resource list size exceeds max allowed size.");
      return 2147942487LL;
    }
    v10 = 0LL;
    while ( *v7 != a2 )
    {
      ++v10;
      v7 += 2;
      if ( v10 >= v9 )
        return 0LL;
    }
    if ( (_DWORD)v10 != -1 )
    {
      v11 = (int)v10;
      if ( (*((_BYTE *)a2 + 32) & 2) != 0
        && *(_DWORD *)(*((_QWORD *)this + 28) + 8LL * (int)v10) != *((_DWORD *)a2 + 32) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          1076LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
          (const char *)(unsigned int)v10);
      }
      std::vector<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>::erase(
        v6,
        &v17,
        *v6 + 16LL * (int)v10);
      memmove_0(
        (void *)(*((_QWORD *)this + 28) + 8 * v11),
        (const void *)(*((_QWORD *)this + 28) + 8 * v11 + 8),
        *((_QWORD *)this + 29) - (*((_QWORD *)this + 28) + 8 * v11 + 8));
      *((_QWORD *)this + 29) -= 8LL;
      v12 = (const void *)*((_QWORD *)this + 28);
      v13 = (__int64)(*((_QWORD *)this + 29) - (_QWORD)v12) >> 3;
      if ( !v13 )
        v12 = 0LL;
      DirectComposition::CDevice::ResourceSetBufferProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        21,
        v12,
        8 * v13);
      if ( (((*((_QWORD *)this + 29) - *((_QWORD *)this + 28)) ^ ((__int64)(v6[1] - *v6) >> 1)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          1089LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
          v14);
    }
  }
  else if ( (v8 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1043LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      a4);
  }
  return 0LL;
}
