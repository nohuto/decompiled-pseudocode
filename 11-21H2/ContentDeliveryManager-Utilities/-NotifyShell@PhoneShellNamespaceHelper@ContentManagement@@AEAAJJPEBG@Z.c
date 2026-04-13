/*
 * XREFs of ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x18003B514
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180040AE0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180046B10 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::NotifyShell(
        ContentManagement::PhoneShellNamespaceHelper *this,
        LONG a2,
        const unsigned __int16 *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v7; // rbx
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  memset(pv, 0, 24);
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"::%ws",
         a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = pv[0];
    SHChangeNotify(a2, 5u, pv[0], 0LL);
    if ( v7 )
      CoTaskMemFree(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x371,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4,
      (int)pv[0]);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v5;
  }
}
