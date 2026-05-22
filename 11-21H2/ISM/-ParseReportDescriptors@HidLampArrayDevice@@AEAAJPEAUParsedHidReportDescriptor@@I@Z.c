/*
 * XREFs of ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800D8D18 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA310 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PE.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA7D0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DB0F4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DBEC4 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DC658 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DCAE0 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPE.c)
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
  int v15; // eax
  struct HidLampArrayAttributesReportParser *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  struct HidLampArrayAttributesReportParser *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  struct HidLampArrayAttributesReportParser *v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  struct HidLampArrayAttributesReportParser *v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct HidLampArrayAttributesReportParser *v30; // [rsp+68h] [rbp+48h] BYREF

  for ( i = 0; i < a3; ++i )
  {
    if ( *((_QWORD *)this + 72) )
      goto LABEL_64;
    v30 = 0LL;
    v7 = HidLampArrayAttributesReportParser::TryCreateAndInitialize(
           (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * i),
           &v30);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x288,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v7);
      if ( v30 )
        (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v30 + 16LL))(v30);
      return v8;
    }
    v9 = v30;
    if ( !v30 )
    {
LABEL_64:
      if ( *((_QWORD *)this + 74) )
      {
        v11 = 24LL * i;
      }
      else
      {
        v30 = 0LL;
        v11 = 24LL * i;
        v12 = HidLampAttributesRequestReportParser::TryCreateAndInitialize(
                (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
                &v30);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x296,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v12);
          if ( v30 )
            (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v30 + 16LL))(v30);
          return v8;
        }
        v13 = v30;
        if ( v30 )
        {
          v14 = *((_QWORD *)this + 74);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *((_QWORD *)this + 74) = v13;
          continue;
        }
      }
      if ( *((_QWORD *)this + 75) )
        goto LABEL_65;
      v30 = 0LL;
      v15 = HidLampAttributesResponseReportParser::TryCreateAndInitialize(
              (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
              &v30);
      v8 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A4,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v15);
        if ( v30 )
          (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v30 + 16LL))(v30);
        return v8;
      }
      v16 = v30;
      if ( !v30 )
      {
LABEL_65:
        if ( *((_QWORD *)this + 76) )
          goto LABEL_66;
        v30 = 0LL;
        v18 = HidLampMultiUpdateReportParser::TryCreateAndInitialize(
                (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
                &v30);
        v8 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B2,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v18);
          if ( v30 )
            (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v30 + 16LL))(v30);
          return v8;
        }
        v19 = v30;
        if ( !v30 )
        {
LABEL_66:
          if ( *((_QWORD *)this + 77) )
            goto LABEL_67;
          v30 = 0LL;
          v21 = HidLampRangeUpdateReportParser::TryCreateAndInitialize(
                  (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
                  &v30);
          v8 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C0,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v21);
            if ( v30 )
              (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v30 + 16LL))(v30);
            return v8;
          }
          v22 = v30;
          if ( !v30 )
          {
LABEL_67:
            if ( !*((_QWORD *)this + 73) )
            {
              v30 = 0LL;
              v24 = HidLampArrayControlReportParser::TryCreateAndInitialize(
                      (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
                      &v30);
              v8 = v24;
              if ( v24 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2CE,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                  (const char *)(unsigned int)v24);
                if ( v30 )
                  (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v30 + 16LL))(v30);
                return v8;
              }
              v25 = v30;
              if ( v30 )
              {
                v26 = *((_QWORD *)this + 73);
                if ( v26 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                *((_QWORD *)this + 73) = v25;
              }
            }
          }
          else
          {
            v23 = *((_QWORD *)this + 77);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            *((_QWORD *)this + 77) = v22;
          }
        }
        else
        {
          v20 = *((_QWORD *)this + 76);
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          *((_QWORD *)this + 76) = v19;
        }
      }
      else
      {
        v17 = *((_QWORD *)this + 75);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        *((_QWORD *)this + 75) = v16;
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
  v27 = HidLampArrayDevice::ValidateReportParsers(this);
  v8 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v27);
    return v8;
  }
  return 0LL;
}
