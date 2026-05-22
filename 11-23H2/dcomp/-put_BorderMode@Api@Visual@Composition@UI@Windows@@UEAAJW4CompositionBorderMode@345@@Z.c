/*
 * XREFs of ?put_BorderMode@Api@Visual@Composition@UI@Windows@@UEAAJW4CompositionBorderMode@345@@Z @ 0x180075D00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_BorderMode(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // r15d
  __int64 v6; // r12
  int v7; // r14d
  DirectComposition::CDevice *v8; // rsi
  _DWORD *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 144);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 136) & 2) != 0 )
  {
    v5 = 0;
    if ( a2 == 1 )
    {
      v6 = 0LL;
    }
    else if ( a2 )
    {
      if ( a2 != 2 )
      {
        v5 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x208,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
          (const char *)0x80070057LL);
        DoStackCaptureDirect(-2147024809, 0xA82u);
LABEL_8:
        Microsoft::WRL2::ContextSession::EndApiEntry(v2);
        return v5;
      }
      v6 = 1LL;
    }
    else
    {
      v6 = -1LL;
    }
    v7 = *(_DWORD *)(a1 - 40);
    if ( v7 )
    {
      v8 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 144) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v8, 0x18u, &v13, 0);
      v9 = v13;
      *(_DWORD *)v13 = 8;
      v9[1] = v7;
      v9[2] = 8;
      *((_QWORD *)v9 + 2) = v6;
      v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
      if ( v10 )
        (**v10)(v10);
    }
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ a2) & 7;
    goto LABEL_8;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return 2147483667LL;
}
