/*
 * XREFs of NtTokenManagerThread @ 0x1C0003420
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // ebx
  unsigned int v6; // r14d
  size_t v7; // r8
  const void *v8; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-E0h]
  _BYTE *v13; // [rsp+40h] [rbp-D8h]
  void *Src[2]; // [rsp+48h] [rbp-D0h]
  __int64 v15; // [rsp+58h] [rbp-C0h]
  __int128 v16; // [rsp+60h] [rbp-B8h]
  __int64 v17; // [rsp+70h] [rbp-A8h]
  _BYTE P[128]; // [rsp+80h] [rbp-98h] BYREF

  *(_OWORD *)Src = 0LL;
  v15 = 0LL;
  memset(P, 0, 0x78uLL);
  v2 = P;
  v13 = P;
  v3 = 0LL;
  v11 = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  SessionTokenManager = 0;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))() )
    SessionTokenManager = -1073741790;
  if ( SessionTokenManager >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v16 = *(_OWORD *)a1;
    v17 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)Src = v16;
    v15 = v17;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v15 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v6 = EtwpDisableStackWalkApc();
  v12 = v6;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v11);
    v3 = v11;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v15 > 5 )
      {
        v10 = 24LL * (unsigned int)v15;
        if ( !is_mul_ok((unsigned int)v15, 0x18uLL) )
          v10 = -1LL;
        v2 = (_BYTE *)operator new[](v10, 1650675028LL, 256LL);
        v13 = v2;
      }
      if ( v2 )
      {
        v7 = 24LL * (unsigned int)v15;
        v8 = Src[1];
        if ( (char *)Src[1] + v7 < Src[1] || (char *)Src[1] + v7 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v2, v8, v7);
      }
      else
      {
        SessionTokenManager = -1073741801;
      }
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *, _QWORD))(*(_QWORD *)v3 + 64LL))(
                                v3,
                                Src[0],
                                v2,
                                (unsigned int)v15);
    }
  }
  if ( v2 && v2 != P )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  EtwpReenableStackWalkApc(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
