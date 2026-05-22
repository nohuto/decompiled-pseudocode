/*
 * XREFs of ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800B42A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800B39FC (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x1800B47AC (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B4938 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  GameControllerRawInputProvider::ShellButtonListEntry *v11; // rsi
  GameControllerRawInputProvider::ShellButtonListEntry *i; // rbx
  __int64 v13; // rcx
  GameControllerRawInputProvider::ShellButtonListEntry *v14; // rcx
  GameControllerRawInputProvider::ShellButtonListEntry **v15; // rax
  _DWORD *v16; // rax
  unsigned int v17; // r8d
  const char *v18; // r9
  _DWORD *v19; // rbx
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 (__fastcall *v28)(__int64, __int64 (__fastcall *)(void *), _QWORD *, _QWORD *); // rbp
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  GameControllerRawInputProvider **v32; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a5 + 45;
  if ( !a6 )
  {
    v11 = (GameControllerRawInputProvider *)((char *)this + 88);
    for ( i = (GameControllerRawInputProvider::ShellButtonListEntry *)*((_QWORD *)this + 11);
          i != v11;
          i = *(GameControllerRawInputProvider::ShellButtonListEntry **)i )
    {
      if ( *((_DWORD *)i + 8) == v10 )
      {
        v13 = *((_QWORD *)i + 3);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
        v14 = *(GameControllerRawInputProvider::ShellButtonListEntry **)i;
        v15 = (GameControllerRawInputProvider::ShellButtonListEntry **)*((_QWORD *)i + 1);
        if ( *(GameControllerRawInputProvider::ShellButtonListEntry **)(*(_QWORD *)i + 8LL) != i || *v15 != i )
          goto LABEL_37;
        *v15 = v14;
        *((_QWORD *)v14 + 1) = v15;
        --*((_QWORD *)this + 13);
        GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(i);
      }
    }
  }
  v16 = operator new(0xBC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v16;
  if ( v16 )
  {
    memset_0(v16, 0, 0xBC0uLL);
    v19[6] = 3008;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = retaddr;
  if ( !v19 )
  {
    v21 = 522LL;
LABEL_16:
    wil::details::in1diag3::_Log_NullAlloc(v20, (void *)v21, v17, v18);
    return;
  }
  *v19 = 128;
  v19[1] = a2;
  *((_QWORD *)v19 + 4) = a3;
  v19[16] = v10;
  *((_BYTE *)v19 + 68) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)((char *)this - 16),
    a4,
    (struct InputInfo *)v19);
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 4)
                                                                                             + 152LL))(
          *((_QWORD *)this + 4),
          GameControllerRawInputProvider::InputReportCallback,
          v19,
          4LL);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      533LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v22);
    operator delete(v19);
    return;
  }
  if ( a6 )
  {
    v23 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v23;
    if ( v23 )
    {
      *v23 = 0LL;
      v23[1] = 0LL;
      v23[4] = 0LL;
      v23[5] = 0LL;
      v23[2] = 0LL;
      v23[3] = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    v20 = retaddr;
    if ( !v24 )
    {
      v21 = 546LL;
      goto LABEL_16;
    }
    v25 = *((_QWORD *)this + 3);
    v26 = v24[2];
    v24[2] = v25;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    *((_DWORD *)v24 + 8) = v10;
    *((_DWORD *)v24 + 9) = a2;
    v24[5] = a3;
    v27 = *((_QWORD *)this + 4);
    v28 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), _QWORD *, _QWORD *))(*(_QWORD *)v27 + 144LL);
    v29 = v24[3];
    v24[3] = 0LL;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v30 = v28(v27, GameControllerRawInputProvider::ShellButtonRepeatCallback, v24, v24 + 3);
    if ( v30 >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v24[3] + 80LL))(v24[3], 250000LL, 250000LL);
      if ( v30 >= 0 )
      {
LABEL_36:
        v32 = (GameControllerRawInputProvider **)*((_QWORD *)this + 12);
        if ( *v32 != (GameControllerRawInputProvider *)((char *)this + 88) )
LABEL_37:
          __fastfail(3u);
        *v24 = (char *)this + 88;
        v24[1] = v32;
        *v32 = (GameControllerRawInputProvider *)v24;
        *((_QWORD *)this + 12) = v24;
        ++*((_QWORD *)this + 13);
        return;
      }
      v31 = 560LL;
    }
    else
    {
      v31 = 556LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_36;
  }
}
