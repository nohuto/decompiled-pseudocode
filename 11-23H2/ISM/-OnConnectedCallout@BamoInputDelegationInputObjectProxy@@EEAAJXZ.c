/*
 * XREFs of ?OnConnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ @ 0x180014F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001507C (--1-$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BamoInputDelegationInputObjectProxy::OnConnectedCallout(BamoInputDelegationInputObjectProxy *this)
{
  __int64 v2; // rsi
  void (__fastcall ***v3)(char *); // rbx
  int v4; // edi
  const char *v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  v3 = (void (__fastcall ***)(char *))((char *)this + 16);
  v4 = (BamoInputDelegationInputObjectProxy *)((char *)this + 16) != 0LL ? 3 : 0;
  v10 = (char *)this + 16;
  if ( this != (BamoInputDelegationInputObjectProxy *)-16LL )
    (**v3)((char *)this + 16);
  v11 = v4;
  *(_QWORD *)v9 = 0LL;
  if ( !*(_DWORD *)(v2 + 188) )
  {
    *(_QWORD *)v9 = v2;
    if ( *(_DWORD *)(v2 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v5);
    *(_DWORD *)(v2 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 32LL))(*(_QWORD *)(v2 + 16));
  }
  if ( v3 )
  {
    if ( (v4 & 1) != 0 )
    {
      v6 = ((__int64 (__fastcall *)(__int64))(*(v3 - 2))[11])((__int64)(v3 - 2));
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v6,
          v9[0]);
    }
  }
  v7 = (*(__int64 (__fastcall **)(BamoInputDelegationInputObjectProxy *))(*(_QWORD *)this + 32LL))(this);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>(v9);
  return v7;
}
