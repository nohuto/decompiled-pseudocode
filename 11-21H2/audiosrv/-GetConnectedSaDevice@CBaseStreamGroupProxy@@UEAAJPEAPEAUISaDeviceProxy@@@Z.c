/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000A0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(CBaseStreamGroupProxy *this, struct ISaDeviceProxy **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx

  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = (struct ISaDeviceProxy *)*((_QWORD *)this + 11);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
