/*
 * XREFs of ?TryPreviewWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4PreviewOption@34567@I@Z @ 0x180649FC4
 * Callers:
 *     ?TryPreviewWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@HIPEA_N@Z @ 0x180649F50 (-TryPreviewWindows@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_T$$QEAPEAUHWND__@@@Z @ 0x1806468E4 (--$emplace_back@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA-A_T$.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryPreviewWindows(
        LPARAM a1,
        unsigned int **a2,
        int a3,
        int a4)
{
  __int64 v6; // rbx
  unsigned int *v7; // rdi
  __int64 v8; // rsi
  void *v9; // rdi
  int v10; // eax
  char v11; // si
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPARAM lParam; // [rsp+70h] [rbp+8h] BYREF

  lParam = a1;
  v13 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v7 = *a2;
  v8 = (__int64)&(*a2)[*((unsigned int *)a2 + 2)];
  if ( *a2 != (unsigned int *)v8 )
  {
    do
    {
      lParam = *v7;
      std::vector<HWND__ *>::emplace_back<HWND__ *>((__int64)&v13, &lParam);
      ++v7;
    }
    while ( v7 != (unsigned int *)v8 );
    v6 = v14;
  }
  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_1ecc7178456967fe182458c6abef720a_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  v9 = (void *)v13;
  v10 = DwmpActivateLivePreviewEx(a3 == 0, v13, (__int64)(*((_QWORD *)&v13 + 1) - v13) >> 3, lParam, a4, 0LL);
  if ( v10 >= 0 )
  {
    v11 = 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C5,
      (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
      (const char *)(unsigned int)v10);
    v11 = 0;
  }
  if ( v9 )
    std::_Deallocate<16,0>(v9, (v6 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  return v11;
}
