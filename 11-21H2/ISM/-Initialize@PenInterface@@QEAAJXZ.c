/*
 * XREFs of ?Initialize@PenInterface@@QEAAJXZ @ 0x180188B9C
 * Callers:
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801885E8 (--0PenInterface@@QEAA@PEAX0@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x1801889C0 (-FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z.c)
 *     ?FindTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x180188A70 (-FindTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x180188DA8 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x180189164 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x1801892D8 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     ?attach@?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@@@Z @ 0x1801893A8 (-attach@-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@.c)
 *     ??0HapticInterface@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x18018AEF8 (--0HapticInterface@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenInterface::Initialize(PenInterface *this)
{
  PenInterface *v1; // rbx
  int TransducerPropertiesFeatureReport; // edi
  __int64 v3; // rdx
  const char *v5; // r9
  NTSTATUS Caps; // eax
  __int64 v7; // rdx
  HapticInterface *v8; // rax
  PenInterface *v9; // rcx
  const char *v10; // r9
  PenInterface *v11; // rcx
  unsigned __int8 v12[8]; // [rsp+20h] [rbp-48h] BYREF
  PenInterface *v13; // [rsp+28h] [rbp-40h]
  HapticInterface *v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = this;
  v13 = this;
  TransducerPropertiesFeatureReport = PenInterface::Open(this);
  if ( TransducerPropertiesFeatureReport < 0 )
  {
    v3 = 119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)TransducerPropertiesFeatureReport);
    return (unsigned int)TransducerPropertiesFeatureReport;
  }
  if ( !HidD_GetPreparsedData(*((HANDLE *)v1 + 7), (PHIDP_PREPARSED_DATA *)v1 + 6) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x7C,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             v5);
  Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)v1 + 6), (PHIDP_CAPS)((char *)v1 + 72));
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x7E,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)Caps);
  if ( *((_WORD *)v1 + 37) != 13 )
  {
    v7 = 127LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_WORD *)v1 + 36) != 32 )
  {
    v7 = 128LL;
    goto LABEL_10;
  }
  v8 = (HapticInterface *)RefCountedObject::operator new(0x110uLL);
  try
  {
    v14 = v8;
    if ( v8 )
      v8 = (HapticInterface *)HapticInterface::HapticInterface(v8);
    wil::com_ptr_t<HapticInterface,wil::err_exception_policy>::attach((char *)v1 + 136, v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x88,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      v10);
    v1 = v13;
  }
  v12[0] = 0;
  if ( (int)PenInterface::FindTransducerConnectedInputReport(v9, *((struct _HIDP_PREPARSED_DATA **)v1 + 6), v12) < 0 )
  {
    if ( (int)PenInterface::FindTransducerPropertiesFeatureReport(v11, *((struct _HIDP_PREPARSED_DATA **)v1 + 6), v12) < 0 )
      return 2147549183LL;
    *((_BYTE *)v1 + 147) = v12[0];
    v15 = 0LL;
    v16 = 0;
    TransducerPropertiesFeatureReport = PenInterface::QueryTransducerPropertiesFeatureReport(
                                          v1,
                                          (struct PenInterface::TransducerPropertiesReport *)&v15);
    if ( TransducerPropertiesFeatureReport < 0 )
    {
      v3 = 151LL;
      goto LABEL_3;
    }
    PenInterface::UpdateTransducerProperties(v1, (const struct PenInterface::TransducerPropertiesReport *)&v15);
  }
  else
  {
    *((_BYTE *)v1 + 146) = 1;
  }
  return 0LL;
}
