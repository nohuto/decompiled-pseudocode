/*
 * XREFs of ?CreateCrossContainerHostReadOnlySharedSectionProxy@CDevice@DirectComposition@@QEAAJ_KAEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedSectionProxy@2@@Z @ 0x1800EEEBC
 * Callers:
 *     ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z @ 0x1800ECA70 (-Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___ @ 0x1800EC47C (wil--details--lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___--_lambda_call__lambda_e24b.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateCrossContainerHostReadOnlySharedSectionProxy(
        DirectComposition::CDevice *this,
        __int64 a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        struct DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy **a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  struct DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy *v12; // rsi
  DirectComposition::CResourceProxy *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v17; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  char v19; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = DirectComposition::CDevice::CreateProxyInternal(this, 49, 0, (void **)&v17, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E0,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  v12 = (struct DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy *)v17;
  v18[0] = this;
  v19 = 1;
  v13 = (DirectComposition::CResourceProxy *)(v17 + 2);
  v17[3] = v16;
  *(_DWORD *)v13 = 1;
  *(_QWORD *)v12 = &DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy::`vftable';
  v18[1] = &v17;
  v14 = DirectComposition::CResourceProxy::SetBufferProperty(v13, 0, a3, 0x10uLL);
  v10 = v14;
  if ( v14 < 0 )
  {
    v15 = 5100LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)v14);
    wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___((__int64)v18);
    return v10;
  }
  v14 = DirectComposition::CResourceProxy::SetBufferProperty(v13, 1, a4, 0x10uLL);
  v10 = v14;
  if ( v14 < 0 )
  {
    v15 = 5105LL;
    goto LABEL_10;
  }
  v14 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v13, 2, a2);
  v10 = v14;
  if ( v14 < 0 )
  {
    v15 = 5109LL;
    goto LABEL_10;
  }
  *a5 = v12;
  return 0LL;
}
