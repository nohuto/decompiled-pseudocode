/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18006591C
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x180100D1C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180065844 (-IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800FDB94 (-LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampAttributesRequestReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampAttributesRequestReportParser **a4)
{
  char *v8; // rax
  struct HidLampAttributesRequestReportParser *v9; // rdi
  struct HidLampAttributesRequestReportParser *v10; // rbx
  unsigned int i; // r14d
  __int64 v13; // rax
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int64 v17; // xmm0_8
  LampArrayTelemetry *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  v8 = (char *)RefCountedObject::operator new(0x60uLL);
  v9 = (struct HidLampAttributesRequestReportParser *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &HidLampArrayControlReportParser::`vftable';
    *((_WORD *)v8 + 8) = 0;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_QWORD *)(v8 + 28) = 0LL;
    *(_QWORD *)(v8 + 36) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_DWORD *)v8 + 20) = 0;
    v8[84] = 0;
    *((_DWORD *)v8 + 11) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct HidLampAttributesRequestReportParser *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_BYTE *)v9 + 16) = *((_BYTE *)a3 + 4);
    if ( *(_DWORD *)a3 == 2 )
    {
      *((_BYTE *)v9 + 17) = 2;
      for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
      {
        v13 = *((_QWORD *)a3 + 2);
        if ( *(_WORD *)(v13 + 72LL * i + 18) == 32 && *(_WORD *)(v13 + 72LL * i + 16) == 89 )
        {
          if ( *(_WORD *)(v13 + 72LL * i + 10) == 33 && *(_WORD *)(v13 + 72LL * i + 8) == 89 )
          {
            v14 = *(_OWORD *)(v13 + 72LL * i + 16);
            v15 = *(_OWORD *)(v13 + 72LL * i + 32);
            v16 = *(_OWORD *)(v13 + 72LL * i + 48);
            v17 = *(_QWORD *)(v13 + 72LL * i + 64);
            *(_OWORD *)((char *)v9 + 24) = *(_OWORD *)(v13 + 72LL * i);
            *(_OWORD *)((char *)v9 + 40) = v14;
            *(_OWORD *)((char *)v9 + 56) = v15;
            *(_OWORD *)((char *)v9 + 72) = v16;
            *((_QWORD *)v9 + 11) = v17;
          }
          else
          {
            LampArrayTelemetry::GetInstance();
            LampArrayTelemetry::LogUnexpectedUsage(
              v18,
              *(_WORD *)(*((_QWORD *)a3 + 2) + 72LL * i + 8),
              *(_WORD *)(*((_QWORD *)a3 + 2) + 72LL * i + 10));
          }
        }
      }
    }
    *((_DWORD *)v9 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1)
                                                   + 4)
                                       + 7
                                       + *(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
    if ( HidLampAttributesRequestReportParser::IsParserValid(a1, a2, v9) )
    {
      v10 = 0LL;
      *a4 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct HidLampAttributesRequestReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
