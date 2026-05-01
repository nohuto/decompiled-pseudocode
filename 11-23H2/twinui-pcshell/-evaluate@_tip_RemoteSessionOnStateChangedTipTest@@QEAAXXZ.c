/*
 * XREFs of ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x180724548
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@EEAAXXZ @ 0x180724330 (-evaluate@-$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??$__fail@W4reason@_tip_RemoteSessionOnStateChangedTipTest@@@?$test_data_base@V_tip_RemoteSessionOnStateChangedTipTest_id@@@tip@@IEBAXW4reason@_tip_RemoteSessionOnStateChangedTipTest@@PEBD@Z @ 0x18071EDE8 (--$__fail@W4reason@_tip_RemoteSessionOnStateChangedTipTest@@@-$test_data_base@V_tip_RemoteSessio.c)
 */

void __fastcall _tip_RemoteSessionOnStateChangedTipTest::evaluate(
        _tip_RemoteSessionOnStateChangedTipTest *this,
        const char *a2)
{
  const char *v3; // rax
  __int16 v4; // dx
  int v5; // edi
  const char *v6; // rax
  __int64 v7; // rdx
  const char *v8; // rdx
  __int64 v9; // r9
  const char *v10; // rax
  __int64 v11; // r9

  if ( *((_BYTE *)this + 85) )
  {
    if ( *((_BYTE *)this + 80) )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::systemIdNotFoundByRSWM", a2);
      v4 = 3;
      goto LABEL_4;
    }
  }
  else if ( *((_BYTE *)this + 80) )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::stateChangeWhenNoActiveSession", a2);
    v4 = 5;
LABEL_4:
    tip::test_data_base<_tip_RemoteSessionOnStateChangedTipTest_id>::__fail<enum _tip_RemoteSessionOnStateChangedTipTest::reason>(
      (__int64 *)this,
      v4,
      (__int64)v3);
    return;
  }
  v5 = *((_DWORD *)this + 18);
  if ( v5 == *((_DWORD *)this + 19) && *((_BYTE *)this + 81) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::succeededNoStateChange", a2);
    v7 = *(_QWORD *)this;
    if ( !*(_BYTE *)(*(_QWORD *)this + 72LL) )
    {
      *(_QWORD *)(v7 + 80) = v6;
      *(_BYTE *)(v7 + 72) = 1;
      *(_WORD *)(v7 + 74) = 2;
    }
  }
  else
  {
    if ( std::wstring::_Equal((char *)this + 40, (char *)&LocaleName) && v5 != 99 )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::remoteDesktopIdNotFound", v8);
      v4 = 4;
      goto LABEL_4;
    }
    v9 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) != 0 )
    {
      v10 = tip::details::reason_string((tip::details *)"reason::succeeded", v8);
      if ( !*(_BYTE *)(v11 + 72) )
      {
        *(_QWORD *)(v11 + 80) = v10;
        *(_BYTE *)(v11 + 72) = 1;
        *(_WORD *)(v11 + 74) = 1;
      }
    }
    else if ( !*(_BYTE *)(v9 + 72) )
    {
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_WORD *)(v9 + 74) = 16385;
      *(_BYTE *)(v9 + 72) = 3;
    }
  }
}
