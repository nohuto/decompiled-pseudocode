/*
 * XREFs of ?SubscribeToServices@PerMonitorShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180156A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PerMonitorShellPositionerManager::SubscribeToServices(
        PerMonitorShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  GUID *v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r14
  __int64 v7; // rcx

  v3 = &c_positionersSIDs;
  v4 = (__int64 *)((char *)this + 80);
  v5 = 10LL;
  do
  {
    QueryService = a2->lpVtbl->QueryService;
    v7 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
      a2,
      v3++,
      &GUID_ee010e17_919a_4068_868b_675acf787303,
      v4++);
    --v5;
  }
  while ( v5 );
  return 0LL;
}
