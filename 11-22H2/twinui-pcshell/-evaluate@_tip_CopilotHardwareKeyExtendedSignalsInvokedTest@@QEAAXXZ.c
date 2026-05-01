/*
 * XREFs of ?evaluate@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@QEAAXXZ @ 0x180275274
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180275160 (-evaluate@-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EE.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CopilotHardwareKeyExtendedSignalsInvokedTest::evaluate(
        _tip_CopilotHardwareKeyExtendedSignalsInvokedTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // r9
  char v10; // r10
  __int64 v11; // r9
  char v12; // r10
  __int64 v13; // r9
  char v14; // r10
  __int64 v15; // r9
  char v16; // r10
  __int64 v17; // r9
  char v18; // r10
  __int64 v19; // rax
  __int16 v20; // cx
  __int64 v21; // r9
  char v22; // r10

  if ( *((_BYTE *)this + 17) )
  {
    if ( *((_BYTE *)this + 19) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::failed_to_create_foreground_window", a2);
      v5 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v5 + 152) != v8 )
        return;
      *(_BYTE *)(v5 + 152) = 3;
      v6 = 2;
    }
    else if ( *((_BYTE *)this + 20) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::long_press_timer_creation_failed", a2);
      v5 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v5 + 152) != v10 )
        return;
      v6 = 3;
      *(_BYTE *)(v5 + 152) = 3;
    }
    else if ( *((_BYTE *)this + 24) && (*((_BYTE *)this + 22) || *((_BYTE *)this + 23)) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::incosistent_signal_handling", a2);
      v5 = *(_QWORD *)(v11 + 8);
      if ( *(_BYTE *)(v5 + 152) != v12 )
        return;
      *(_BYTE *)(v5 + 152) = 3;
      v6 = 4;
    }
    else if ( *((_BYTE *)this + 22) == *((_BYTE *)this + 23) )
    {
      if ( *((_BYTE *)this + 26) || *((_BYTE *)this + 25) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::bad_longpress_signal_uri", a2);
        v5 = *(_QWORD *)(v21 + 8);
        if ( *(_BYTE *)(v5 + 152) != v22 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        v6 = 6;
      }
      else if ( *((_BYTE *)this + 29) && *((_BYTE *)this + 28) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::failed_to_read_app_extension_properties", a2);
        v5 = *(_QWORD *)(v15 + 8);
        if ( *(_BYTE *)(v5 + 152) != v16 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        v6 = 7;
      }
      else
      {
        if ( *((_BYTE *)this + 16) || *((_BYTE *)this + 18) || *((_BYTE *)this + 30) )
        {
          v19 = *((_QWORD *)this + 1);
          if ( (*(_DWORD *)(v19 + 56) & 0x200) != 0 )
          {
            if ( *(_QWORD *)(v19 + 80) )
            {
              if ( *(_BYTE *)(v19 + 152) )
                return;
              *(_BYTE *)(v19 + 152) = 3;
              v20 = 0x4000;
            }
            else
            {
              if ( *(_BYTE *)(v19 + 152) )
                return;
              *(_BYTE *)(v19 + 152) = 1;
              v20 = 0x8000;
            }
          }
          else
          {
            if ( *(_BYTE *)(v19 + 152) )
              return;
            *(_BYTE *)(v19 + 152) = 3;
            v20 = 16385;
          }
          *(_WORD *)(v19 + 154) = v20;
          *(_QWORD *)(v19 + 160) = 0LL;
          return;
        }
        v2 = tip::details::reason_string((tip::details *)"reason::failed_to_restore_foreground", a2);
        v5 = *(_QWORD *)(v17 + 8);
        if ( *(_BYTE *)(v5 + 152) != v18 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        v6 = 8;
      }
    }
    else
    {
      v2 = tip::details::reason_string((tip::details *)"reason::longpress_stop_not_called", a2);
      v5 = *(_QWORD *)(v13 + 8);
      if ( *(_BYTE *)(v5 + 152) != v14 )
        return;
      *(_BYTE *)(v5 + 152) = 3;
      v6 = 5;
    }
  }
  else
  {
    v2 = tip::details::reason_string((tip::details *)"reason::policy_disabled", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 152) = v3 + 3;
    v6 = v3 + 1;
  }
  *(_QWORD *)(v5 + 160) = v2;
  *(_WORD *)(v5 + 154) = v6;
}
