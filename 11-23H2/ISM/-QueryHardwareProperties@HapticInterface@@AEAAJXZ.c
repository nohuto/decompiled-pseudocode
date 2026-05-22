/*
 * XREFs of ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x1801A98AC
 * Callers:
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x1801A9758 (-Initialize@HapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x1800BA8EC (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800E46A0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x1801A8C54 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801A93C0 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticInterface::QueryHardwareProperties(HapticInterface *this)
{
  int v2; // r12d
  int v3; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  NTSTATUS SpecificValueCaps; // eax
  unsigned int v6; // ebx
  USHORT v7; // r15
  USAGE UsageMin; // ax
  struct _HIDP_VALUE_CAPS *v9; // rax
  __int64 v10; // rax
  __int16 PhysicalMin; // bx
  int PhysicalMin_low; // ebx
  USAGE v13; // bx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rax
  __int64 v17; // rdx
  const char *ValueCapsLength; // [rsp+28h] [rbp-71h]
  int v20; // [rsp+40h] [rbp-59h]
  int v21; // [rsp+44h] [rbp-55h] BYREF
  struct _HIDP_VALUE_CAPS *v22; // [rsp+48h] [rbp-51h] BYREF
  char v23[16]; // [rsp+50h] [rbp-49h] BYREF
  char v24[16]; // [rsp+60h] [rbp-39h] BYREF
  char v25[16]; // [rsp+70h] [rbp-29h] BYREF
  char v26[16]; // [rsp+80h] [rbp-19h] BYREF
  char v27[16]; // [rsp+90h] [rbp-9h] BYREF
  char v28[80]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  USAGE v30; // [rsp+100h] [rbp+67h] BYREF
  USAGE v31; // [rsp+108h] [rbp+6Fh] BYREF
  USHORT v32; // [rsp+110h] [rbp+77h] BYREF
  USAGE v33; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  v3 = 0;
  v20 = 0;
  v32 = *((_WORD *)this + 110);
  ValueCaps = (struct _HIDP_VALUE_CAPS *)operator new[](saturated_mul(v32, 0x48uLL));
  v22 = ValueCaps;
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        0xAu,
                        *((_WORD *)this + 8),
                        0,
                        ValueCaps,
                        &v32,
                        *((PHIDP_PREPARSED_DATA *)this + 19));
  if ( SpecificValueCaps < 0 )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xA4,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
           (const char *)(unsigned int)SpecificValueCaps);
LABEL_29:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v22);
    return v6;
  }
  v7 = 0;
  v33 = 0;
  if ( !v32 )
  {
LABEL_27:
    v16 = "A minimum of one waveform is requried.";
    v17 = 223LL;
LABEL_28:
    v6 = -2147418113;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      (const char *)0x8000FFFFLL,
      (int)v16,
      ValueCapsLength);
    goto LABEL_29;
  }
  do
  {
    UsageMin = ValueCaps[v7].Range.UsageMin;
    if ( ValueCaps[v7].IsRange )
    {
      v30 = ValueCaps[v7].Range.UsageMin;
      if ( UsageMin > ValueCaps[v7].Range.UsageMax )
        goto LABEL_22;
      while ( 1 )
      {
        if ( ValueCaps[v7].LinkUsagePage == 14 )
        {
          if ( ValueCaps[v7].LinkUsage == 16 )
          {
            v21 = 0;
            if ( (int)HapticInterface::ExtractFeatureValue(
                        this,
                        ValueCaps[v7].ReportID,
                        ValueCaps[v7].LinkCollection,
                        ValueCaps[v7].UsagePage,
                        UsageMin,
                        &v21) >= 0 )
            {
              v13 = v30;
              *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                      (_QWORD *)this + 3,
                                      (__int64)v26,
                                      (unsigned __int8 *)&v30)
                       + 20LL) = v13;
              v14 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                      (_QWORD *)this + 3,
                      (__int64)v27,
                      (unsigned __int8 *)&v30);
              *(_WORD *)(*(_QWORD *)v14 + 22LL) = v21;
              ++v2;
              v3 = v20;
            }
LABEL_19:
            UsageMin = v30;
            goto LABEL_20;
          }
          if ( ValueCaps[v7].LinkUsage == 17 )
          {
            v21 = 0;
            if ( (int)HapticInterface::ExtractFeatureValue(
                        this,
                        ValueCaps[v7].ReportID,
                        ValueCaps[v7].LinkCollection,
                        ValueCaps[v7].UsagePage,
                        UsageMin,
                        &v21) >= 0 )
            {
              v15 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                      (_QWORD *)this + 3,
                      (__int64)v28,
                      (unsigned __int8 *)&v30);
              *(_DWORD *)(*(_QWORD *)v15 + 24LL) = (unsigned __int16)v21;
              v20 = ++v3;
            }
            goto LABEL_19;
          }
        }
LABEL_20:
        v30 = ++UsageMin;
        if ( UsageMin > ValueCaps[v7].Range.UsageMax )
        {
          v7 = v33;
          goto LABEL_22;
        }
      }
    }
    v33 = ValueCaps[v7].Range.UsageMin;
    v31 = UsageMin;
    v9 = &ValueCaps[v7];
    if ( v9->LinkUsagePage == 14 )
    {
      if ( v9->LinkUsage == 16 )
      {
        v10 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                (_QWORD *)this + 3,
                (__int64)v23,
                (unsigned __int8 *)&v31);
        *(_WORD *)(*(_QWORD *)v10 + 20LL) = v33;
        PhysicalMin = ValueCaps[v7].PhysicalMin;
        *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                (_QWORD *)this + 3,
                                (__int64)v24,
                                (unsigned __int8 *)&v31)
                 + 22LL) = PhysicalMin;
        ++v2;
        v3 = v20;
      }
      else if ( ValueCaps[v7].LinkUsagePage == 14 && v9->LinkUsage == 17 )
      {
        PhysicalMin_low = LOWORD(ValueCaps[v7].PhysicalMin);
        *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                 (_QWORD *)this + 3,
                                 (__int64)v25,
                                 (unsigned __int8 *)&v31)
                  + 24LL) = PhysicalMin_low;
        v3 = ++v20;
      }
    }
LABEL_22:
    v33 = ++v7;
  }
  while ( v7 < v32 );
  if ( !v2 )
    goto LABEL_27;
  if ( v2 != v3 )
  {
    v16 = "The waveform list and duration list are not equal size.";
    v17 = 225LL;
    goto LABEL_28;
  }
  operator delete[](ValueCaps);
  return 0LL;
}
