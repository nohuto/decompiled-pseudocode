/*
 * XREFs of ?GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800CF790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::GetExtendedProperties(CAPOWrapperClient *this, enum EXTENDED_APO_FLAGS *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // r9
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v4 = 0LL;
  v7 = 0LL;
  if ( v3 )
  {
    (**v3)(v3, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v7);
    v4 = v7;
  }
  if ( v4 )
    v5 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v4 + 24LL))(v4, a2);
  else
    v5 = -2147467262;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  return v5;
}
