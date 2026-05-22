/*
 * XREFs of ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180043780
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180043840 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008C928 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x1800B5840 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 */

void __fastcall GameInputProcessor::OnDeviceAttach(GameInputProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  _DWORD *v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v4,
      v8);
  if ( *((_DWORD *)a2 + 2) >= 0x60Cu && *((_WORD *)a2 + 38) && ((*((_DWORD *)a2 + 1) - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, (char *)a2 + 76, *(unsigned int *)a2);
      if ( *((_DWORD *)a2 + 1) == 4 && !*((_BYTE *)this + 192) )
      {
        v6 = NtMITSetKeyboardInputRoutingPolicy(1LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x1BD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\"
                          "lib\\gameinputprocessor.cpp",
            (const char *)(unsigned int)v6,
            v8);
        *((_BYTE *)this + 192) = 1;
      }
    }
    else
    {
      v7 = (_DWORD *)*((_QWORD *)this + 22);
      if ( v7 == *((_DWORD **)this + 23) )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((char *)this + 168, v7, a2);
      }
      else
      {
        *v7 = *(_DWORD *)a2;
        *((_QWORD *)this + 22) += 4LL;
      }
    }
  }
}
