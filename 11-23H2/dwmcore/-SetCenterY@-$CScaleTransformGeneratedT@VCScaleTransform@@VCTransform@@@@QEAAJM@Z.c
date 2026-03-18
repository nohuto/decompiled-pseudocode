/*
 * XREFs of ?SetCenterY@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1800F86B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterY(float *a1, float a2)
{
  __int64 v3; // rax

  if ( a2 != a1[43] )
  {
    v3 = *(_QWORD *)a1;
    a1[43] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v3 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
