/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x1800460AC
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18003EAC4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180055510 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800462F4 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180046414 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800464A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004668C (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2, __int64 a3)
{
  struct CVisual *v3; // rsi
  int v4; // eax
  struct CVisual *v5; // rdi
  int v6; // eax
  CContactManager *v7; // rcx
  struct tagPOINT *v8; // rbx
  int v9; // eax
  struct CVisual *v10; // rdx
  CContactManager *v11; // rcx
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+20h] [rbp-38h]
  struct CVisual *v15; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+40h] BYREF
  struct tagPOINT v18; // [rsp+A0h] [rbp+48h] BYREF
  CBaseObject *v19; // [rsp+A8h] [rbp+50h] BYREF

  v17 = a2;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v17, a3);
  v18 = 0LL;
  v19 = 0LL;
  v3 = 0LL;
  v16.left = 0;
  v16.top = 0;
  v15 = 0LL;
  v16.right = 50;
  v16.bottom = 50;
  v4 = CVisual::Create((struct CVisual **)&v18);
  v5 = (struct CVisual *)v18;
  if ( v4 >= 0 )
  {
    v6 = CVisual::Create(&v19);
    v8 = (struct tagPOINT *)v19;
    if ( v6 >= 0 && CContactManager::AddToTouchNode(v7, v17, v5) >= 0 )
    {
      VisualCollection::InsertRelative((struct CVisual *)((char *)v5 + 32), (unsigned __int64)v8, 0LL, 0, v12);
      v18.x = -32000;
      v18.y = -32000;
      CVisual::SetOffset(v8, &v18);
      if ( (int)CreateTouchVisual<CDirectTouchVisual>(v17) >= 0 )
      {
        VisualCollection::InsertRelative((VisualCollection *)&v8[4], 0LL, 0LL, 0, v13);
        CDirectTouchVisual::StartHold(0LL, &v18, &v16);
        v9 = CTransitionWindowSnapshot::Create(&v16, (struct CVisual *)v8, &v15);
        v3 = v15;
        if ( v9 >= 0 )
        {
          v10 = v15;
          *(__m128i *)((char *)v15 + 344) = _mm_load_si128((const __m128i *)&_xmm);
          VisualCollection::InsertRelative((struct CVisual *)((char *)v5 + 32), (unsigned __int64)v10, 0LL, 0, v14);
          (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 64LL))(v5);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 24LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 24LL));
        }
        VisualCollection::Remove((VisualCollection *)&v8[4], 0LL);
      }
      VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), (struct CVisual *)v8);
      CContactManager::RemoveFromTouchNode(v11, v17, v5);
      if ( v3 )
        CBaseObject::Release(v3);
    }
    if ( v8 )
      CBaseObject::Release((CBaseObject *)v8);
  }
  if ( v5 )
    CBaseObject::Release(v5);
}
