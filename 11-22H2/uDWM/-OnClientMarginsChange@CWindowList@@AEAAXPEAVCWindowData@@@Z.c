/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003A440
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003A2C0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009DA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     _o_ceilf_0 @ 0x18005D2B0 (_o_ceilf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // ebp
  int v5; // r14d
  int v6; // esi
  int v7; // eax
  CVisual *v8; // rcx
  CWindowIconic *v9; // rcx
  unsigned int i; // ebx
  unsigned int j; // ebx
  int v12; // eax
  int v13; // eax
  CThumbnailVisual *v14; // rcx
  __int64 v15; // rax
  CThumbnailVisual *v16; // rcx
  int v17[4]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((float *)a2 + 83);
  v17[0] = (int)o_ceilf_0((float)*((int *)a2 + 66) * v3);
  v4 = (int)o_ceilf_0((float)*((int *)a2 + 67) * v3);
  v17[1] = v4;
  v5 = (int)o_ceilf_0((float)*((int *)a2 + 68) * v3);
  v17[2] = v5;
  v6 = (int)o_ceilf_0((float)*((int *)a2 + 69) * v3);
  v17[3] = v6;
  v7 = (int)o_ceilf_0((float)*((int *)a2 + 74) * v3);
  if ( *((_QWORD *)a2 + 8) != __PAIR64__(v4, v17[0])
    || *((_DWORD *)a2 + 18) != v5
    || *((_DWORD *)a2 + 19) != v6
    || *((_DWORD *)a2 + 28) != v7 )
  {
    v8 = (CVisual *)*((_QWORD *)a2 + 55);
    *((_DWORD *)a2 + 28) = v7;
    *((_OWORD *)a2 + 4) = *(_OWORD *)v17;
    if ( v8 )
    {
      v13 = *((_DWORD *)v8 + 22);
      if ( (v13 & 0x2000) == 0 )
      {
        *((_DWORD *)v8 + 22) = v13 | 0x2000;
        CVisual::PropagateDirtyChildren(v8);
      }
    }
    v9 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( v9 )
      CWindowIconic::UpdateSizeOrMargins(v9, 0);
    for ( i = 0; i < *((_DWORD *)a2 + 148); ++i )
    {
      v14 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 71) + 8LL * i) + 88LL);
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 + 47);
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 77) )
            CThumbnailVisual::SetDirtyFlags(v14, 0x4000);
        }
      }
    }
    for ( j = 0; j < *((_DWORD *)a2 + 140); ++j )
    {
      v16 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 67) + 8LL * j) + 88LL);
      if ( v16 )
        CThumbnailVisual::SetDirtyFlags(v16, 4096);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 58)
                                                                  + 112LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
            a2);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x106E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v12,
        v17[0]);
  }
}
