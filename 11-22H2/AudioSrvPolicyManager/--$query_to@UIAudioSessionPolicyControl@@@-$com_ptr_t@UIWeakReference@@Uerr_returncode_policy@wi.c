/*
 * XREFs of ??$query_to@UIAudioSessionPolicyControl@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIAudioSessionPolicyControl@@@Z @ 0x180012130
 * Callers:
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x18002692C (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<IAudioSessionPolicyControl>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v6);
  if ( v4 >= 0 )
  {
    if ( !v6 )
      return 2147943568LL;
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(v6, &GUID_fe394136_900b_469c_bdfc_4321bcd92f34, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v4;
}
