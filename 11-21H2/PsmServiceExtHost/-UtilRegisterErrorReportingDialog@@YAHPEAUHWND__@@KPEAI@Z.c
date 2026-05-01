/*
 * XREFs of ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18009CAF4
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18009C838 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     GetProcAddress_0 @ 0x18004F19E (GetProcAddress_0.c)
 *     SetLastError_0 @ 0x18004F1DC (SetLastError_0.c)
 *     FreeLibrary_0 @ 0x18004F1E8 (FreeLibrary_0.c)
 *     LoadLibraryExW_0 @ 0x18004F1F4 (LoadLibraryExW_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004F898 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004F978 (IsRegisterWindowMessageWPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UtilRegisterErrorReportingDialog(HWND hwnd, unsigned int a2, unsigned int *a3)
{
  HMODULE Library; // rdi
  DWORD v6; // ecx
  unsigned int v7; // ebx
  UINT v8; // eax
  FARPROC RegisterErrorReportingDialog; // rax

  if ( !hwnd || !a2 )
    return 0;
  if ( !IsRegisterWindowMessageWPresent() || !IsChangeWindowMessageFilterExPresent() )
  {
    v6 = 127;
    goto LABEL_7;
  }
  Library = LoadLibraryExW_0(L"user32.dll", 0LL, 0x800u);
  if ( Library )
  {
    v8 = RegisterWindowMessageW(L"WerHangRepMessage");
    if ( v8 )
    {
      v7 = ChangeWindowMessageFilterEx(hwnd, v8, 1u, 0LL);
      if ( !v7 )
        goto LABEL_13;
      RegisterErrorReportingDialog = GetProcAddress_0(Library, "RegisterErrorReportingDialog");
      if ( RegisterErrorReportingDialog )
      {
        v7 = ((__int64 (__fastcall *)(HWND, _QWORD))RegisterErrorReportingDialog)(hwnd, a2);
        goto LABEL_13;
      }
    }
    v7 = 0;
LABEL_13:
    FreeLibrary_0(Library);
    return v7;
  }
  v6 = 126;
LABEL_7:
  v7 = 0;
  SetLastError_0(v6);
  return v7;
}
