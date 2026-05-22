/*
 * XREFs of ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18012057C
 * Callers:
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18012077C (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x1800F5F0C (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x180120678 (--0InputSystemInternalClientConnection@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<InputSystemInternalClientConnection>(
        __int64 *a1,
        _OWORD *a2,
        __int64 a3,
        InputSystemInternalClientConnection **a4)
{
  InputSystemInternalClientConnection *v7; // rax
  InputSystemInternalClientConnection *v8; // rsi
  Microsoft::Bamo::BaseBamoConnection *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v15[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  InputSystemInternalClientConnection *v17; // [rsp+68h] [rbp+20h]

  *a4 = 0LL;
  v17 = (InputSystemInternalClientConnection *)operator new(0x108uLL);
  v7 = InputSystemInternalClientConnection::InputSystemInternalClientConnection(v17);
  v8 = v7;
  v9 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 2636LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v11);
    goto LABEL_7;
  }
  *(_OWORD *)v15 = *a2;
  v13 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient(
          (__int64)v7,
          a1,
          v15,
          L"System\\InputSystemInternalConversation");
  v10 = v13;
  if ( v13 < 0 )
  {
    v11 = (unsigned int)v13;
    v12 = 2638LL;
    goto LABEL_5;
  }
  v9 = 0LL;
  *a4 = v8;
  v10 = 0;
LABEL_7:
  if ( v9 )
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  return v10;
}
