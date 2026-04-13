/*
 * XREFs of ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18005F34C
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005E8FC (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800E36B4 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
        CreativeFramework::ContentDeliveryManagerSettings *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rsi
  const WCHAR *v7; // rdi
  LSTATUS ValueW; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = a5;
  v13 = 4;
  v7 = a3;
  *a5 = 0;
  ValueW = RegGetValueW((HKEY)this, a2, a3, 0x10u, 0LL, &a6, &v13);
  v10 = ValueW;
  if ( ValueW > 0 )
    v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v10 & 0x80000000) == 0 )
  {
    *v6 = (_DWORD)a6;
    return 0;
  }
  if ( v10 == -2147024894 )
    return 0;
  if ( !v7 )
    v7 = &Src;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x4F,
    (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v10,
    (int)"RegKey: %ws %ws",
    (const char *)a2,
    v7);
  return v10;
}
