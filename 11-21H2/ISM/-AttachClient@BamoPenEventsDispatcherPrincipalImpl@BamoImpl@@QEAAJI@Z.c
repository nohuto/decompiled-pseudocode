/*
 * XREFs of ?AttachClient@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180042190
 * Callers:
 *     ?Thunk_AttachClient_8@?$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180042160 (-Thunk_AttachClient_8@-$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalI.c)
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18001C4E0 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800423BC (--0-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PE.c)
 *     ??1?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800424A4 (--1-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsDispatcherPrincipalImpl::AttachClient(
        BamoImpl::BamoPenEventsDispatcherPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v4; // rbx
  int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v10; // rdi
  __int64 v11; // rbx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v19[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v4[5] + 36LL) == v5 )
        break;
      v4 = (_QWORD *)v4[6];
    }
    while ( v4 );
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
  v7 = v4[5];
  v8 = *(_QWORD *)(v7 + 24);
  v9 = *(_QWORD *)(v8 + 32);
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
             *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32),
             *(unsigned int *)(v7 + 36),
             a2);
    if ( !Item
      || (v13 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item),
          (v10 = (Microsoft::BamoImpl::BamoProxyImpl *)v13) == 0LL) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC190,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL,
        v19[0]);
      return 2276591628LL;
    }
    v11 = v13 - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
    v19,
    v9,
    this,
    3LL);
  v14 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 96LL))((char *)this - 16, v6, v11);
  v15 = v14;
  if ( v14 != -2018375668 && v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC19F,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v14,
      v19[0]);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(v19);
  if ( v10 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v10, v16, v17);
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1AE,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v15,
      v19[0]);
  return (unsigned int)v15;
}
