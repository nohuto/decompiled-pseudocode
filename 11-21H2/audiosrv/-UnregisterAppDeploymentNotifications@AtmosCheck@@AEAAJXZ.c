/*
 * XREFs of ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180156C54
 * Callers:
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x1801569F4 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18004199C (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::UnregisterAppDeploymentNotifications(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edi
  __int64 v4; // rcx
  AtmosCheck *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = 0;
  if ( *((_QWORD *)this + 18) )
  {
    v4 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
      if ( v3 < 0 )
        goto LABEL_14;
      *((_QWORD *)this + 18) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 19) )
  {
    v6 = *((_QWORD *)this + 6);
    if ( v6 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
      if ( v3 < 0 )
        goto LABEL_14;
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 20) )
  {
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7);
      if ( v3 < 0 )
        goto LABEL_14;
      *((_QWORD *)this + 20) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 6);
LABEL_14:
  AtmosCheck::Trace(v5, "UnregAppDepNotification result", v3);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
