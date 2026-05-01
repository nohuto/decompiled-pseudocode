/*
 * XREFs of ?evaluate@_tip_SwitchToRemoteTipTest@@QEAAXXZ @ 0x18071B768
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@EEAAXXZ @ 0x18071B3B0 (-evaluate@-$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SwitchToRemoteTipTest::evaluate(_tip_SwitchToRemoteTipTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r9
  char v8; // r11
  __int64 *v9; // r9
  char v10; // r11
  __int64 v11; // r10
  const char *v12; // rax
  __int64 v13; // r10
  char v14; // r11

  if ( !*((_QWORD *)this + 3) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::systemIdNotFound", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 88) )
  {
    if ( !*((_BYTE *)this + 76) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason:: remoteSystemNotFound", a2);
      v5 = *v7;
      if ( *(_BYTE *)(*v7 + 72) == v8 )
      {
        *(_BYTE *)(v5 + 72) = 3;
        v6 = 2;
LABEL_4:
        *(_WORD *)(v5 + 74) = v6;
        *(_QWORD *)(v5 + 80) = v2;
        return;
      }
      return;
    }
LABEL_12:
    v11 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) != 0 )
    {
      v12 = tip::details::reason_string((tip::details *)"reason::switchDeliveredSuccessfully", a2);
      if ( *(_BYTE *)(v13 + 72) == v14 )
      {
        *(_QWORD *)(v13 + 80) = v12;
        *(_BYTE *)(v13 + 72) = 1;
        *(_WORD *)(v13 + 74) = 4;
      }
    }
    else if ( !*(_BYTE *)(v11 + 72) )
    {
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_BYTE *)(v11 + 72) = 3;
      *(_WORD *)(v11 + 74) = 16385;
    }
    return;
  }
  if ( *((_BYTE *)this + 77) )
    goto LABEL_12;
  v2 = tip::details::reason_string((tip::details *)"reason::serviceCrashed", a2);
  v5 = *v9;
  if ( *(_BYTE *)(*v9 + 72) == v10 )
  {
    v6 = 3;
    *(_BYTE *)(v5 + 72) = 3;
    goto LABEL_4;
  }
}
