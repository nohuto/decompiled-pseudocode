/*
 * XREFs of ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801B7D2C
 * Callers:
 *     ?SendHapticFeedbackForDuration@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x1801BA8D0 (-SendHapticFeedbackForDuration@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z.c)
 *     ?SendHapticFeedbackForPlayCount@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x1801BAAF0 (-SendHapticFeedbackForPlayCount@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z.c)
 *     ?StopFeedback@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x1801BB430 (-StopFeedback@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x1801B6C34 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?GetHapticsChannel@HapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1801B7648 (-GetHapticsChannel@HapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z.c)
 *     ?IsValidOrdinal@HapticInterface@@AEAA_NG@Z @ 0x1801B7838 (-IsValidOrdinal@HapticInterface@@AEAA_NG@Z.c)
 *     ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x1801B8034 (-WriteOutput@Haptics@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall HapticInterface::SendHapticFeedbackInternal(
        HapticInterface *this,
        __int16 a2,
        float a3,
        ULONG a4,
        unsigned int a5,
        ULONG a6)
{
  ULONG v8; // r15d
  ULONG v10; // r14d
  enum _HIDP_REPORT_TYPE v11; // edx
  enum _HIDP_REPORT_TYPE v12; // edx
  __int64 v13; // rax
  void *v14; // rax
  CHAR *Report; // rbx
  unsigned int v16; // ebx
  NTSTATUS v17; // eax
  unsigned int LastError; // eax
  DWORD v19; // r8d
  void *v20; // rcx
  const char *v21; // r9
  DWORD NumberOfBytesWritten; // [rsp+48h] [rbp-59h] BYREF
  void *v24[3]; // [rsp+50h] [rbp-51h] BYREF
  struct _HIDP_VALUE_CAPS v25; // [rsp+68h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]
  unsigned __int16 v27; // [rsp+100h] [rbp+5Fh] BYREF

  v27 = a2;
  v8 = 0;
  v10 = 0;
  memset_0(&v25, 0, sizeof(v25));
  if ( !HapticInterface::IsValidOrdinal(this, a2) || !HapticInterface::GetHapticsChannel(this, v11, 0x21u, &v25) )
    return 2147942487LL;
  if ( HapticInterface::GetHapticsChannel(this, v12, 0x23u, &v25) )
    v10 = (int)(float)((float)(v25.LogicalMax - v25.LogicalMin) * a3);
  if ( a4 )
  {
    v13 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
            (_QWORD *)this + 3,
            (__int64)v24,
            (unsigned __int8 *)&v27);
    v8 = *(_DWORD *)(*(_QWORD *)v13 + 24LL) + a5;
  }
  v14 = operator new[](*((unsigned __int16 *)this + 83), (const struct std::nothrow_t *)&std::nothrow);
  v24[0] = v14;
  Report = (CHAR *)v14;
  if ( !v14 )
  {
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      (const char *)0x8007000ELL);
LABEL_14:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v24);
    return v16;
  }
  memset_0(v14, 0, *((unsigned __int16 *)this + 83));
  *Report = v25.ReportID;
  v17 = HidP_SetUsageValue(
          HidP_Output,
          0xEu,
          *((_WORD *)this + 8),
          0x21u,
          v27,
          *((PHIDP_PREPARSED_DATA *)this + 19),
          Report,
          *((unsigned __int16 *)this + 83));
  if ( v17 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x134,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
                  (const char *)(unsigned int)v17);
LABEL_13:
    v16 = LastError;
    goto LABEL_14;
  }
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x24u,
    a4,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x25u,
    v8,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x23u,
    v10,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x28u,
    a6,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  InputTraceLogging::Haptics::WriteOutput();
  v19 = *((unsigned __int16 *)this + 83);
  v20 = (void *)*((_QWORD *)this + 32);
  NumberOfBytesWritten = 0;
  if ( !WriteFile(v20, Report, v19, &NumberOfBytesWritten, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x162,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
                  v21);
    goto LABEL_13;
  }
  operator delete[](Report);
  return 0LL;
}
