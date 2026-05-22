/*
 * XREFs of ?CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x18015B910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1800336D4 (-ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_aae9143591c8bab91551e322b9127512___::_lambda_call__lambda_aae9143591c8bab91551e322b9127512___ @ 0x18015B52C (wil--details--lambda_call__lambda_aae9143591c8bab91551e322b9127512___--_lambda_call__lambda_aae9.c)
 *     ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z @ 0x18015B730 (-CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RE.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDwmCompositor::SystemOnly::CreateSharedMilResource(
        __int64 a1,
        unsigned int a2,
        int *a3,
        void **a4,
        _QWORD *a5)
{
  _QWORD *v6; // rsi
  int *v7; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _QWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  int *v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  *a3 = 0;
  *a4 = 0LL;
  v6 = a5;
  v15[0] = &v19;
  v15[1] = &v18;
  v7 = v19;
  *a5 = 0LL;
  v18 = a1 - 1288;
  v16 = 1;
  v9 = Windows::UI::Composition::InteropDwmCompositor::CreateOrDuplicateMilResourceInternal(
         (DirectComposition::CDevice **)(a1 - 1288),
         a2,
         1,
         0LL,
         v7,
         v6,
         1);
  v10 = v9;
  if ( v9 == -2147467262 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, void **, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v18 + 456)
                                                                                           + 72LL)
                                                                               + 32LL))(
            *(_QWORD *)(v18 + 456) + 72LL,
            a2,
            v19,
            a4,
            v6);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 121LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_9;
    }
  }
  else
  {
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
        (const char *)(unsigned int)v9);
      v12 = v10;
LABEL_9:
      wil::details::lambda_call__lambda_aae9143591c8bab91551e322b9127512___::_lambda_call__lambda_aae9143591c8bab91551e322b9127512___((__int64)v15);
      return v12;
    }
    v11 = DirectComposition::CDevice::ResourceOpenSharedHandle(*(DirectComposition::CDevice **)(v18 + 456), *v19, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 128LL;
      goto LABEL_8;
    }
  }
  return v10;
}
