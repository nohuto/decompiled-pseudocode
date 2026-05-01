/*
 * XREFs of ?evaluate@_tip_BootToCloudPCTest@@QEAAXXZ @ 0x180707E24
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@EEAAXXZ @ 0x180707E10 (-evaluate@-$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_BootToCloudPCTest::evaluate(_tip_BootToCloudPCTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r9
  char v8; // r10
  const char *v9; // rax
  __int64 *v10; // r9
  __int16 v11; // dx
  const char *v12; // rax
  __int64 *v13; // r9
  __int64 v14; // rcx
  char v15; // r10
  __int16 v16; // dx
  __int64 *v17; // r9
  char v18; // r10
  __int64 *v19; // r9
  char v20; // r10
  __int64 *v21; // r9
  char v22; // r10
  __int64 *v23; // r9
  char v24; // r10
  __int64 *v25; // r9
  char v26; // r10
  __int64 *v27; // r9
  char v28; // r10
  __int64 v29; // rax
  __int16 v30; // cx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::cloudpc_connected_successfully", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    v6 = v3 + 1;
    *(_BYTE *)(v5 + 72) = v3 + 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::user_dismissed_connect_screen", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) == v8 )
    {
      *(_BYTE *)(v5 + 72) = 1;
      v6 = 10;
LABEL_4:
      *(_WORD *)(v5 + 74) = v6;
      *(_QWORD *)(v5 + 80) = v2;
      return;
    }
    return;
  }
  if ( *((_BYTE *)this + 10) )
  {
    v9 = tip::details::reason_string((tip::details *)"reason::provider_app_already_launched", a2);
    v11 = 3;
LABEL_10:
    tip::test_data_base<_tip_BootToCloudPCTest_id>::__ignore<enum _tip_BootToCloudPCTest::reason>(v10, v11, (__int64)v9);
    return;
  }
  if ( *((_BYTE *)this + 12) )
  {
    v9 = tip::details::reason_string((tip::details *)"reason::shellappruntime_restarted", a2);
    v11 = 5;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 19) && !*((_BYTE *)this + 20) )
  {
    v9 = tip::details::reason_string((tip::details *)"reason::network_not_connected", a2);
    v11 = 12;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v9 = tip::details::reason_string((tip::details *)"reason::access_physical_device_triggered", a2);
    v11 = 13;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::provider_app_not_launched", a2);
    v14 = *v13;
    if ( *(_BYTE *)(*v13 + 72) != v15 )
      return;
    v16 = 2;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 18) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::provider_app_not_available", a2);
    v14 = *v17;
    if ( *(_BYTE *)(*v17 + 72) != v18 )
      return;
    v16 = 11;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 11) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::shelldesktopswitchevent_not_triggered", a2);
    v14 = *v19;
    if ( *(_BYTE *)(*v19 + 72) != v20 )
      return;
    v16 = 4;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 13) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::client_disconnected", a2);
    v14 = *v21;
    if ( *(_BYTE *)(*v21 + 72) != v22 )
      return;
    v16 = 6;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 14) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::error_transition_screen_triggered", a2);
    v14 = *v23;
    if ( *(_BYTE *)(*v23 + 72) != v24 )
      return;
    v16 = 7;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::timeout_occurred", a2);
    v14 = *v25;
    if ( *(_BYTE *)(*v25 + 72) != v26 )
      return;
    v16 = 9;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 15) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::cloudpc_exited", a2);
    v14 = *v27;
    if ( *(_BYTE *)(*v27 + 72) != v28 )
      return;
    v16 = 8;
LABEL_21:
    *(_BYTE *)(v14 + 72) = 3;
    *(_WORD *)(v14 + 74) = v16;
    *(_QWORD *)(v14 + 80) = v12;
    return;
  }
  v29 = *(_QWORD *)this;
  if ( (**(_DWORD **)this & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v29 + 72) )
      return;
    *(_BYTE *)(v29 + 72) = 1;
    v30 = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v29 + 72) )
      return;
    *(_BYTE *)(v29 + 72) = 3;
    v30 = 16385;
  }
  *(_QWORD *)(v29 + 80) = 0LL;
  *(_WORD *)(v29 + 74) = v30;
}
