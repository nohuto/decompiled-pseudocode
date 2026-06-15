/*
 * XREFs of ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157A4C
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801575B0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall EffectPolicy::IsMicArray(struct IPropertyStore *a1, struct _AEC_POLICY_RESULTS *a2)
{
  struct IPropertyStoreVtbl *lpVtbl; // rax
  __int64 v4; // rax
  int v5; // eax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  lpVtbl = a1->lpVtbl;
  iid = GUID_00000000_0000_0000_0000_000000000000;
  *(_OWORD *)lpsz = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, LPCOLESTR *))lpVtbl->GetValue)(
         a1,
         &PKEY_AudioEndpoint_JackSubType,
         lpsz) < 0
    || LOWORD(lpsz[0]) != 31
    || IIDFromString(lpsz[1], &iid) < 0 )
  {
    goto LABEL_8;
  }
  v4 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
    v4 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
  if ( v4 )
LABEL_8:
    v5 = 0;
  else
    v5 = 1;
  *((_DWORD *)a2 + 5) = v5;
  PropVariantClear((PROPVARIANT *)lpsz);
  return *((_DWORD *)a2 + 5) != 0;
}
