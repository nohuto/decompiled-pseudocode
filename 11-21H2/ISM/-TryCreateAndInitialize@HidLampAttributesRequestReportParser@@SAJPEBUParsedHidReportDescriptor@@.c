/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA7D0
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800D4E2C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800D503C (-LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800DCDC8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampAttributesRequestReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampAttributesRequestReportParser **a2)
{
  char *v4; // rax
  char *v5; // rdi
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // r14d
  __int64 v12; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int64 v16; // xmm0_8
  LampArrayTelemetry *v17; // rcx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (char *)RefCountedObject::operator new(0x60uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &HidLampArrayControlReportParser::`vftable';
    *((_WORD *)v4 + 8) = 0;
    *(_QWORD *)(v4 + 20) = 0LL;
    *(_QWORD *)(v4 + 28) = 0LL;
    *(_QWORD *)(v4 + 36) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_DWORD *)v4 + 20) = 0;
    v4[84] = 0;
    *((_DWORD *)v4 + 11) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v5[16] = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      v5[17] = 2;
      for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
      {
        v12 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v12 + 72LL * i + 18) == 32 && *(_WORD *)(v12 + 72LL * i + 16) == 89 )
        {
          if ( *(_WORD *)(v12 + 72LL * i + 10) == 33 && *(_WORD *)(v12 + 72LL * i + 8) == 89 )
          {
            v13 = *(_OWORD *)(v12 + 72LL * i + 16);
            v14 = *(_OWORD *)(v12 + 72LL * i + 32);
            v15 = *(_OWORD *)(v12 + 72LL * i + 48);
            v16 = *(_QWORD *)(v12 + 72LL * i + 64);
            *(_OWORD *)(v5 + 24) = *(_OWORD *)(v12 + 72LL * i);
            *(_OWORD *)(v5 + 40) = v13;
            *(_OWORD *)(v5 + 56) = v14;
            *(_OWORD *)(v5 + 72) = v15;
            *((_QWORD *)v5 + 11) = v16;
          }
          else
          {
            LampArrayTelemetry::GetInstance(v8, v7, v9);
            LampArrayTelemetry::LogUnexpectedUsage(
              v17,
              *(_WORD *)(*((_QWORD *)a1 + 2) + 72LL * i + 8),
              *(_WORD *)(*((_QWORD *)a1 + 2) + 72LL * i + 10));
          }
        }
      }
    }
    v18 = 9LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1);
    *((_DWORD *)v5 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                   + 4)
                                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                                       + 7) >> 3;
    if ( v5[17] == 2 && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v5 + 24), v18, 0x7FFFFFFFLL) )
    {
      v6 = 0LL;
      *a2 = (struct HidLampAttributesRequestReportParser *)v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
