/*
 * XREFs of ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800F17E4
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800F2784 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F3ED0 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PE.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F4390 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F4CB4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F5AA0 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F6228 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F66B0 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayDevice::ParseReportDescriptors(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  unsigned int i; // r14d
  int v7; // eax
  unsigned int v8; // ebx
  struct HidLampArrayAttributesReportParser *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  struct HidLampArrayAttributesReportParser *v13; // rbx
  __int64 v14; // rcx
  const struct ParsedHidReportDescriptor *v15; // rsi
  int v16; // eax
  struct HidLampArrayAttributesReportParser *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  struct HidLampArrayAttributesReportParser *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  struct HidLampArrayAttributesReportParser *v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  struct HidLampArrayAttributesReportParser *v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct HidLampArrayAttributesReportParser *v31; // [rsp+68h] [rbp+48h] BYREF

  for ( i = 0; i < a3; ++i )
  {
    if ( *((_QWORD *)this + 72) )
      goto LABEL_64;
    v31 = 0LL;
    v7 = HidLampArrayAttributesReportParser::TryCreateAndInitialize(
           (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * i),
           &v31);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v7);
      if ( v31 )
        (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v31 + 16LL))(v31);
      return v8;
    }
    v9 = v31;
    if ( !v31 )
    {
LABEL_64:
      if ( *((_QWORD *)this + 74) )
      {
        v11 = 24LL * i;
      }
      else
      {
        v31 = 0LL;
        v11 = 24LL * i;
        v12 = HidLampAttributesRequestReportParser::TryCreateAndInitialize(
                (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
                &v31);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x297,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v12);
          if ( v31 )
            (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v31 + 16LL))(v31);
          return v8;
        }
        v13 = v31;
        if ( v31 )
        {
          v14 = *((_QWORD *)this + 74);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *((_QWORD *)this + 74) = v13;
          continue;
        }
      }
      v15 = (struct ParsedHidReportDescriptor *)((char *)a2 + v11);
      if ( *((_QWORD *)this + 75) )
        goto LABEL_65;
      v31 = 0LL;
      v16 = HidLampAttributesResponseReportParser::TryCreateAndInitialize(v15, &v31);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v16);
        if ( v31 )
          (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v31 + 16LL))(v31);
        return v8;
      }
      v17 = v31;
      if ( !v31 )
      {
LABEL_65:
        if ( *((_QWORD *)this + 76) )
          goto LABEL_66;
        v31 = 0LL;
        v19 = HidLampMultiUpdateReportParser::TryCreateAndInitialize(v15, &v31);
        v8 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v19);
          if ( v31 )
            (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v31 + 16LL))(v31);
          return v8;
        }
        v20 = v31;
        if ( !v31 )
        {
LABEL_66:
          if ( *((_QWORD *)this + 77) )
            goto LABEL_67;
          v31 = 0LL;
          v22 = HidLampRangeUpdateReportParser::TryCreateAndInitialize(v15, &v31);
          v8 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C1,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v22);
            if ( v31 )
              (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v31 + 16LL))(v31);
            return v8;
          }
          v23 = v31;
          if ( !v31 )
          {
LABEL_67:
            if ( !*((_QWORD *)this + 73) )
            {
              v31 = 0LL;
              v25 = HidLampArrayControlReportParser::TryCreateAndInitialize(v15, &v31);
              v8 = v25;
              if ( v25 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2CF,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                  (const char *)(unsigned int)v25);
                if ( v31 )
                  (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v31 + 16LL))(v31);
                return v8;
              }
              v26 = v31;
              if ( v31 )
              {
                v27 = *((_QWORD *)this + 73);
                if ( v27 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
                *((_QWORD *)this + 73) = v26;
              }
            }
          }
          else
          {
            v24 = *((_QWORD *)this + 77);
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            *((_QWORD *)this + 77) = v23;
          }
        }
        else
        {
          v21 = *((_QWORD *)this + 76);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          *((_QWORD *)this + 76) = v20;
        }
      }
      else
      {
        v18 = *((_QWORD *)this + 75);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        *((_QWORD *)this + 75) = v17;
      }
    }
    else
    {
      v10 = *((_QWORD *)this + 72);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      *((_QWORD *)this + 72) = v9;
    }
  }
  v28 = HidLampArrayDevice::ValidateReportParsers(this);
  v8 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v28);
    return v8;
  }
  return 0LL;
}
