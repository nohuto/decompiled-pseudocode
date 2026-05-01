/*
 * XREFs of ?Close@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x180361140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Close(CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 66) )
  {
    v2 = *((_QWORD *)this + 34);
    if ( v2 )
    {
      v5 = 0LL;
      v3 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
      if ( v3(v2, &IID_IActiveZBandNotificationForMonitorService, &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704, &v5) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 66));
      *((_DWORD *)this + 66) = 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  return 0LL;
}
