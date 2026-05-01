/*
 * XREFs of ??1_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18077CE08
 * Callers:
 *     ??1?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@QEAA@XZ @ 0x18028C5A4 (--1-$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@w.c)
 *     ??1?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@QEAA@XZ @ 0x18028C5EC (--1-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest::~_tip_TaskGroupPinUnpinToAllVirtualDesktopTest(
        winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest *this)
{
  unsigned __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 2), 2 * v1 + 2);
  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
}
