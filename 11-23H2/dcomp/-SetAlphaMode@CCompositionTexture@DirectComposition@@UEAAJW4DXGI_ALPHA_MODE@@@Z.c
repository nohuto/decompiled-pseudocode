/*
 * XREFs of ?SetAlphaMode@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1800A0280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC (--$MakeGuard@VCDeviceLock@DirectComposition@@@@YA-AV-$CGuard@VCDeviceLock@DirectComposition@@@@A.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::SetAlphaMode(
        DirectComposition::CCompositionTexture *this,
        unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  MakeGuard<DirectComposition::CDeviceLock>(
    (DirectComposition::CDeviceLock **)&v8,
    (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 96LL));
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), a2);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\compositiontexture.cpp",
      (const char *)(unsigned int)v4);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
  return v5;
}
