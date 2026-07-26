/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C013A664
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A518 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C003572C (WPP_RECORDER_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116EB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C0119158 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  wchar_t **v2; // rbx
  unsigned int v3; // esi
  wchar_t *v6; // rdx
  Rtl::KString *value; // rcx
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  _UNICODE_STRING v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = &off_1C00D7E80;
  a1->FilterBindFlags = 0;
  v3 = 0;
  while ( 1 )
  {
    v6 = *v2;
    v12 = 0;
    if ( (int)KRegKey::QueryValueBoolean(a2, v6, &v12, DefaultToFalse) < 0 )
      break;
    if ( v12 )
      a1->FilterBindFlags |= *((_DWORD *)v2 + 2);
    ++v3;
    v2 += 2;
    if ( v3 >= 5 )
    {
      value = a1->FilterClass.__ptr_.__value_;
      a1->FilterClass.__ptr_.__value_ = 0LL;
      if ( value )
        ExFreePoolWithTag(value, 0x7274534Bu);
      v8 = L"FilterClass";
      v11 = 0LL;
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      if ( v9 )
      {
        v11.Buffer = L"FilterClass";
        v11.Length = 2 * (0x7FFF - v9);
        v11.MaximumLength = v11.Length + 2;
        KRegKey::QueryValueString(&a2->m_ptr, &v11, (void **)&a1->FilterClass.__ptr_.__value_);
      }
      return 1;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xCu,
      (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
      *v2);
  return 0;
}
