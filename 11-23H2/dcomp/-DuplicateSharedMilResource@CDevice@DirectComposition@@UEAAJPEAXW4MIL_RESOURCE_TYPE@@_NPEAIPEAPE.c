/*
 * XREFs of ?DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z @ 0x1800F1A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___ @ 0x1800ED794 (wil--details--lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___--_lambda_call__lambda_e7a4.c)
 *     ?ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPEAPEAUIUnknown@@@Z @ 0x1800EDEE0 (-ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPE.c)
 */

__int64 __fastcall DirectComposition::CDevice::DuplicateSharedMilResource(
        __int64 a1,
        void *a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        struct IDCompositionGaussianBlurEffect **a6)
{
  struct IDCompositionGaussianBlurEffect **v6; // rsi
  _DWORD *v7; // r14
  int v10; // eax
  struct IDCompositionGaussianBlurEffect *v11; // rcx
  unsigned int v12; // ebx
  struct IDCompositionGaussianBlurEffect *v13; // rax
  int v14; // ebx
  int v16; // eax
  int v17; // edi
  struct IDCompositionGaussianBlurEffect ***v18; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a6;
  v7 = a5;
  a6 = 0LL;
  v18 = &a6;
  v19 = 1;
  *a5 = 0;
  *v6 = 0LL;
  v10 = DirectComposition::CDevice::OpenSharedProxy(
          (DirectComposition::CDevice *)(a1 - 72),
          a2,
          a3,
          a4,
          (void **)&a6,
          (unsigned int *)&a5);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a4 || a3 != 196 )
    {
      v14 = (int)a5;
      v16 = DirectComposition::CDevice::ConstructProxyObjectForMilResource(
              v11,
              a3,
              (__int64)a6,
              (const char *)(unsigned int)a5,
              v6);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BC2,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
          (const char *)(unsigned int)v16);
        v12 = v17;
        goto LABEL_9;
      }
    }
    else
    {
      v13 = (struct IDCompositionGaussianBlurEffect *)a6;
      v14 = (int)a5;
      *((_DWORD *)a6 + 2) = 1;
      *((_DWORD *)v13 + 3) = v14;
      *(_QWORD *)v13 = &DirectComposition::CVisualTargetProxy::`vftable';
      *v6 = v13;
    }
    *v7 = v14;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BB5,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
    (const char *)(unsigned int)v10);
LABEL_9:
  wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___((__int64)&v18);
  return v12;
}
