/*
 * XREFs of ?RemoteClear@?$ListProxyCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@@Bamo@Microsoft@@MEAAJXZ @ 0x180197C00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact>::RemoteClear(
        _QWORD *a1)
{
  __int64 v2; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  Microsoft::BamoImpl::BamoImplObject *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  Microsoft::Bamo::Lock::Lock(v9, v3);
  a1[7] = a1[6];
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9, v4, v5, v6);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x44C,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7,
        (int)v9[0]);
  }
  return 0LL;
}
