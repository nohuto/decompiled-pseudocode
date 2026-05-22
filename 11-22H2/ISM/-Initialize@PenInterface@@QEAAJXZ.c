/*
 * XREFs of ?Initialize@PenInterface@@QEAAJXZ @ 0x1801B4CBC
 * Callers:
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801B46EC (--0PenInterface@@QEAA@PEAX0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x1801B4AE0 (-FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z.c)
 *     ?FindTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x1801B4B90 (-FindTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x1801B4ED4 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801B52E4 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x1801B5454 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     ?attach@?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@@@Z @ 0x1801B5524 (-attach@-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@.c)
 *     ??0HapticInterface@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1801B703C (--0HapticInterface@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenInterface::Initialize(PenInterface *this)
{
  PenInterface *v1; // rbx
  int TransducerPropertiesFeatureReport; // edi
  __int64 v3; // rdx
  PHIDP_PREPARSED_DATA *v5; // rdi
  const char *v6; // r9
  NTSTATUS Caps; // eax
  __int64 v8; // rdx
  HapticInterface *v9; // rax
  PenInterface *v10; // rcx
  const char *v11; // r9
  PenInterface *v12; // rcx
  unsigned __int8 v13[8]; // [rsp+20h] [rbp-48h] BYREF
  PenInterface *v14; // [rsp+28h] [rbp-40h]
  PHIDP_PREPARSED_DATA *v15; // [rsp+30h] [rbp-38h]
  HapticInterface *v16; // [rsp+38h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = this;
  v14 = this;
  TransducerPropertiesFeatureReport = PenInterface::Open(this);
  if ( TransducerPropertiesFeatureReport < 0 )
  {
    v3 = 117LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)TransducerPropertiesFeatureReport);
    return (unsigned int)TransducerPropertiesFeatureReport;
  }
  v5 = (PHIDP_PREPARSED_DATA *)((char *)v1 + 48);
  v15 = (PHIDP_PREPARSED_DATA *)((char *)v1 + 48);
  if ( !HidD_GetPreparsedData(*((HANDLE *)v1 + 7), (PHIDP_PREPARSED_DATA *)v1 + 6) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x7A,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             v6);
  Caps = HidP_GetCaps(*v5, (PHIDP_CAPS)((char *)v1 + 72));
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x7C,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)Caps);
  if ( *((_WORD *)v1 + 37) != 13 )
  {
    v8 = 125LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_WORD *)v1 + 36) != 32 )
  {
    v8 = 126LL;
    goto LABEL_10;
  }
  v9 = (HapticInterface *)RefCountedObject::operator new(0x110uLL);
  try
  {
    v16 = v9;
    if ( v9 )
      v9 = (HapticInterface *)HapticInterface::HapticInterface(v9);
    wil::com_ptr_t<HapticInterface,wil::err_exception_policy>::attach((char *)v1 + 136, v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x85,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      v11);
    v1 = v14;
    v5 = v15;
  }
  v13[0] = 0;
  if ( (int)PenInterface::FindTransducerConnectedInputReport(v10, *v5, v13) < 0 )
  {
    if ( (int)PenInterface::FindTransducerPropertiesFeatureReport(v12, *v5, v13) < 0 )
      return 2147549183LL;
    *((_BYTE *)v1 + 147) = v13[0];
    v17 = 0LL;
    v18 = 0;
    TransducerPropertiesFeatureReport = PenInterface::QueryTransducerPropertiesFeatureReport(
                                          v1,
                                          (struct PenInterface::TransducerPropertiesReport *)&v17);
    if ( TransducerPropertiesFeatureReport < 0 )
    {
      v3 = 147LL;
      goto LABEL_3;
    }
    PenInterface::UpdateTransducerProperties(v1, (const struct PenInterface::TransducerPropertiesReport *)&v17);
  }
  else
  {
    *((_BYTE *)v1 + 146) = 1;
  }
  return 0LL;
}
