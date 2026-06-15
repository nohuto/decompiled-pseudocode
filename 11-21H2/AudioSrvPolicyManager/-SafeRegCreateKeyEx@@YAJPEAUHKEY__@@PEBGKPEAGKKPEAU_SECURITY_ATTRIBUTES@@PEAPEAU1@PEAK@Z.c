/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18004006C
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18004006C (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     atexit @ 0x180002AA8 (atexit.c)
 *     _Init_thread_footer @ 0x180002CE0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180002D48 (_Init_thread_header.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x18003E9F8 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18004006C (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
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
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[528]; // [rsp+60h] [rbp-A0h] BYREF

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
      _o_wcsncpy_s(v22, 260LL, v8);
      v12 = (const WCHAR *)v22;
      v8 = v11 + 1;
      goto LABEL_8;
    }
    return 87;
  }
  v12 = v8;
LABEL_8:
  hKey = 0LL;
  v13 = DetectRegistryLink(a1, v12, samDesired, &hKey);
  if ( dword_18005C6F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18005C6F0);
    if ( dword_18005C6F0 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_18005C6F0);
    }
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( (unsigned int)(v14 - 1) <= 1 )
    {
      v15 = hKey;
      dwDisposition = 0;
      if ( hKey )
      {
        dwDisposition = 2;
        goto LABEL_23;
      }
LABEL_19:
      result = RegCreateKeyExW(a1, v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
      if ( result )
        return result;
      if ( dwDisposition != 1 )
      {
        Key = 5;
        goto LABEL_28;
      }
      v15 = hKey;
LABEL_23:
      if ( v12 == v8 )
      {
        if ( a8 )
          *a8 = v15;
        return 0;
      }
      Key = SafeRegCreateKeyEx(v15, v8, 0, 0LL, 0, samDesired, lpSecurityAttributes, a8, 0LL);
LABEL_28:
      RegCloseKey(hKey);
      return Key;
    }
  }
  else if ( hLibModule && (ProcAddress = (FARPROC)qword_18005C700) != 0LL
         || (Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u), (hLibModule = Library) != 0LL)
         && (ProcAddress = GetProcAddress(Library, "NtDeleteKey"), (qword_18005C700 = (__int64)ProcAddress) != 0) )
  {
    if ( !((unsigned int (__fastcall *)(HKEY))ProcAddress)(hKey) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_19;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 5;
}
