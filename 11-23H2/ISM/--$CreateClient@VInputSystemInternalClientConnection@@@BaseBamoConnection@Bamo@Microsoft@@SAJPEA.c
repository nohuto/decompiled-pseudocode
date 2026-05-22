/*
 * XREFs of ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18013BC74
 * Callers:
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18013C0CC (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x1800337CC (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE490 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x18013BFC4 (--0InputSystemInternalClientConnection@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<InputSystemInternalClientConnection>(
        __int64 *a1,
        _OWORD *a2,
        __int64 a3,
        Microsoft::Bamo::BaseBamoConnection **a4)
{
  Microsoft::Bamo::BaseBamoConnection *v7; // rax
  Microsoft::Bamo::BaseBamoConnection *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int v14[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::Bamo::BaseBamoConnection *v16; // [rsp+60h] [rbp+18h] BYREF
  InputSystemInternalClientConnection *v17; // [rsp+68h] [rbp+20h]

  v16 = 0LL;
  *a4 = 0LL;
  v17 = (InputSystemInternalClientConnection *)operator new(0x118uLL);
  v7 = InputSystemInternalClientConnection::InputSystemInternalClientConnection(v17);
  v8 = v7;
  v16 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 2830LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v10);
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v16);
    return v9;
  }
  *(_OWORD *)v14 = *a2;
  v12 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient(
          (__int64)v7,
          a1,
          v14,
          L"System\\InputSystemInternalConversation");
  v9 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v11 = 2832LL;
    goto LABEL_5;
  }
  *a4 = v8;
  return 0LL;
}
