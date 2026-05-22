/*
 * XREFs of ?SendHapticFeedbackForPlayCount@HapticsDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x1801BAAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801B7D2C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticsDevice::SendHapticFeedbackForPlayCount(
        HapticsDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        __int16 a3,
        float a4,
        ULONG a5,
        unsigned int a6)
{
  HapticInterface **v7; // rbx
  HapticInterface *v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HapticInterface *v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = (HapticInterface **)*((_QWORD *)this + 9);
  if ( v7 != *((HapticInterface ***)this + 10) )
  {
    v8 = *v7;
    v12 = v8;
    if ( v8 )
      (*(void (__fastcall **)(HapticInterface *, struct BamoSimpleHapticsControllerStub *))(*(_QWORD *)v8 + 8LL))(
        v8,
        a2);
    v9 = HapticInterface::SendHapticFeedbackInternal(v8, a3, a4, a5, a6, 0);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x64,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v12);
  }
  return 0LL;
}
