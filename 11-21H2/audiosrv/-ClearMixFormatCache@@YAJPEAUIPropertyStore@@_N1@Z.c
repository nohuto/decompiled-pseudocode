/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180163688
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180163CB8 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180163D1C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180163D80 (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180163DE4 (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, char a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // r14d
  struct _GUID *v12; // r15
  struct _GUID *v13; // rsi
  int ProcessingModeSpecificMixFormatKey; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r14d
  struct _GUID *v18; // rsi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // esi
  int v22; // eax
  int v23; // eax
  __int64 v25[2]; // [rsp+20h] [rbp-60h] BYREF
  struct _GUID v26; // [rsp+30h] [rbp-50h] BYREF
  __int128 v27; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h]
  struct _tagpropertykey v29; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27 = 0LL;
  v28 = 0LL;
  v25[0] = 0LL;
  ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
    a1,
    &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
    v25);
  if ( a2 )
  {
    if ( v25[0] )
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
             v25[0],
             &PKEY_AudioEngine_HWMixFormat,
             &v27);
    else
      v6 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_AudioEngine_HWMixFormat,
             &v27);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = (unsigned int)v6;
      v9 = 200LL;
      goto LABEL_77;
    }
    if ( v25[0] )
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
              v25[0],
              &PKEY_AudioEngine_MixFormat,
              &v27);
    else
      v10 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &PKEY_AudioEngine_MixFormat,
              &v27);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 204LL;
      goto LABEL_77;
    }
  }
  v11 = 0;
  v12 = (struct _GUID *)qword_18017E3E0;
  v13 = (struct _GUID *)qword_18017E3E0;
  do
  {
    if ( a2 )
    {
      v26 = *v13;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v26, 0, &v29);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 213LL;
        goto LABEL_76;
      }
      if ( v25[0] )
        v15 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
                v25[0],
                &v29,
                &v27);
      else
        v15 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &v29,
                &v27);
      v7 = v15;
      if ( v15 < 0 )
      {
        v8 = (unsigned int)v15;
        v9 = 216LL;
        goto LABEL_77;
      }
      v26 = *v13;
      if ( (int)GetProcessingModeSpecificOverridingMixFormatKey(&v26, 0, &v29) >= 0 )
      {
        if ( v25[0] )
          (*(void (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
            v25[0],
            &v29,
            &v27);
        else
          ((void (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
            a1,
            &v29,
            &v27);
      }
    }
    if ( a3 )
    {
      v26 = *v13;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v26, 1, &v29);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 228LL;
        goto LABEL_76;
      }
      if ( v25[0] )
        v16 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
                v25[0],
                &v29,
                &v27);
      else
        v16 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &v29,
                &v27);
      v7 = v16;
      if ( v16 < 0 )
      {
        v8 = (unsigned int)v16;
        v9 = 231LL;
        goto LABEL_77;
      }
      v26 = *v13;
      if ( (int)GetProcessingModeSpecificOverridingMixFormatKey(&v26, 1, &v29) >= 0 )
      {
        if ( v25[0] )
          (*(void (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
            v25[0],
            &v29,
            &v27);
        else
          ((void (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
            a1,
            &v29,
            &v27);
      }
    }
    ++v11;
    ++v13;
  }
  while ( v11 < 0xA );
  v17 = 0;
  v18 = (struct _GUID *)qword_18017E3E0;
  do
  {
    if ( a2 )
    {
      v26 = *v18;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v26, 0, &v29);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 247LL;
        goto LABEL_76;
      }
      v19 = v25[0]
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
              v25[0],
              &v29,
              &v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &v29,
              &v27);
      v7 = v19;
      if ( v19 < 0 )
      {
        v8 = (unsigned int)v19;
        v9 = 250LL;
        goto LABEL_77;
      }
    }
    if ( a3 )
    {
      v26 = *v18;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v26, 1, &v29);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 256LL;
        goto LABEL_76;
      }
      v20 = v25[0]
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
              v25[0],
              &v29,
              &v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &v29,
              &v27);
      v7 = v20;
      if ( v20 < 0 )
      {
        v8 = (unsigned int)v20;
        v9 = 259LL;
        goto LABEL_77;
      }
    }
    ++v17;
    ++v18;
  }
  while ( v17 < 0xA );
  v21 = 0;
  while ( 1 )
  {
    if ( a2 )
    {
      v26 = *v12;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v26, 0, &v29);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 269LL;
        goto LABEL_76;
      }
      if ( v25[0] )
        v22 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
                v25[0],
                &v29,
                &v27);
      else
        v22 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &v29,
                &v27);
      v7 = v22;
      if ( v22 < 0 )
      {
        v8 = (unsigned int)v22;
        v9 = 272LL;
        goto LABEL_77;
      }
    }
    if ( !a3 )
      goto LABEL_69;
    v26 = *v12;
    ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v26, 1, &v29);
    v7 = ProcessingModeSpecificMixFormatKey;
    if ( ProcessingModeSpecificMixFormatKey < 0 )
      break;
    if ( v25[0] )
      v23 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, __int128 *))(*(_QWORD *)v25[0] + 64LL))(
              v25[0],
              &v29,
              &v27);
    else
      v23 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &v29,
              &v27);
    v7 = v23;
    if ( v23 < 0 )
    {
      v8 = (unsigned int)v23;
      v9 = 281LL;
      goto LABEL_77;
    }
LABEL_69:
    ++v21;
    ++v12;
    if ( v21 >= 0xA )
    {
      v7 = 0;
      goto LABEL_71;
    }
  }
  v9 = 278LL;
LABEL_76:
  v8 = (unsigned int)ProcessingModeSpecificMixFormatKey;
LABEL_77:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
    (const char *)v8);
LABEL_71:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v25);
  return v7;
}
