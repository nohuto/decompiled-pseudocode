/*
 * XREFs of ?EmitLastFrameTelemetry@CDisplayAnimatedVisual@@AEAAJXZ @ 0x1800B7FD0
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::EmitLastFrameTelemetry(CDisplayAnimatedVisual *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int128 v11; // [rsp+70h] [rbp-90h] BYREF
  __int64 v12; // [rsp+80h] [rbp-80h]
  int v13; // [rsp+88h] [rbp-78h]
  _BYTE v14[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v15[128]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  if ( *((_QWORD *)this + 52) )
  {
    (*(void (__fastcall **)(CDisplayAnimatedVisual *, _BYTE *))(*(_QWORD *)this + 248LL))(this, v14);
    GetAnimationScenarioNameFromGUID(v14, v15, 64LL);
    v2 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *, _DWORD *))(*(_QWORD *)this + 256LL))(this, v7);
    if ( v2 < 0 )
    {
      v3 = 266LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 52) + 88LL))(*((_QWORD *)this + 52), &v11);
    if ( v2 < 0 )
    {
      v3 = 269LL;
      goto LABEL_4;
    }
    v5 = (__int64 *)*((_QWORD *)this + 52);
    v10 = v13;
    v6 = *v5;
    v8 = v11;
    v9 = v12;
    (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD))(v6 + 216))(
      v5,
      &v8,
      0LL,
      0LL,
      v15,
      0LL,
      v7[0]);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 52) + 40LL))(*((_QWORD *)this + 52), 0LL);
  }
  return 0LL;
}
