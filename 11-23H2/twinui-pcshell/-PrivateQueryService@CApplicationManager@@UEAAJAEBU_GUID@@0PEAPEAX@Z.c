/*
 * XREFs of ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180028100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::PrivateQueryService(
        __int64 (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  *a4 = 0LL;
  v4 = -2147467262;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveApplicationListeners.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationListeners.Revision )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveApplicationListeners.SubAuthority;
  if ( !v5 )
    return (unsigned int)(**(this - 24))((char *)this - 192, a3, a4);
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ProcessLifetimeManagerControl.SubAuthority;
  if ( !v8 )
    return (*(unsigned int (__fastcall **)(_QWORD, const struct _GUID *, void **))*this[49])(this[49], a3, a4);
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data4;
  if ( !v9 )
    return (*(unsigned int (__fastcall **)(_QWORD, const struct _GUID *, void **))*this[45])(this[45], a3, a4);
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveApplicationManagerPriv.SubAuthority;
  if ( !v10 )
    return (unsigned int)(**(this - 24))((char *)this - 192, a3, a4);
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4;
  if ( !v11 )
    return (*(unsigned int (__fastcall **)(_QWORD, const struct _GUID *, void **))*this[44])(this[44], a3, a4);
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IImmersiveWindowManager.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IImmersiveWindowManager.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IImmersiveWindowManager.Data4;
  if ( !v12 )
    return (unsigned int)(*((__int64 (__fastcall **)(__int64 (__fastcall **)(char *, const struct _GUID *, void **), _QWORD))*this[48]
                          + 4))(
                           this[48],
                           0LL);
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4;
  if ( v13 )
  {
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data4;
    if ( !v14 )
      return (*(unsigned int (__fastcall **)(_QWORD, const struct _GUID *, void **))*this[71])(this[71], a3, a4);
  }
  else
  {
    return (*(unsigned int (__fastcall **)(_QWORD, const struct _GUID *, void **))*this[52])(this[52], a3, a4);
  }
  return v4;
}
