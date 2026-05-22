/*
 * XREFs of ?Thunk_SetProcessIDDelegation_63@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180128950
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputDelegationInputObjectProxyImpl@1@@Z @ 0x1801282DC (--0-$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801283D8 (--1-$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputDelegationInputObjectProxy_Receive<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::Thunk_SetProcessIDDelegation_63(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>(
    (__int64)v9,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v4, v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>((__int64)v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v6, v7);
  return v5;
}
