/*
 * XREFs of ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180095470
 * Callers:
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x180095254 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x18009536C (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
        HWND *this,
        struct IDWMStoryboardListener *a2)
{
  __int64 *v4; // rax
  int v5; // ebx
  HCURSOR CursorW; // rax
  const char *v7; // r9
  HWND v8; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-49h]
  WNDCLASSEXW v12; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int pvAttribute; // [rsp+D0h] [rbp+67h] BYREF
  char *v15; // [rsp+E0h] [rbp+77h] BYREF

  v15 = (char *)(this + 4);
  v4 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
  v5 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v4);
  if ( v5 < 0 )
  {
    v10 = 13LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v5,
      v11);
    return (unsigned int)v5;
  }
  memset_0(&v12, 0, sizeof(v12));
  v12.cbSize = 80;
  v12.lpfnWndProc = (WNDPROC)CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase;
  v12.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  v12.cbWndExtra = 8;
  v12.hCursor = CursorW;
  v12.lpszClassName = L"DummyDWMListenerWindow";
  RegisterClassExW(&v12);
  CreateWindowExW(0x8200080u, L"DummyDWMListenerWindow", 0LL, 0x80000000, 0, 0, 0, 0, 0LL, 0LL, &_ImageBase, this);
  v8 = this[3];
  if ( v8 )
  {
    pvAttribute = 1;
    v5 = DwmSetWindowAttribute(v8, 0xDu, &pvAttribute, 4u);
    if ( v5 >= 0 )
    {
      ShowWindow(this[3], 8);
      return 0LL;
    }
    v10 = 41LL;
    goto LABEL_7;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x26,
           (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
           v7);
}
