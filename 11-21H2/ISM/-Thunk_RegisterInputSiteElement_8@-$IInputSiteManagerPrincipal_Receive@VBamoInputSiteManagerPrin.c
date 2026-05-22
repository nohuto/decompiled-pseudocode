/*
 * XREFs of ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18001C4E0 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18001C540 (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001FC6C (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteManagerPrincipal_Receive<BamoImpl::BamoInputSiteManagerPrincipalImpl>::Thunk_RegisterInputSiteElement_8(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // esi
  _QWORD *i; // rbx
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v9; // rbx
  __int64 v10; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // edi
  unsigned int v15; // esi
  int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = **a2;
  for ( i = *(_QWORD **)(a1 + 32); i; i = (_QWORD *)i[6] )
  {
    if ( *(_DWORD *)(i[5] + 36LL) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL) )
      break;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 32LL))(i);
  v6 = i[5];
  v7 = *(_QWORD *)(v6 + 24);
  v8 = *(_QWORD *)(v7 + 32);
  v9 = 0LL;
  v10 = 0LL;
  if ( v3 )
  {
    Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
             *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v7 + 32),
             *(_DWORD *)(v6 + 36),
             v3);
    if ( !Item
      || (v12 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item),
          (v9 = (Microsoft::BamoImpl::BamoProxyImpl *)v12) == 0LL) )
    {
      v15 = -2018375668;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5122,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)0x87B2080CLL,
        v17[0]);
      return v15;
    }
    v10 = v12 - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
    v17,
    v8,
    a1,
    3LL);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 96LL))(a1 - 16, v5, v10);
  v14 = v13;
  if ( v13 != -2018375668 && v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5131,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v13,
      v17[0]);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v17);
  if ( v9 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v9);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5140,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v14,
      v17[0]);
  return (unsigned int)v14;
}
