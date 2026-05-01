/*
 * XREFs of ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x18014A8A4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@EEAAXXZ @ 0x18014A890 (-evaluate@-$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_AppPrelaunch::evaluate(_tip_AppPrelaunch *this, const char *a2)
{
  _DWORD *v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  const char *v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdx
  __int128 v10; // rax

  v2 = *(_DWORD **)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    *((_BYTE *)v2 + 72) = 3;
    v3 = 16385;
LABEL_14:
    *((_QWORD *)v2 + 10) = 0LL;
    *((_WORD *)v2 + 37) = v3;
    return;
  }
  if ( *((_BYTE *)this + 8) )
  {
    if ( (*((_DWORD *)this + 3) & 0xFFFFFFFD) != 0 )
    {
      v7 = tip::details::reason_string((tip::details *)"reason::should_prelaunch_policy_failed_read", a2);
      v9 = 2LL;
    }
    else
    {
      v10 = (__int64)(*((_QWORD *)this + 2) - *((_QWORD *)this + 3));
      if ( (__int64)((*((_QWORD *)&v10 + 1) ^ v10) - *((_QWORD *)&v10 + 1)) <= 100 )
      {
        if ( *((_BYTE *)v2 + 72) )
          return;
        *((_BYTE *)v2 + 72) = 1;
        v3 = 0x8000;
        goto LABEL_14;
      }
      v7 = tip::details::reason_string(
             (tip::details *)"reason::delay_unexpectedly_long_or_short",
             *((const char **)&v10 + 1));
      v9 = 4LL;
    }
    tip::test_data_base<_tip_AppPrelaunch_id>::__fail<enum _tip_AppPrelaunch::reason>(v8, v9, v7);
    return;
  }
  v4 = tip::details::reason_string((tip::details *)"reason::no_prelaunch", a2);
  if ( *(_BYTE *)(v5 + 72) == v6 )
  {
    *(_BYTE *)(v5 + 72) = 4;
    *(_WORD *)(v5 + 74) = 5;
    *(_QWORD *)(v5 + 80) = v4;
  }
}
