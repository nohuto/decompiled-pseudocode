/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800DADB8
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DB0F4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 * Callees:
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800DCDC8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

bool __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const struct HidLampAttributesResponseReportParser *a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  HidChannelValueInfo *v16; // r10

  LOBYTE(a2) = 0;
  if ( !*((_BYTE *)a1 + 888) && !*((_BYTE *)a1 + 889) && !*((_BYTE *)a1 + 890) )
    return 0;
  if ( *((_BYTE *)a1 + 17) == 2
    && HidChannelValueInfo::IsValid(
         (const struct HidLampAttributesResponseReportParser *)((char *)a1 + 24),
         a2,
         0x7FFFFFFFLL)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v4 + 96), a2, v3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v6 + 168), a2, v5)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v8 + 240), a2, v7)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v10 + 312), a2, v9)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v12 + 384), a2, v11)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v14 + 456), a2, v13)
    && HidChannelValueInfo::IsValid(v16, a2, v15) )
  {
    LOBYTE(a2) = 1;
  }
  return a2;
}
