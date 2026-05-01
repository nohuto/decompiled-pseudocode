/*
 * XREFs of ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180056668
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099EA0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x18018A660 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 *     _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::operator() @ 0x1801E1418 (_lambda_eba303ee992e6a97ac61d22e1b9d43e6_--operator().c)
 * Callees:
 *     ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180056758 (--1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180056784 (-StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9624 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010DABC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18010DABC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::Cloak(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  int v4; // ebx
  int v6[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v6,
    "Cloak");
  *(_QWORD *)v6 = &SingleViewExperienceTelemetry::Cloak::`vftable';
  SingleViewExperienceTelemetry::Cloak::StartActivity((SingleViewExperienceTelemetry::Cloak *)v6, v3, StringRawBuffer);
  if ( *((_DWORD *)this + 10) == 1 )
  {
    v4 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)this[10] + 48LL))(this[10]);
    if ( v4 >= 0 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
      v4 = 0;
    }
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43E,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80070057LL,
      v6[0]);
  }
  SingleViewExperienceTelemetry::Cloak::~Cloak((SingleViewExperienceTelemetry::Cloak *)v6);
  return (unsigned int)v4;
}
