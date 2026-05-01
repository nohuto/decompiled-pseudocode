/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18058801C
 * Callers:
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180589AFC (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?get_SnapAssistSnappedWindows@?$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UIGuidedSnapAssistCompletedArgs@34567@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@@Z @ 0x1805B55E0 (-get_SnapAssistSnappedWindows@-$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnap.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

__int64 __fastcall winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  void *v3; // rsi
  size_t v4; // rbx
  __int64 v5; // rbp
  LPVOID v8; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = a3 - (_QWORD)a2;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = (a3 - (__int64)a2) >> 2;
  if ( (_DWORD)v5 )
  {
    v8 = _Platform_CoTaskMemAlloc(4LL * (unsigned int)v5);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 8) = v5;
    v3 = v8;
  }
  memmove_0(v3, a2, v4);
  return a1;
}
