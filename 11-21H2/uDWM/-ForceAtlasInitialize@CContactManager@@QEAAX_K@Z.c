/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004E688
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004CAF0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18004F63C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E86C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E8E4 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004EB64 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18004F1F4 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2)
{
  struct CVisual *v2; // rsi
  int v3; // eax
  struct CVisual *v4; // rdi
  int v5; // eax
  CContactManager *v6; // rcx
  CBaseObject *v7; // rbx
  int v8; // eax
  struct CVisual *v9; // rdx
  CContactManager *v10; // rcx
  struct CVisual *v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp+40h] BYREF
  struct tagPOINT v14; // [rsp+A0h] [rbp+48h] BYREF
  CBaseObject *v15; // [rsp+A8h] [rbp+50h] BYREF

  v13 = a2;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v13);
  v14 = 0LL;
  v15 = 0LL;
  v2 = 0LL;
  v12.left = 0;
  v12.top = 0;
  v11 = 0LL;
  v12.right = 50;
  v12.bottom = 50;
  v3 = CVisual::Create((struct CVisual **)&v14);
  v4 = (struct CVisual *)v14;
  if ( v3 >= 0 )
  {
    v5 = CVisual::Create(&v15);
    v7 = v15;
    if ( v5 >= 0 && CContactManager::AddToTouchNode(v6, v13, v4) >= 0 )
    {
      VisualCollection::InsertRelative((struct CVisual *)((char *)v4 + 32), v7, 0LL, 0, 1);
      v14.x = -32000;
      v14.y = -32000;
      CVisual::SetOffset((struct tagPOINT *)v7, &v14);
      if ( (int)CreateTouchVisual<CDirectTouchVisual>(v13) >= 0 )
      {
        VisualCollection::InsertRelative((CBaseObject *)((char *)v7 + 32), 0LL, 0LL, 0, 1);
        CDirectTouchVisual::StartHold(0LL, &v14, &v12);
        v8 = CTransitionWindowSnapshot::Create(&v12, v7, &v11);
        v2 = v11;
        if ( v8 >= 0 )
        {
          v9 = v11;
          *(__m128i *)((char *)v11 + 344) = _mm_load_si128((const __m128i *)&_xmm);
          VisualCollection::InsertRelative((struct CVisual *)((char *)v4 + 32), v9, 0LL, 0, 1);
          (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v4 + 64LL))(v4);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL));
        }
        VisualCollection::Remove((CBaseObject *)((char *)v7 + 32), 0LL);
      }
      VisualCollection::Remove((struct CVisual *)((char *)v4 + 32), v7);
      CContactManager::RemoveFromTouchNode(v10, v13, v4);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v4 )
    CBaseObject::Release(v4);
}
