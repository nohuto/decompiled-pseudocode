/*
 * XREFs of ??1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ @ 0x180173F28
 * Callers:
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18017310C (--1TouchGestureProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x180173F74 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 */

void __fastcall TouchGestureProcessor::PointerEventsDetector::~PointerEventsDetector(
        TouchGestureProcessor::PointerEventsDetector *this,
        __int64 a2)
{
  __int64 v3; // rdx

  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 88,
    a2);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 24,
    v3);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (char *)this + 8,
    (char *)this + 8,
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 1), 0x20uLL);
}
