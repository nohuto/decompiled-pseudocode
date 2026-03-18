/*
 * XREFs of ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0112FC8
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C00A08E4 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1014 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1108 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetPredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  int PointerDeviceCfgDWORDSetting; // ebx
  ULONG v5; // r8d
  _DWORD *v6; // rdi
  __int64 v7; // r14
  void *KeyHandle; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-D8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  char v12; // [rsp+78h] [rbp-90h] BYREF

  *(_QWORD *)&v10.Length = 45875200LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v10.Buffer = (PWSTR)&v12;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringCopyString(&v10, a2);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    PointerDeviceCfgDWORDSetting = RtlUnicodeStringCatString(&v10, L"\\Software\\Microsoft\\TouchPrediction", v5);
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v10;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        v6 = (_DWORD *)((char *)a1 + 12);
        v7 = 3LL;
        do
        {
          PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1);
          if ( PointerDeviceCfgDWORDSetting < 0 )
            *v6 = -1;
          a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
          v6 += 4;
          --v7;
        }
        while ( v7 );
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)PointerDeviceCfgDWORDSetting;
}
