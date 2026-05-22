/*
 * XREFs of ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x180100D1C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180065504 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUP.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18006591C (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEB.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180065CC0 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180066630 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180066BB8 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180067068 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUPars.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x180101E34 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayDevice::ParseReportDescriptors(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  __int64 v5; // r14
  const struct HardwareAttributes *v6; // r15
  const unsigned __int16 *v7; // r12
  int v8; // eax
  unsigned int v9; // ebx
  struct HidLampArrayAttributesReportParser *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  struct HidLampArrayAttributesReportParser *v14; // rbx
  __int64 v15; // rcx
  const struct ParsedHidReportDescriptor *v16; // rsi
  int v17; // eax
  struct HidLampArrayAttributesReportParser *v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  struct HidLampArrayAttributesReportParser *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  struct HidLampArrayAttributesReportParser *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  struct HidLampArrayAttributesReportParser *v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  struct HidLampArrayAttributesReportParser *v33; // [rsp+78h] [rbp+58h] BYREF

  v5 = 0LL;
  if ( a3 )
  {
    v6 = (HidLampArrayDevice *)((char *)this + 538);
    v7 = (const unsigned __int16 *)((char *)this + 24);
    do
    {
      if ( *((_QWORD *)this + 72) )
        goto LABEL_65;
      v33 = 0LL;
      v8 = HidLampArrayAttributesReportParser::TryCreateAndInitialize(
             (const unsigned __int16 *)this + 12,
             (HidLampArrayDevice *)((char *)this + 538),
             (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * v5),
             &v33);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v8);
        if ( v33 )
          (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v33 + 16LL))(v33);
        return v9;
      }
      v10 = v33;
      if ( !v33 )
      {
LABEL_65:
        if ( *((_QWORD *)this + 74) )
        {
          v12 = 24LL * (unsigned int)v5;
        }
        else
        {
          v33 = 0LL;
          v12 = 24LL * (unsigned int)v5;
          v13 = HidLampAttributesRequestReportParser::TryCreateAndInitialize(
                  v7,
                  v6,
                  (struct ParsedHidReportDescriptor *)((char *)a2 + v12),
                  &v33);
          v9 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x310,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v13);
            if ( v33 )
              (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v33 + 16LL))(v33);
            return v9;
          }
          v14 = v33;
          if ( v33 )
          {
            v15 = *((_QWORD *)this + 74);
            if ( v15 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            *((_QWORD *)this + 74) = v14;
            goto LABEL_41;
          }
        }
        v16 = (struct ParsedHidReportDescriptor *)((char *)a2 + v12);
        if ( *((_QWORD *)this + 75) )
          goto LABEL_66;
        v33 = 0LL;
        v17 = HidLampAttributesResponseReportParser::TryCreateAndInitialize(v7, v6, v16, &v33);
        v9 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x323,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v17);
          if ( v33 )
            (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v33 + 16LL))(v33);
          return v9;
        }
        v18 = v33;
        if ( !v33 )
        {
LABEL_66:
          if ( *((_QWORD *)this + 76) )
            goto LABEL_67;
          v33 = 0LL;
          v20 = HidLampMultiUpdateReportParser::TryCreateAndInitialize(v7, v6, v16, &v33);
          v9 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x336,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v20);
            if ( v33 )
              (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v33 + 16LL))(v33);
            return v9;
          }
          v21 = v33;
          if ( !v33 )
          {
LABEL_67:
            if ( *((_QWORD *)this + 77) )
              goto LABEL_68;
            v33 = 0LL;
            v23 = HidLampRangeUpdateReportParser::TryCreateAndInitialize(v7, v6, v16, &v33);
            v9 = v23;
            if ( v23 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x349,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                (const char *)(unsigned int)v23);
              if ( v33 )
                (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v33 + 16LL))(v33);
              return v9;
            }
            v24 = v33;
            if ( !v33 )
            {
LABEL_68:
              if ( !*((_QWORD *)this + 73) )
              {
                v33 = 0LL;
                v26 = HidLampArrayControlReportParser::TryCreateAndInitialize(v7, v6, v16, &v33);
                v9 = v26;
                if ( v26 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x35C,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                    (const char *)(unsigned int)v26);
                  if ( v33 )
                    (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v33 + 16LL))(v33);
                  return v9;
                }
                v27 = v33;
                if ( v33 )
                {
                  v28 = *((_QWORD *)this + 73);
                  if ( v28 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                  *((_QWORD *)this + 73) = v27;
                }
              }
            }
            else
            {
              v25 = *((_QWORD *)this + 77);
              if ( v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
              *((_QWORD *)this + 77) = v24;
            }
          }
          else
          {
            v22 = *((_QWORD *)this + 76);
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            *((_QWORD *)this + 76) = v21;
          }
        }
        else
        {
          v19 = *((_QWORD *)this + 75);
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          *((_QWORD *)this + 75) = v18;
        }
      }
      else
      {
        v11 = *((_QWORD *)this + 72);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *((_QWORD *)this + 72) = v10;
      }
LABEL_41:
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < a3 );
  }
  v29 = HidLampArrayDevice::ValidateReportParsers(this);
  v9 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v29);
    return v9;
  }
  return 0LL;
}
