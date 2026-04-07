/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18004E0AC
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004CAF0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18004E278 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18004E5A0 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(
        CWindowList *this,
        struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *a2)
{
  CBaseObject *v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int inserted; // eax
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rax
  CBaseObject *v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  CBaseObject *v20; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v23; // [rsp+90h] [rbp+40h] BYREF
  CBaseObject *v24; // [rsp+98h] [rbp+48h] BYREF

  v24 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v5 = CVisual::Create(&v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6ABu);
LABEL_13:
    v7 = (volatile signed __int32 *)v24;
    goto LABEL_14;
  }
  v7 = (volatile signed __int32 *)v24;
  (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v24 + 104LL))(v24);
  v8 = CRenderDataVisual::Create(&v23);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6B1u);
    v3 = v23;
    goto LABEL_14;
  }
  v3 = v23;
  if ( *((_QWORD *)this + 12) )
  {
    GetDesktopID(1LL, &v22);
    if ( *(_QWORD *)a2 == v22 )
    {
      v17 = *((_QWORD *)this + 12);
      v18 = v17 ? *(unsigned int *)(*(_QWORD *)(v17 + 16) + 24LL) : 0LL;
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v3 + 2)
                                                                                                 + 16LL)
                                                                                     + 16LL)
                                                                       + 344LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 16LL),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 24LL),
              v18,
              (char *)this + 104);
      v6 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x6BBu);
        goto LABEL_14;
      }
    }
  }
  v9 = CDesktopWindowReplacement::Create(&v21);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x6C1u);
  }
  else
  {
    v10 = CMagnifierControl::Create((struct CVisual *)v7, v3, &v20);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x6C6u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(v7 + 8),
                   *((struct CVisual **)v20 + 4),
                   0LL,
                   0,
                   1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x6CBu);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 64LL))(v7);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x6CEu);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 5)
                                                                + 16LL)
                                                  + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 5)
                                                                     + 16LL));
          v6 = v13;
          if ( v13 >= 0 )
          {
            *((_QWORD *)a2 + 1) = v7;
            _InterlockedIncrement(v7 + 2);
            v14 = v20;
            *((_QWORD *)a2 + 2) = v20;
            _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
            v3 = v23;
            *((_QWORD *)a2 + 3) = v23;
            if ( v3 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
              v3 = v23;
            }
            v15 = v21;
            *((_QWORD *)a2 + 4) = v21;
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
              v3 = v23;
            }
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x6D0u);
        }
      }
    }
  }
LABEL_14:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v21 )
    CBaseObject::Release(v21);
  return v6;
}
