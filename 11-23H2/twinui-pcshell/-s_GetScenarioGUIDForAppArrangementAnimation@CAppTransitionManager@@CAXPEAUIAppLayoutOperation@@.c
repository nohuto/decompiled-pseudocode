/*
 * XREFs of ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x180599ABC
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
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
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _GUID v17; // xmm0
  struct _GUID v18; // xmm1
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+58h] [rbp-18h] BYREF

  *a2 = (struct _GUID)xmmword_18089DC48;
  *a3 = (struct _GUID)xmmword_18089DC48;
  if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v22) < 0 )
    return;
  v21 = 0LL;
  (*(void (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v21);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v20);
    v6 = 0;
    if ( (_DWORD)v20 )
    {
      while ( 1 )
      {
        v7 = v21;
        *(_QWORD *)&v23 = 0LL;
        v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int128 *))(*(_QWORD *)v21 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v23);
        if ( v8(v7, v6, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v23) >= 0
          && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 32LL))(v23) == 2 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v23);
        if ( ++v6 >= (unsigned int)v20 )
          goto LABEL_9;
      }
      *a2 = (struct _GUID)xmmword_18089DBF8;
      *a3 = (struct _GUID)xmmword_18089DBE8;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v23);
    }
  }
LABEL_9:
  for ( i = 0; ; ++i )
  {
    v10 = *(_QWORD *)&a2->Data1 - 0x45DC9D952C60FCF9LL;
    if ( *(_QWORD *)&a2->Data1 == 0x45DC9D952C60FCF9LL )
      v10 = *(_QWORD *)a2->Data4 + 0x3BEB2695C954FD7FLL;
    if ( v10 || i >= v22 )
      break;
    v20 = 0LL;
    v11 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
    if ( v11(a1, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v20) < 0 )
      goto LABEL_29;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 96LL))(v20) - 1;
    if ( !v12 )
      goto LABEL_27;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_26;
    v14 = v13 - 1;
    if ( !v14 || (v15 = v14 - 1) == 0 )
    {
      *a2 = (struct _GUID)xmmword_18089DC28;
      *a3 = (struct _GUID)xmmword_18089DC28;
      goto LABEL_29;
    }
    v16 = v15 - 3;
    if ( !v16 )
    {
LABEL_26:
      *a2 = (struct _GUID)xmmword_18089DC38;
      goto LABEL_29;
    }
    if ( v16 == 3 )
    {
LABEL_27:
      v17 = (struct _GUID)xmmword_18089DBD8;
      v18 = (struct _GUID)xmmword_18089DBC8;
      goto LABEL_28;
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 80LL))(v20) )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 88LL))(v20) )
      {
        v24 = 0LL;
        v23 = 0LL;
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v20 + 56LL))(v20, 1LL, &v24);
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v20 + 72LL))(v20, 1LL, &v23);
        if ( !Geometry::operator==(&v24, &v23) )
        {
          v17 = (struct _GUID)xmmword_18089DC18;
          v18 = (struct _GUID)xmmword_18089DC08;
LABEL_28:
          *a2 = v17;
          *a3 = v18;
        }
      }
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
}
