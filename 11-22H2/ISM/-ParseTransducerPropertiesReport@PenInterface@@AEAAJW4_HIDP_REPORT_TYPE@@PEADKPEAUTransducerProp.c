/*
 * XREFs of ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x1801B5010
 * Callers:
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x1801B5250 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801B52E4 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061CE8 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenInterface::ParseTransducerPropertiesReport(
        PenInterface *this,
        HIDP_REPORT_TYPE a2,
        char *Report,
        ULONG ReportLength,
        struct PenInterface::TransducerPropertiesReport *a5)
{
  struct _HIDP_PREPARSED_DATA *v5; // rax
  int v6; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  NTSTATUS v14; // eax
  struct PenInterface::TransducerPropertiesReport *v15; // r14
  __int64 v16; // rcx
  bool v17; // of
  size_t v18; // rax
  USHORT *v19; // rsi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+28h] [rbp-28h]
  ULONG v21; // [rsp+40h] [rbp-10h] BYREF
  ULONG UsageLength; // [rsp+44h] [rbp-Ch] BYREF
  ULONG v23; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  ULONG UsageValue; // [rsp+80h] [rbp+30h] BYREF

  v5 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v6 = 0;
  UsageValue = 0;
  v21 = 0;
  v11 = HidP_GetUsageValue(a2, 0xDu, 0, 0x5Bu, &UsageValue, v5, Report, ReportLength);
  if ( v11 < 0 )
  {
    v12 = 244LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)v11);
  }
  v11 = HidP_GetUsageValue(a2, 0xDu, 0, 0x91u, &v21, *((PHIDP_PREPARSED_DATA *)this + 6), Report, ReportLength);
  if ( v11 < 0 )
  {
    v12 = 253LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)v11);
  }
  if ( !v21 || !UsageValue )
    return 2147942487LL;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v23 = 0;
  v14 = HidP_GetUsageValue(a2, 0xDu, 0, 0x6Eu, &v23, PreparsedData, Report, ReportLength);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x10D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v14);
  v15 = a5;
  v16 = UsageValue + ((unsigned __int64)v23 << 32);
  *((_WORD *)a5 + 3) = v21;
  *((_QWORD *)v15 + 1) = v16;
  *((_BYTE *)v15 + 16) = *((_BYTE *)this + 146) == 0;
  if ( a2 == HidP_Input && *((_BYTE *)this + 146) )
  {
    v18 = 2LL * *((unsigned __int16 *)this + 59);
    v17 = (*((unsigned __int16 *)this + 59) * (unsigned __int128)2u) >> 64 != 0;
    UsageLength = *((unsigned __int16 *)this + 59);
    if ( v17 )
      v18 = -1LL;
    v19 = (USHORT *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v19 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    if ( HidP_GetUsages(
           HidP_Input,
           0xDu,
           0,
           v19,
           &UsageLength,
           *((PHIDP_PREPARSED_DATA *)this + 6),
           Report,
           ReportLength) >= 0
      && UsageLength )
    {
      while ( v19[v6] != 162 )
      {
        if ( ++v6 >= UsageLength )
          goto LABEL_22;
      }
      *((_BYTE *)v15 + 16) = 1;
    }
LABEL_22:
    operator delete[](v19);
  }
  return 0LL;
}
