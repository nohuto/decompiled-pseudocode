/*
 * XREFs of ?evaluate@_tip_RemoteSessionActivationTipTest@@QEAAXXZ @ 0x1807243CC
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@EEAAXXZ @ 0x180724310 (-evaluate@-$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_RemoteSessionActivationTipTest::evaluate(
        _tip_RemoteSessionActivationTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r9
  char v8; // r10
  __int64 *v9; // r9
  char v10; // r10
  __int64 *v11; // r9
  char v12; // r10
  __int64 v13; // r9
  __int16 v14; // ax
  const char *v15; // rax
  __int64 v16; // r9
  char v17; // r10
  __int64 *v18; // r9
  char v19; // r10

  if ( *((_BYTE *)this + 10) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::registrationDataNotFound", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 2;
LABEL_26:
    *(_QWORD *)(v5 + 80) = v2;
    *(_WORD *)(v5 + 74) = v6;
    return;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToLaunchProviderApp", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) != v8 )
      return;
    v6 = 3;
    *(_BYTE *)(v5 + 72) = 3;
    goto LABEL_26;
  }
  if ( !*((_QWORD *)this + 8) || !*((_QWORD *)this + 4) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::invalidRemoteSystemAttributes", a2);
    v5 = *v18;
    if ( *(_BYTE *)(*v18 + 72) != v19 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 4;
    goto LABEL_26;
  }
  if ( !*((_QWORD *)this + 12) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::remoteDesktopCreationFailed", a2);
    v5 = *v9;
    if ( *(_BYTE *)(*v9 + 72) != v10 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 5;
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::remoteSessionAlreadyConnected", a2);
    v5 = *v11;
    if ( *(_BYTE *)(*v11 + 72) != v12 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 6;
    goto LABEL_26;
  }
  v13 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v13 + 72) )
      return;
    v14 = 0x4000;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)v13 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v13 + 72) )
      return;
    v14 = 16385;
LABEL_18:
    *(_BYTE *)(v13 + 72) = 3;
    *(_WORD *)(v13 + 74) = v14;
    *(_QWORD *)(v13 + 80) = 0LL;
    return;
  }
  v15 = tip::details::reason_string((tip::details *)"reason::succeeded", a2);
  if ( *(_BYTE *)(v16 + 72) == v17 )
  {
    *(_QWORD *)(v16 + 80) = v15;
    *(_BYTE *)(v16 + 72) = 1;
    *(_WORD *)(v16 + 74) = 1;
  }
}
