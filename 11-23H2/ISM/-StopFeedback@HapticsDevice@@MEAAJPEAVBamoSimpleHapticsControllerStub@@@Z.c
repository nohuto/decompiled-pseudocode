/*
 * XREFs of ?StopFeedback@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x1801AD450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801A9D4C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticsDevice::StopFeedback(HapticsDevice *this, struct BamoSimpleHapticsControllerStub *a2)
{
  HapticInterface **v2; // rbx
  HapticInterface **v3; // rsi
  HapticInterface *v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HapticInterface *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (HapticInterface **)*((_QWORD *)this + 9);
  v3 = (HapticInterface **)*((_QWORD *)this + 10);
  while ( v2 != v3 )
  {
    v4 = *v2;
    v8 = v4;
    if ( v4 )
      (*(void (__fastcall **)(HapticInterface *))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = HapticInterface::SendHapticFeedbackInternal(v4, 2, 1.0, 0, 0, 0);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        77LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)(unsigned int)v5);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v8);
    ++v2;
  }
  return 0LL;
}
