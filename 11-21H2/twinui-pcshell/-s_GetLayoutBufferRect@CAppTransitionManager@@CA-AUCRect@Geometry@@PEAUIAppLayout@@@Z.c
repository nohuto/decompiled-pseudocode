/*
 * XREFs of ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1804E1AFC
 * Callers:
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E125C (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CAppTransitionManager::s_GetLayoutBufferRect(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  int (__fastcall *v5)(__int64 *, __int64 *); // rbx
  __int64 v7; // [rsp+20h] [rbp-78h] BYREF
  __int128 v8; // [rsp+28h] [rbp-70h]
  _BYTE v9[24]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v10; // [rsp+58h] [rbp-40h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v4 = *a2;
  v7 = 0LL;
  v5 = *(int (__fastcall **)(__int64 *, __int64 *))(v4 + 128);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
  if ( v5(a2, &v7) >= 0 && (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, 4LL, v9) >= 0 )
  {
    v8 = v10;
    *(_OWORD *)a1 = v10;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
  return a1;
}
