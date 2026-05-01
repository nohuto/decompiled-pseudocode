/*
 * XREFs of ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1805999CC
 * Callers:
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180599128 (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CAppTransitionManager::s_GetLayoutBufferRect(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  int (__fastcall *v5)(__int64 *, __int64 *); // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+4Ch] [rbp-3Ch]
  int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v4 = *a2;
  v10[0] = 0LL;
  v5 = *(int (__fastcall **)(__int64 *, __int64 *))(v4 + 128);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v10);
  if ( v5(a2, v10) >= 0
    && (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v10[0] + 24LL))(v10[0], 4LL, v11) >= 0 )
  {
    v6 = v13;
    v7 = v14;
    v8 = v15;
    *a1 = v12;
    a1[1] = v6;
    a1[2] = v7;
    a1[3] = v8;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v10);
  return a1;
}
