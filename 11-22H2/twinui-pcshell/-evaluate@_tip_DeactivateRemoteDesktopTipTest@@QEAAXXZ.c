/*
 * XREFs of ?evaluate@_tip_DeactivateRemoteDesktopTipTest@@QEAAXXZ @ 0x18071B3E4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@EEAAXXZ @ 0x18071B350 (-evaluate@-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_DeactivateRemoteDesktopTipTest::evaluate(
        _tip_DeactivateRemoteDesktopTipTest *this,
        const char *a2)
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
  __int64 *v11; // r9
  char v12; // r11
  __int64 *v13; // r9
  char v14; // r11
  const char *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r9
  __int64 v18; // r10
  char v19; // cl
  const char *v20; // rax
  char v21; // r11

  if ( !*((_QWORD *)this + 3) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::systemIdNotFound", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 40) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::remoteSystemNotFound", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) == v8 )
    {
      v6 = 3;
      *(_BYTE *)(v5 + 72) = 3;
LABEL_4:
      *(_WORD *)(v5 + 74) = v6;
      *(_QWORD *)(v5 + 80) = v2;
    }
  }
  else if ( *((_BYTE *)this + 41) )
  {
    if ( *((_BYTE *)this + 42) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::hwndFailureToClose", a2);
      v5 = *v11;
      if ( *(_BYTE *)(*v11 + 72) == v12 )
      {
        *(_BYTE *)(v5 + 72) = 3;
        v6 = 5;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 44) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::removeWindowReturnedFalse", a2);
      v5 = *v13;
      if ( *(_BYTE *)(*v13 + 72) == v14 )
      {
        *(_BYTE *)(v5 + 72) = 3;
        v6 = 6;
        goto LABEL_4;
      }
    }
    else
    {
      if ( *((_BYTE *)this + 45) )
      {
        v15 = tip::details::reason_string((tip::details *)"reason::physicalDeviceAccessStateIsSet", a2);
        tip::test_data_base<_tip_DeactivateRemoteDesktopTipTest_id>::__ignore<enum _tip_DeactivateRemoteDesktopTipTest::reason>(
          v17,
          v16,
          (__int64)v15);
        return;
      }
      v18 = *(_QWORD *)this;
      if ( (**(_DWORD **)this & 0x200) != 0 )
      {
        v20 = tip::details::reason_string((tip::details *)"reason::succeeded", a2);
        if ( *(_BYTE *)(v18 + 72) != v21 )
          return;
        v19 = 1;
        *(_QWORD *)(v18 + 80) = v20;
        *(_WORD *)(v18 + 74) = 1;
      }
      else
      {
        if ( *(_BYTE *)(v18 + 72) )
          return;
        *(_QWORD *)(v18 + 80) = 0LL;
        *(_WORD *)(v18 + 74) = 16385;
        v19 = 3;
      }
      *(_BYTE *)(v18 + 72) = v19;
    }
  }
  else
  {
    v2 = tip::details::reason_string((tip::details *)"reason::remoteDesktopNotRemoved", a2);
    v5 = *v9;
    if ( *(_BYTE *)(*v9 + 72) == v10 )
    {
      *(_BYTE *)(v5 + 72) = 3;
      v6 = 4;
      goto LABEL_4;
    }
  }
}
