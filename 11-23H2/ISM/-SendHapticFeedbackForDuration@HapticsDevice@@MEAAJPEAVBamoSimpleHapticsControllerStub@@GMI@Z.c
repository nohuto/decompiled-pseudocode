/*
 * XREFs of ?SendHapticFeedbackForDuration@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x1801AC8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801A9D4C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticsDevice::SendHapticFeedbackForDuration(
        HapticsDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        __int16 a3,
        float a4,
        ULONG a5)
{
  HapticInterface **v6; // rbx
  HapticInterface *v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HapticInterface *v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = (HapticInterface **)*((_QWORD *)this + 9);
  if ( v6 != *((HapticInterface ***)this + 10) )
  {
    v7 = *v6;
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(HapticInterface *, struct BamoSimpleHapticsControllerStub *))(*(_QWORD *)v7 + 8LL))(
        v7,
        a2);
    v8 = HapticInterface::SendHapticFeedbackInternal(v7, a3, a4, 0, 0, a5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        88LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v11);
  }
  return 0LL;
}
