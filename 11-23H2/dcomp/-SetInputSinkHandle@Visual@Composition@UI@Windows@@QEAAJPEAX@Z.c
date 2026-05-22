/*
 * XREFs of ?SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x180035C98
 * Callers:
 *     ?SetInputSinkHandle@Partner@Visual@Composition@UI@Windows@@UEAAJ_J@Z @ 0x180035D10 (-SetInputSinkHandle@Partner@Visual@Composition@UI@Windows@@UEAAJ_J@Z.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z @ 0x180035648 (-VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     wil::details::ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___::_ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___ @ 0x18010AD24 (wil--details--ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___--_ScopeExitFn__lambda_9d25.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetInputSinkHandle(
        Windows::UI::Composition::Visual *this,
        void *a2)
{
  void *Reference; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v7 = this;
  v8 = 1;
  CSparseStorage::SetReference(
    (Windows::UI::Composition::Visual *)((char *)this + 112),
    0x14u,
    a2,
    (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_inputsink_HANDLE);
  Reference = CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 0x14u);
  v4 = DirectComposition::CDevice::VisualSetInputSink(
         *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
         *((_DWORD *)this + 32),
         Reference);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD14,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)(unsigned int)v4);
  wil::details::ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___::_ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___(v7);
  return v5;
}
