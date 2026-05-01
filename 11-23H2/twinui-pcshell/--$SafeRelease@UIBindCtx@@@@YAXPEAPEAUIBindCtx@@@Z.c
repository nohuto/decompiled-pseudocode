/*
 * XREFs of ??$SafeRelease@UIBindCtx@@@@YAXPEAPEAUIBindCtx@@@Z @ 0x180750EF0
 * Callers:
 *     BindCtx_SetMode @ 0x180752A80 (BindCtx_SetMode.c)
 *     BindCtx_RegisterObjectParam @ 0x18079A8AC (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SafeRelease<IBindCtx>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
