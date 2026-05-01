/*
 * XREFs of ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x1804E1BFC
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DF460 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 */

void __fastcall CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(
        struct IAppLayoutOperation *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int128 *); // rdi
  unsigned int i; // edi
  __int64 v10; // rax
  int (__fastcall *v11)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  struct _GUID v13; // xmm0
  struct _GUID v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  *a2 = (struct _GUID)xmmword_1806EA8A8;
  *a3 = (struct _GUID)xmmword_1806EA8A8;
  if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v18) < 0 )
    return;
  v17 = 0LL;
  (*(void (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v17);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v16);
    v6 = 0;
    if ( (_DWORD)v16 )
    {
      while ( 1 )
      {
        v7 = v17;
        *(_QWORD *)&v19 = 0LL;
        v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int128 *))(*(_QWORD *)v17 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
        if ( v8(v7, v6, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v19) >= 0
          && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 32LL))(v19) == 2 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
        if ( ++v6 >= (unsigned int)v16 )
          goto LABEL_9;
      }
      *a2 = (struct _GUID)xmmword_1806EA858;
      *a3 = (struct _GUID)xmmword_1806EA868;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
    }
  }
LABEL_9:
  for ( i = 0; ; ++i )
  {
    v10 = *(_QWORD *)&a2->Data1 - 0x45DC9D952C60FCF9LL;
    if ( *(_QWORD *)&a2->Data1 == 0x45DC9D952C60FCF9LL )
      v10 = *(_QWORD *)a2->Data4 + 0x3BEB2695C954FD7FLL;
    if ( v10 || i >= v18 )
      break;
    v16 = 0LL;
    v11 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
    if ( v11(a1, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v16) < 0 )
      goto LABEL_29;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
    if ( v12 == 1 )
      goto LABEL_27;
    if ( v12 == 2 )
      goto LABEL_26;
    if ( v12 > 2 )
    {
      if ( v12 <= 4 )
      {
        *a2 = (struct _GUID)xmmword_1806EA828;
        *a3 = (struct _GUID)xmmword_1806EA828;
        goto LABEL_29;
      }
      if ( v12 == 7 )
      {
LABEL_26:
        *a2 = (struct _GUID)xmmword_1806EA818;
        goto LABEL_29;
      }
      if ( v12 == 10 )
      {
LABEL_27:
        v13 = (struct _GUID)xmmword_1806EA878;
        v14 = (struct _GUID)xmmword_1806EA888;
        goto LABEL_28;
      }
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16) )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16) )
      {
        v20 = 0LL;
        v19 = 0LL;
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 56LL))(v16, 1LL, &v20);
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 72LL))(v16, 1LL, &v19);
        if ( !Geometry::operator==(&v20, &v19) )
        {
          v13 = (struct _GUID)xmmword_1806EA838;
          v14 = (struct _GUID)xmmword_1806EA848;
LABEL_28:
          *a2 = v13;
          *a3 = v14;
        }
      }
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  }
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
}
