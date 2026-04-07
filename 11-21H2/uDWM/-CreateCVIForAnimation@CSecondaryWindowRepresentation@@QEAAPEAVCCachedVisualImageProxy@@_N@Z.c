/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180046938
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180029E9C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180046B20 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x180046EDC (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CCachedVisualImageProxy *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  int v5; // eax
  CBaseObject *v6; // rsi
  int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v17; // eax
  CBaseObject *v18; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v19[4]; // [rsp+60h] [rbp+Fh]
  __int128 v20; // [rsp+70h] [rbp+1Fh] BYREF
  _DWORD v21[4]; // [rsp+80h] [rbp+2Fh] BYREF

  v2 = *((_DWORD *)this + 22);
  v18 = 0LL;
  v19[0] = v2;
  v19[1] = *((_DWORD *)this + 24);
  v19[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v19[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v18);
  v6 = v18;
  v7 = v5;
  if ( v5 < 0 )
  {
    v17 = 835;
    goto LABEL_29;
  }
  v8 = 0LL;
  v20 = 0LL;
  do
  {
    *(float *)&v21[v8] = (float)(int)v19[v8];
    ++v8;
  }
  while ( v8 < 4 );
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 6);
  v11 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_19;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_8;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v11 + 488) + 80LL);
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v11 + 480);
  if ( !v12 )
  {
LABEL_19:
    v9 = v11;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(v12 + 32);
LABEL_8:
  v13 = *(_QWORD *)(v9 + 440);
  if ( v13 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v10 = *(_QWORD *)(v13 + 552);
    else
      v10 = *(_QWORD *)(v13 + 264);
  }
  if ( v10 )
    v14 = *(_QWORD *)(v10 + 16);
  else
    v14 = 0LL;
  if ( v14 )
    v15 = *(_DWORD *)(*(_QWORD *)(v14 + 16) + 24LL);
  else
    v15 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int128 *, _DWORD, _DWORD, int, _DWORD, int))(**(_QWORD **)(*((_QWORD *)v6 + 2) + 16LL) + 824LL))(
         *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)v6 + 2) + 24LL),
         v21,
         &v20,
         0,
         0,
         v15,
         0,
         1);
  if ( v7 >= 0 )
  {
    if ( a2 )
    {
      CCachedVisualImageProxy::Freeze(v6);
      *((_BYTE *)this + 417) = 1;
    }
    else
    {
      *((_BYTE *)this + 417) = 0;
    }
    return v6;
  }
  v17 = 862;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v17);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
