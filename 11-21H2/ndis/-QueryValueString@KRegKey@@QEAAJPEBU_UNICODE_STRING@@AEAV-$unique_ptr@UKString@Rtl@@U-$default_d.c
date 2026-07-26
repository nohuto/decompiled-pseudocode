/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C
 * Callers:
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B30C (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B5F0 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0115D8C (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0115F44 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C012E91C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     GetModuleServiceName @ 0x1C0135704 (GetModuleServiceName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C010B850 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rsi
  void *Pool2; // rbx
  NTSTATUS v9; // eax
  NTSTATUS v10; // edi
  int v11; // eax
  unsigned __int16 v12; // cx
  struct Rtl::KString *v13; // rax
  void *v14; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  ResultLength = 0;
  v7 = KeyValueInformation;
  Pool2 = 0LL;
  v9 = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 == -2147483643 )
  {
    if ( ResultLength > 0x100000 )
    {
      v10 = -1073740757;
      goto LABEL_12;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1920226130);
    if ( !Pool2 )
    {
      v10 = -1073741670;
      goto LABEL_12;
    }
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v10 < 0 )
      goto LABEL_12;
    v7 = Pool2;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_12;
  }
  if ( *((_DWORD *)v7 + 1) == 1 )
  {
    v11 = *((_DWORD *)v7 + 2);
    if ( (v11 & 1) != 0 )
    {
      v10 = -1073741811;
    }
    else
    {
      v12 = *((_DWORD *)v7 + 2);
      *(_DWORD *)(&v17.MaximumLength + 1) = 0;
      v17.Length = v11;
      v17.MaximumLength = v11;
      v17.Buffer = (wchar_t *)(v7 + 12);
      if ( (unsigned __int16)v11 >= 2u )
      {
        do
        {
          if ( *(_WORD *)&v7[2 * ((unsigned __int64)v12 >> 1) + 10] )
            break;
          v12 -= 2;
        }
        while ( v12 >= 2u );
        v17.Length = v12;
      }
      v13 = Rtl::KString::Initialize(&v17);
      v14 = *a3;
      *a3 = v13;
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0x7274534Bu);
        v13 = (struct Rtl::KString *)*a3;
      }
      v10 = -1073741670;
      if ( v13 )
        v10 = 0;
    }
  }
  else
  {
    v10 = -1073741788;
  }
LABEL_12:
  if ( Pool2 )
    operator delete[](Pool2);
  return (unsigned int)v10;
}
