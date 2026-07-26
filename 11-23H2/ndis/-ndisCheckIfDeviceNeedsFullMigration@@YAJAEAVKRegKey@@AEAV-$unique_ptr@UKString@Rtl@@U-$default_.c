/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0119D48
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00358BC (WPP_RECORDER_SF_S.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6F0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116E78 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(HANDLE *a1, __int64 a2, _BYTE *a3)
{
  PVOID v4; // rcx
  __int64 v7; // r9
  const wchar_t *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  _UNICODE_STRING v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  P = 0LL;
  v7 = 0x7FFFLL;
  v12 = 0LL;
  v8 = L"RetiredNetCfgInstanceId";
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  v9 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
  {
    v12.Buffer = L"RetiredNetCfgInstanceId";
    v12.Length = 2 * (0x7FFF - v7);
    v12.MaximumLength = v12.Length + 2;
    v10 = KRegKey::QueryValueString(a1, &v12, &P);
    v4 = P;
    v9 = v10;
  }
  if ( v9 == -1073741772 )
  {
    *a3 = 0;
LABEL_8:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
    return 0LL;
  }
  if ( !v9 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x39u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    *a3 = 1;
    goto LABEL_8;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  return v9;
}
