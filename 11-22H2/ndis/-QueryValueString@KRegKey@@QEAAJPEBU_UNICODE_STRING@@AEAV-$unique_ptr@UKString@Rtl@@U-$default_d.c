/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116EB8
 * Callers:
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116C3C (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116E38 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01197E8 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119890 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0119D88 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C013A664 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     GetModuleServiceName @ 0x1C0141548 (GetModuleServiceName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01170A4 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbx
  _BYTE *v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // edi
  int v11; // eax
  unsigned __int16 v12; // cx
  struct Rtl::KString *v13; // rax
  void *v14; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *Pool2; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v18; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  v8 = KeyValueInformation;
  v9 = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 == -2147483643 )
  {
    if ( ResultLength > 0x100000 )
    {
      v10 = -1073740757;
      goto LABEL_17;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength, 1920226130);
    v7 = Pool2;
    if ( !Pool2 )
      goto LABEL_16;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v10 < 0 )
      goto LABEL_17;
    v8 = v7;
  }
  else if ( v9 < 0 )
  {
LABEL_17:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>((void **)&Pool2);
    return (unsigned int)v10;
  }
  if ( *((_DWORD *)v8 + 1) != 1 )
  {
    v10 = -1073741788;
    goto LABEL_17;
  }
  v11 = *((_DWORD *)v8 + 2);
  if ( (v11 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_17;
  }
  v12 = *((_DWORD *)v8 + 2);
  *(_DWORD *)(&v18.MaximumLength + 1) = 0;
  v18.Length = v11;
  v18.MaximumLength = v11;
  v18.Buffer = (wchar_t *)(v8 + 12);
  if ( (unsigned __int16)v11 >= 2u )
  {
    do
    {
      if ( *(_WORD *)&v8[2 * ((unsigned __int64)v12 >> 1) + 10] )
        break;
      v12 -= 2;
    }
    while ( v12 >= 2u );
    v18.Length = v12;
  }
  v13 = Rtl::KString::Initialize(&v18);
  v14 = *a3;
  *a3 = v13;
  if ( v14 )
    ExFreePoolWithTag(v14, 0x7274534Bu);
  if ( !*a3 )
  {
LABEL_16:
    v10 = -1073741670;
    goto LABEL_17;
  }
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
