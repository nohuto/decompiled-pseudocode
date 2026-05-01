/*
 * XREFs of ?RequestCloseAsync@CImmersiveApp@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180307670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::RequestCloseAsync(CImmersiveApp *this, const struct _GUID *a2, void **a3)
{
  int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  v8 = 0LL;
  if ( *((_QWORD *)this + 47) )
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **)))(***((_QWORD ***)this + 46) + 88LL))(
           **((_QWORD **)this + 46),
           &v8);
  else
    v6 = -2147023728;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
    v6 = (**v8)(v8, a2, a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
