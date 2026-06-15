/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180046068
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18003D904 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180045004 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180046068 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     atexit @ 0x180016DF8 (atexit.c)
 *     _Init_thread_footer @ 0x180017030 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180017098 (_Init_thread_header.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x18004513C (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180046068 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        REGSAM samDesired,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        HKEY *a8)
{
  const unsigned __int16 *v8; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  const WCHAR *v12; // r14
  int v13; // ebx
  int v14; // ebx
  HKEY v15; // rcx
  FARPROC ProcAddress; // rax
  HMODULE Library; // rax
  LSTATUS result; // eax
  int Key; // ebx
  HKEY v20; // rcx
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD dwDisposition; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[528]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned __int64)(v10 - v8) < 0x104 )
    {
      _o_wcsncpy_s(v23, 260LL, v8);
      v12 = (const WCHAR *)v23;
      v8 = v11 + 1;
      goto LABEL_8;
    }
    return 87;
  }
  v12 = v8;
LABEL_8:
  hKey = 0LL;
  v13 = DetectRegistryLink(a1, v12, samDesired, &hKey);
  if ( dword_180063928 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180063928);
    if ( dword_180063928 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_180063928);
    }
  }
  if ( !v13 )
    goto LABEL_33;
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( hLibModule && (ProcAddress = (FARPROC)qword_180063938) != 0LL
      || (Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u), (hLibModule = Library) != 0LL)
      && (ProcAddress = GetProcAddress(Library, "NtDeleteKey"), (qword_180063938 = (__int64)ProcAddress) != 0) )
    {
      if ( !((unsigned int (__fastcall *)(HKEY))ProcAddress)(hKey) )
      {
        RegCloseKey(hKey);
        v15 = 0LL;
        hKey = 0LL;
        goto LABEL_21;
      }
    }
LABEL_33:
    v20 = hKey;
    Key = 5;
    if ( !hKey )
      return Key;
LABEL_34:
    RegCloseKey(v20);
    return Key;
  }
  if ( (unsigned int)(v14 - 1) > 1 )
    goto LABEL_33;
  v15 = hKey;
LABEL_21:
  dwDisposition = 0;
  if ( v15 )
  {
    dwDisposition = 2;
  }
  else
  {
    result = RegCreateKeyExW(a1, v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
    if ( result )
      return result;
    if ( dwDisposition != 1 )
    {
      Key = 5;
LABEL_32:
      v20 = hKey;
      goto LABEL_34;
    }
    v15 = hKey;
  }
  if ( v12 != v8 )
  {
    Key = SafeRegCreateKeyEx(v15, v8, 0, 0LL, 0, samDesired, lpSecurityAttributes, a8, 0LL);
    goto LABEL_32;
  }
  if ( a8 )
    *a8 = v15;
  return 0;
}
