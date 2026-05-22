/*
 * XREFs of ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180033E70
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180033B64 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ @ 0x180033F40 (--0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ.c)
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x180034664 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C0878 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v9 = operator new(0x108uLL);
  a5 = v9;
  memset_0(v9, 0, 0x108uLL);
  MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection((MPCManagerBamo_AutoBamos::BamoConnection *)v9);
  *v9 = &MPCManagerConnection::`vftable';
  v9[31] = 0LL;
  v9[32] = 0LL;
  v15 = v9;
  v13 = *a3;
  v10 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
          v9,
          a1,
          a2,
          &v13,
          L"System\\MPCManagerConversation");
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE1,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v15);
    return v11;
  }
  else
  {
    *v8 = v9;
    return 0LL;
  }
}
