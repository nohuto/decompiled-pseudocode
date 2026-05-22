/*
 * XREFs of ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800DC5C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x1800DCB24 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DCCC8 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GameControllerRawInputProvider::OnSystemCommand(
        GameControllerRawInputProvider *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        bool a6)
{
  int v10; // ebp
  char *v11; // rsi
  char *i; // rbx
  __int64 v13; // rcx
  char *v14; // rcx
  char **v15; // rax
  int v16; // eax
  _DWORD *v17; // rax
  unsigned int v18; // r8d
  const char *v19; // r9
  _DWORD *v20; // rbx
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 (__fastcall *v29)(__int64, __int64 (__fastcall *)(void *), _QWORD *, _QWORD *); // rbp
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  GameControllerRawInputProvider **v33; // rcx
  int v34; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a5 + 45;
  if ( !a6 )
  {
    v11 = (char *)this + 96;
    for ( i = (char *)*((_QWORD *)this + 12); i != v11; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 8) == v10 )
      {
        v13 = *((_QWORD *)i + 3);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
        v14 = *(char **)i;
        v15 = (char **)*((_QWORD *)i + 1);
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v15 != i )
          goto LABEL_38;
        *v15 = v14;
        *((_QWORD *)v14 + 1) = v15;
        --*((_QWORD *)this + 14);
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), char *, __int64))(**((_QWORD **)this + 5)
                                                                                                 + 152LL))(
                *((_QWORD *)this + 5),
                GameControllerRawInputProvider::ShellButtonListEntryDeletionCallback,
                i,
                1LL);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x23C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
            (const char *)(unsigned int)v16,
            v34);
      }
    }
  }
  v17 = operator new(0xBC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v17;
  if ( v17 )
  {
    memset_0(v17, 0, 0xBC0uLL);
    v20[6] = 3008;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = retaddr;
  if ( !v20 )
  {
    v22 = 579LL;
LABEL_17:
    wil::details::in1diag3::_Log_NullAlloc(v21, (void *)v22, v18, v19);
    return;
  }
  *v20 = 128;
  v20[1] = a2;
  *((_QWORD *)v20 + 4) = a3;
  v20[16] = v10;
  *((_BYTE *)v20 + 68) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)((char *)this - 16),
    a4,
    (struct InputInfo *)v20);
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 5)
                                                                                             + 152LL))(
          *((_QWORD *)this + 5),
          GameControllerRawInputProvider::InputReportCallback,
          v20,
          4LL);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v23);
    operator delete(v20);
    return;
  }
  if ( a6 )
  {
    v24 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v25 = v24;
    if ( v24 )
    {
      *v24 = 0LL;
      v24[1] = 0LL;
      v24[4] = 0LL;
      v24[5] = 0LL;
      v24[2] = 0LL;
      v24[3] = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    v21 = retaddr;
    if ( !v25 )
    {
      v22 = 603LL;
      goto LABEL_17;
    }
    v26 = *((_QWORD *)this + 4);
    v27 = v25[2];
    v25[2] = v26;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    *((_DWORD *)v25 + 8) = v10;
    *((_DWORD *)v25 + 9) = a2;
    v25[5] = a3;
    v28 = *((_QWORD *)this + 5);
    v29 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), _QWORD *, _QWORD *))(*(_QWORD *)v28 + 144LL);
    v30 = v25[3];
    v25[3] = 0LL;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v31 = v29(v28, GameControllerRawInputProvider::ShellButtonRepeatCallback, v25, v25 + 3);
    if ( v31 >= 0 )
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v25[3] + 80LL))(v25[3], 250000LL, 250000LL);
      if ( v31 >= 0 )
      {
LABEL_37:
        v33 = (GameControllerRawInputProvider **)*((_QWORD *)this + 13);
        if ( *v33 != (GameControllerRawInputProvider *)((char *)this + 96) )
LABEL_38:
          __fastfail(3u);
        *v25 = (char *)this + 96;
        v25[1] = v33;
        *v33 = (GameControllerRawInputProvider *)v25;
        *((_QWORD *)this + 13) = v25;
        ++*((_QWORD *)this + 14);
        return;
      }
      v32 = 617LL;
    }
    else
    {
      v32 = 613LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v31);
    goto LABEL_37;
  }
}
