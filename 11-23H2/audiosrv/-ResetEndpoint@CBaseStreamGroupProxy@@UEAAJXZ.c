/*
 * XREFs of ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180109B40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ResetEndpoint(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = *((_QWORD *)this + 11);
  if ( !v3 )
  {
    v4 = -2005139437;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::ResetEndpoint", 778, v4);
    goto LABEL_7;
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v7);
  v4 = v5(v3, &v7);
  if ( v4 < 0 )
    goto LABEL_6;
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
    if ( v4 < 0 )
      goto LABEL_6;
  }
LABEL_7:
  if ( v1 )
    LeaveCriticalSection(v1);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v7);
  return (unsigned int)v4;
}
