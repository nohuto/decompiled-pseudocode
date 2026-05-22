/*
 * XREFs of ?Thunk_SetViewIDDelegation_68@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180143150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001507C (--1-$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputDelegationInputObjectProxyImpl@1@@Z @ 0x180142A9C (--0-$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

__int64 __fastcall IInputDelegationInputObjectProxy_Receive<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::Thunk_SetViewIDDelegation_68(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>(
    (__int64)v9,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v4, v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>(v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v6, v7);
  return v5;
}
