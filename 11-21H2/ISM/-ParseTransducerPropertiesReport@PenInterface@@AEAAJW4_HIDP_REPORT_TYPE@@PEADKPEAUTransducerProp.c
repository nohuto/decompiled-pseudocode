/*
 * XREFs of ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x180188EE4
 * Callers:
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x1801890D0 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x180189164 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenInterface::ParseTransducerPropertiesReport(
        PenInterface *this,
        HIDP_REPORT_TYPE a2,
        char *Report,
        ULONG ReportLength,
        struct PenInterface::TransducerPropertiesReport *a5)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rax
  int v6; // edi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int16 v14; // cx
  struct PenInterface::TransducerPropertiesReport *v15; // rbp
  bool v16; // of
  size_t v17; // rax
  USHORT *v18; // rbx
  ULONG UsageLength; // [rsp+40h] [rbp-28h] BYREF
  ULONG v20[3]; // [rsp+44h] [rbp-24h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  ULONG UsageValue; // [rsp+70h] [rbp+8h] BYREF

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v6 = 0;
  UsageValue = 0;
  v20[0] = 0;
  v11 = HidP_GetUsageValue(a2, 0xDu, 0, 0x5Bu, &UsageValue, PreparsedData, Report, ReportLength);
  if ( v11 < 0 )
  {
    v12 = 248LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)v11);
  }
  v11 = HidP_GetUsageValue(a2, 0xDu, 0, 0x91u, v20, *((PHIDP_PREPARSED_DATA *)this + 6), Report, ReportLength);
  if ( v11 < 0 )
  {
    v12 = 257LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)v11);
  }
  v14 = v20[0];
  if ( !v20[0] || !UsageValue )
    return 2147942487LL;
  v15 = a5;
  *((_QWORD *)a5 + 1) = UsageValue;
  *((_WORD *)v15 + 3) = v14;
  *((_BYTE *)v15 + 16) = *((_BYTE *)this + 146) == 0;
  if ( a2 == HidP_Input && *((_BYTE *)this + 146) )
  {
    v17 = 2LL * *((unsigned __int16 *)this + 59);
    v16 = (*((unsigned __int16 *)this + 59) * (unsigned __int128)2u) >> 64 != 0;
    UsageLength = *((unsigned __int16 *)this + 59);
    if ( v16 )
      v17 = -1LL;
    v18 = (USHORT *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v18 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x113,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    if ( HidP_GetUsages(
           HidP_Input,
           0xDu,
           0,
           v18,
           &UsageLength,
           *((PHIDP_PREPARSED_DATA *)this + 6),
           Report,
           ReportLength) >= 0
      && UsageLength )
    {
      while ( v18[v6] != 162 )
      {
        if ( ++v6 >= UsageLength )
          goto LABEL_20;
      }
      *((_BYTE *)v15 + 16) = 1;
    }
LABEL_20:
    operator delete[](v18);
  }
  return 0LL;
}
