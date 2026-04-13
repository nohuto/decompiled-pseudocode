/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180086944
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180086918 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 * Callees:
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800410E8 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180042388 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7PEAUFailureInfo@2@@Z @ 0x180084FC8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800D4380 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  bool v7; // bl
  const struct wil::FailureInfo *v8; // rdx
  const struct wil::FailureInfo *v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-1508h]
  __int64 v11; // [rsp+30h] [rbp-14F8h]
  __int64 v12; // [rsp+40h] [rbp-14E8h]
  __int64 v13; // [rsp+48h] [rbp-14E0h]
  __int64 v14; // [rsp+58h] [rbp-14D0h]
  __int64 v15; // [rsp+68h] [rbp-14C0h]
  _BYTE v16[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v17[1024]; // [rsp+120h] [rbp-1408h] BYREF
  _BYTE v18[4104]; // [rsp+520h] [rbp-1008h] BYREF

  v7 = g_pfnThrowPlatformException != 0;
  wil::details::LogFailure(a1, a2, a3, a4, v10, a6, v11, a7, v12, v13, (wil *)v18, v14, v17, v15, (unsigned __int64)v16);
  if ( (v16[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v16, v8);
  if ( v7 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v16, v18);
  wil::ThrowResultException((wil *)v16, v8);
  wil::details::WilFailFast((wil::details *)v16, v9);
}
