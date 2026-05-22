/*
 * XREFs of ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x18018B72C
 * Callers:
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x18018B5D8 (-Initialize@HapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800CB010 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x18018AAF0 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x18018B250 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticInterface::QueryHardwareProperties(HapticInterface *this)
{
  unsigned int v2; // esi
  int v3; // edi
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  NTSTATUS SpecificValueCaps; // eax
  USHORT v6; // r12
  __int64 v7; // r15
  USAGE UsageMin; // bx
  __int16 PhysicalMin; // bx
  int PhysicalMin_low; // ebx
  int v11; // eax
  int v12; // r12d
  USAGE v13; // bx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rax
  __int64 v17; // rdx
  const char *ValueCapsLength; // [rsp+28h] [rbp-71h]
  int v20; // [rsp+40h] [rbp-59h]
  char v21[16]; // [rsp+50h] [rbp-49h] BYREF
  char v22[16]; // [rsp+60h] [rbp-39h] BYREF
  char v23[16]; // [rsp+70h] [rbp-29h] BYREF
  char v24[16]; // [rsp+80h] [rbp-19h] BYREF
  char v25[16]; // [rsp+90h] [rbp-9h] BYREF
  char v26[80]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  USAGE v28; // [rsp+100h] [rbp+67h] BYREF
  USAGE v29; // [rsp+108h] [rbp+6Fh] BYREF
  USHORT v30; // [rsp+110h] [rbp+77h] BYREF
  int v31; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = 0;
  v20 = 0;
  v31 = 0;
  v30 = *((_WORD *)this + 110);
  ValueCaps = (struct _HIDP_VALUE_CAPS *)operator new[](saturated_mul(v30, 0x48uLL));
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        0xAu,
                        *((_WORD *)this + 8),
                        0,
                        ValueCaps,
                        &v30,
                        *((PHIDP_PREPARSED_DATA *)this + 19));
  if ( SpecificValueCaps < 0 )
  {
    v2 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xA4,
           (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
           (const char *)(unsigned int)SpecificValueCaps);
    goto LABEL_29;
  }
  v6 = 0;
  v29 = 0;
  if ( !v30 )
    goto LABEL_27;
  do
  {
    v7 = v6;
    UsageMin = ValueCaps[v6].Range.UsageMin;
    if ( ValueCaps[v6].IsRange )
    {
      v28 = ValueCaps[v6].Range.UsageMin;
      if ( UsageMin > ValueCaps[v6].Range.UsageMax )
        goto LABEL_22;
      v12 = v31;
      while ( 1 )
      {
        if ( ValueCaps[v7].LinkUsagePage == 14 )
        {
          if ( ValueCaps[v7].LinkUsage == 16 )
          {
            v31 = 0;
            if ( (int)HapticInterface::ExtractFeatureValue(
                        this,
                        ValueCaps[v7].ReportID,
                        ValueCaps[v7].LinkCollection,
                        ValueCaps[v7].UsagePage,
                        UsageMin,
                        &v31) >= 0 )
            {
              v13 = v28;
              *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                      (float *)this + 6,
                                      (__int64)v24,
                                      (unsigned __int8 *)&v28)
                       + 20LL) = v13;
              v14 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                      (float *)this + 6,
                      (__int64)v25,
                      (unsigned __int8 *)&v28);
              *(_WORD *)(*(_QWORD *)v14 + 22LL) = v31;
              v3 = ++v20;
            }
LABEL_19:
            UsageMin = v28;
            goto LABEL_20;
          }
          if ( ValueCaps[v7].LinkUsage == 17 )
          {
            v31 = 0;
            if ( (int)HapticInterface::ExtractFeatureValue(
                        this,
                        ValueCaps[v7].ReportID,
                        ValueCaps[v7].LinkCollection,
                        ValueCaps[v7].UsagePage,
                        UsageMin,
                        &v31) >= 0 )
            {
              v15 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                      (float *)this + 6,
                      (__int64)v26,
                      (unsigned __int8 *)&v28);
              *(_DWORD *)(*(_QWORD *)v15 + 24LL) = (unsigned __int16)v31;
              ++v12;
            }
            goto LABEL_19;
          }
        }
LABEL_20:
        v28 = ++UsageMin;
        if ( UsageMin > ValueCaps[v7].Range.UsageMax )
        {
          v31 = v12;
          v6 = v29;
          goto LABEL_22;
        }
      }
    }
    v29 = ValueCaps[v6].Range.UsageMin;
    if ( ValueCaps[v6].LinkUsagePage != 14 )
      goto LABEL_22;
    if ( ValueCaps[v6].LinkUsage == 16 )
    {
      *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                              (float *)this + 6,
                              (__int64)v21,
                              (unsigned __int8 *)&v29)
               + 20LL) = UsageMin;
      PhysicalMin = ValueCaps[v6].PhysicalMin;
      *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                              (float *)this + 6,
                              (__int64)v22,
                              (unsigned __int8 *)&v29)
               + 22LL) = PhysicalMin;
      v3 = ++v20;
      goto LABEL_22;
    }
    if ( ValueCaps[v6].LinkUsage == 17 )
    {
      PhysicalMin_low = LOWORD(ValueCaps[v6].PhysicalMin);
      *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                               (float *)this + 6,
                               (__int64)v23,
                               (unsigned __int8 *)&v29)
                + 24LL) = PhysicalMin_low;
      v11 = ++v31;
    }
    else
    {
LABEL_22:
      v11 = v31;
    }
    v29 = ++v6;
  }
  while ( v6 < v30 );
  if ( v3 )
  {
    if ( v3 != v11 )
    {
      v16 = "The waveform list and duration list are not equal size.";
      v17 = 225LL;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
LABEL_27:
  v16 = "A minimum of one waveform is requried.";
  v17 = 223LL;
LABEL_28:
  v2 = -2147418113;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
    (const char *)0x8000FFFFLL,
    (int)v16,
    ValueCapsLength);
LABEL_29:
  operator delete[](ValueCaps);
  return v2;
}
