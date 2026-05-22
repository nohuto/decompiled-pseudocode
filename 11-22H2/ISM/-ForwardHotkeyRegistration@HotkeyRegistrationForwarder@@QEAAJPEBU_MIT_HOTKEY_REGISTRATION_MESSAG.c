/*
 * XREFs of ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x180122E2C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x18010A1C0 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_18010A1C0.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801BCCD4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x180122BF0 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
        HotkeyRegistrationForwarder *this,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 *i; // rbx
  __int64 v6; // xmm1_8
  int v7; // ecx
  const char *v8; // r9
  __int64 v9; // rax
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *((_QWORD *)this + 3);
  for ( i = (__int64 *)*((_QWORD *)this + 2); i != (__int64 *)v4; i = (__int64 *)((char *)i + 12) )
  {
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)i
      && *((_DWORD *)a2 + 2) == *((_DWORD *)i + 1)
      && *((unsigned __int8 *)a2 + 14) == *((_WORD *)i + 5)
      && ((*((_BYTE *)a2 + 12) ^ *((_BYTE *)i + 8)) & 0xF) == 0 )
    {
      break;
    }
  }
  if ( *(_DWORD *)a2 )
  {
    if ( i == (__int64 *)v4 )
    {
      try
      {
        v15 = *(_QWORD *)((char *)a2 + 4);
        LOWORD(v16) = *((_WORD *)a2 + 6);
        HIWORD(v16) = *((unsigned __int8 *)a2 + 14);
        if ( v4 == *((_QWORD *)this + 4) )
        {
          std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
            (const void **)this + 2,
            (_BYTE *)v4,
            (__int64)&v15);
          v7 = v16;
          v6 = v15;
        }
        else
        {
          v6 = v15;
          *(_QWORD *)v4 = v15;
          v7 = v16;
          *(_DWORD *)(v4 + 8) = v16;
          *((_QWORD *)this + 3) += 12LL;
        }
        v8 = (const char *)*((_QWORD *)this + 6);
        if ( v8 )
        {
          v9 = *(_QWORD *)v8;
          v15 = v6;
          v16 = v7;
          LOBYTE(a3) = 1;
          v10 = (*(__int64 (__fastcall **)(const char *, __int64 *, __int64))(v9 + 488))(v8, &v15, a3);
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x58,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
              (const char *)(unsigned int)v10);
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x5B,
                               (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\ho"
                                    "tkeyregistrationforwarder.cpp",
                               v8);
      }
    }
  }
  else if ( i != (__int64 *)v4 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 6);
    if ( v11 )
    {
      v12 = *v11;
      v15 = *i;
      v16 = *((_DWORD *)i + 2);
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v12 + 488))(v11, &v15, 0LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x65,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
          (const char *)(unsigned int)v13);
    }
    memmove_0(i, (char *)i + 12, *((_QWORD *)this + 3) - ((_QWORD)i + 12));
    *((_QWORD *)this + 3) -= 12LL;
  }
  return 0LL;
}
