/*
 * XREFs of ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C01209F0
 * Callers:
 *     NdisOpenConfiguration @ 0x1C001AE70 (NdisOpenConfiguration.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120468 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C005B994 (WPP_RECORDER_SF__guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C0120228 (ndisLWMBuildConfigurationKeyPath.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(const struct _GUID *a1, KRegKey *this)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  char v8[8]; // [rsp+28h] [rbp-240h]
  char v9[4]; // [rsp+30h] [rbp-238h]
  wchar_t v10[256]; // [rsp+40h] [rbp-228h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Cu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (__int64)a1);
  v4 = ndisLWMBuildConfigurationKeyPath((__int64)a1, v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = KRegKey::Open(this, 0xF003Fu, v10, 0LL);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_10;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 142;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 141;
  }
  *(_DWORD *)v8 = v4;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    1u,
    v6,
    (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
    *(_QWORD *)v8);
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v5;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Fu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (__int64)a1,
      *(_DWORD *)v9);
  }
  return v5;
}
