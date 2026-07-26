/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C012E91C
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C012E7DC (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C010E1C0 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  wchar_t **v2; // rbx
  unsigned int v3; // esi
  wchar_t *v6; // rdx
  Rtl::KString *value; // rcx
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  signed int v10; // ecx
  __int16 v11; // dx
  _UNICODE_STRING v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = &off_1C00D0AB0;
  a1->FilterBindFlags = 0;
  v3 = 0;
  while ( 1 )
  {
    v6 = *v2;
    v14 = 0;
    if ( (int)KRegKey::QueryValueBoolean(a2, v6, &v14, DefaultToFalse) < 0 )
      break;
    if ( v14 )
      a1->FilterBindFlags |= *((_DWORD *)v2 + 2);
    ++v3;
    v2 += 2;
    if ( v3 >= 5 )
    {
      value = a1->FilterClass.__ptr_.__value_;
      a1->FilterClass.__ptr_.__value_ = 0LL;
      if ( value )
        ExFreePoolWithTag(value, 0x7274534Bu);
      v13 = 0LL;
      v8 = L"FilterClass";
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      v10 = v9 == 0 ? 0xC000000D : 0;
      if ( v9 )
      {
        v11 = 2 * v9;
        v13.Buffer = L"FilterClass";
        v13.Length = -2 - v11;
        v13.MaximumLength = -v11;
      }
      if ( v10 >= 0 )
        KRegKey::QueryValueString(&a2->m_ptr, &v13, (void **)&a1->FilterClass.__ptr_.__value_);
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
