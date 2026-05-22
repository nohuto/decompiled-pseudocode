/*
 * XREFs of ?CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMode@@IIPEAPEAVCSynchronousSuperWetInk@2@@Z @ 0x1800F0D7C
 * Callers:
 *     ?Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@@Z @ 0x1800E6AB0 (-Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurface.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     wil::details::lambda_call__lambda_60148ef87edec7a912f846859f230260___::_lambda_call__lambda_60148ef87edec7a912f846859f230260___ @ 0x1800ED76C (wil--details--lambda_call__lambda_60148ef87edec7a912f846859f230260___--_lambda_call__lambda_6014.c)
 *     ?Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enum@SynchronousSuperWetLookupMode@@PEAPEAV12@@Z @ 0x1800FC3CC (-Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enu.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSynchronousSuperWetInk(
        DirectComposition::CDevice *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        DirectComposition::CTransformGroupProxy *a5)
{
  DirectComposition::CTransformGroupProxy *v5; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  DirectComposition::CTransformGroupProxy *v12; // rcx
  int v13; // eax
  void *v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v5 = a5;
  if ( !a5 )
  {
    v7 = -2147024809;
    v8 = 6778LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)v7);
    return v7;
  }
  *(_QWORD *)a5 = 0LL;
  v7 = DirectComposition::CDevice::CreateProxyInternal(a1, 182, 0, &v14, &v17);
  if ( (v7 & 0x80000000) != 0 )
  {
    v8 = 6784LL;
    goto LABEL_3;
  }
  v12 = (DirectComposition::CTransformGroupProxy *)v14;
  v15 = 1;
  *((_DWORD *)v14 + 3) = v17;
  *(_QWORD *)v12 = &DirectComposition::CFilterEffectProxy::`vftable';
  *((_DWORD *)v12 + 2) = 1;
  v14 = &a5;
  a5 = v12;
  v13 = DirectComposition::CSynchronousSuperWetInk::Create(v12, v10, v11, a2, v5);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A88,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)v13);
    wil::details::lambda_call__lambda_60148ef87edec7a912f846859f230260___::_lambda_call__lambda_60148ef87edec7a912f846859f230260___((__int64)&v14);
    return v7;
  }
  DirectComposition::CTransformGroupProxy::Release(a5);
  return 0LL;
}
