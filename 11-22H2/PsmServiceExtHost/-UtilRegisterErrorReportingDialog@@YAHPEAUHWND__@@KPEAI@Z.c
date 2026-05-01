/*
 * XREFs of ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097694
 * Callers:
 *     ReportHangInternal @ 0x180052C14 (ReportHangInternal.c)
 * Callees:
 *     GetProcAddress_0 @ 0x18004A40A (GetProcAddress_0.c)
 *     SetLastError_0 @ 0x18004A43C (SetLastError_0.c)
 *     FreeLibrary_0 @ 0x18004A448 (FreeLibrary_0.c)
 *     LoadLibraryExW_0 @ 0x18004A454 (LoadLibraryExW_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004AAC4 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004ABA4 (IsRegisterWindowMessageWPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UtilRegisterErrorReportingDialog(HWND hwnd, unsigned int a2, unsigned int *a3)
{
  HMODULE Library; // rbx
  DWORD v6; // ecx
  UINT v7; // eax
  unsigned int v8; // edi
  FARPROC RegisterErrorReportingDialog; // rax

  if ( !hwnd || !a2 )
    return 0;
  if ( !IsRegisterWindowMessageWPresent() || !IsChangeWindowMessageFilterExPresent() )
  {
    v6 = 127;
    goto LABEL_14;
  }
  Library = LoadLibraryExW_0(L"user32.dll", 0LL, 0x800u);
  if ( !Library )
  {
    v6 = 126;
LABEL_14:
    v8 = 0;
    SetLastError_0(v6);
    return v8;
  }
  v7 = RegisterWindowMessageW(L"WerHangRepMessage");
  if ( v7 )
  {
    v8 = ChangeWindowMessageFilterEx(hwnd, v7, 1u, 0LL);
    if ( !v8 )
      goto LABEL_12;
    RegisterErrorReportingDialog = GetProcAddress_0(Library, "RegisterErrorReportingDialog");
    if ( RegisterErrorReportingDialog )
    {
      v8 = ((__int64 (__fastcall *)(HWND, _QWORD))RegisterErrorReportingDialog)(hwnd, a2);
      goto LABEL_12;
    }
  }
  v8 = 0;
LABEL_12:
  FreeLibrary_0(Library);
  return v8;
}
