/*
 * XREFs of ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x1800F8E70
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800E2000 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800E2000.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x180190AE4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1800F8BF4 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
        HotkeyRegistrationForwarder *this,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *a2,
        __int64 a3)
{
  char *v4; // r9
  const void **v5; // rcx
  char *v6; // rbx
  __int64 v7; // xmm1_8
  int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (char *)*((_QWORD *)this + 3);
  v5 = (const void **)((char *)this + 16);
  v6 = (char *)*v5;
  if ( *v5 != v4 )
  {
    a3 = *((unsigned int *)a2 + 1);
    do
    {
      if ( *(_QWORD *)((char *)a2 + 4) == *(_QWORD *)v6
        && *((unsigned __int8 *)a2 + 14) == *((_WORD *)v6 + 5)
        && ((*((_BYTE *)a2 + 12) ^ (unsigned __int8)v6[8]) & 0xF) == 0 )
      {
        break;
      }
      v6 += 12;
    }
    while ( v6 != v4 );
  }
  if ( *(_DWORD *)a2 )
  {
    if ( v6 == v4 )
    {
      try
      {
        v16 = *(_QWORD *)((char *)a2 + 4);
        LOWORD(v17) = *((_WORD *)a2 + 6);
        HIWORD(v17) = *((unsigned __int8 *)a2 + 14);
        if ( v4 == v5[2] )
        {
          std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
            v5,
            v4,
            (__int64)&v16);
          v8 = v17;
          v7 = v16;
        }
        else
        {
          v7 = v16;
          *(_QWORD *)v4 = v16;
          v8 = v17;
          *((_DWORD *)v4 + 2) = v17;
          v5[1] = (char *)v5[1] + 12;
        }
        v9 = (__int64 *)*((_QWORD *)this + 6);
        if ( v9 )
        {
          v10 = *v9;
          v16 = v7;
          v17 = v8;
          LOBYTE(a3) = 1;
          v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v10 + 488))(v9, &v16, a3);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              71LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrat"
                       "ionforwarder.cpp",
              (const char *)(unsigned int)v11);
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x4A,
                               (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\ho"
                                    "tkeyregistrationforwarder.cpp",
                               v4);
      }
    }
  }
  else if ( v6 != v4 )
  {
    v12 = (__int64 *)*((_QWORD *)this + 6);
    if ( v12 )
    {
      v13 = *v12;
      v16 = *(_QWORD *)v6;
      v17 = *((_DWORD *)v6 + 2);
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v13 + 488))(v12, &v16, 0LL);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          84LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
          (const char *)(unsigned int)v14);
    }
    memmove_0(v6, v6 + 12, *((_QWORD *)this + 3) - (_QWORD)(v6 + 12));
    *((_QWORD *)this + 3) -= 12LL;
  }
  return 0LL;
}
