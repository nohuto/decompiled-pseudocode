/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18003EDC4
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18003EAC4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18001CE0C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18003EF8C (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18003F074 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  int inserted; // eax
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // rax
  CBaseObject *v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-30h]
  CBaseObject *v22; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v25; // [rsp+90h] [rbp+40h] BYREF
  CBaseObject *v26; // [rsp+98h] [rbp+48h] BYREF

  v26 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v5 = CVisual::Create(&v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x71Au, 0LL);
LABEL_13:
    v7 = (volatile signed __int32 *)v26;
    goto LABEL_14;
  }
  v7 = (volatile signed __int32 *)v26;
  (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v26 + 112LL))(v26);
  v8 = CRenderDataVisual::Create(&v25);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x720u, 0LL);
    v3 = v25;
    goto LABEL_14;
  }
  v3 = v25;
  if ( *((_QWORD *)this + 12) )
  {
    GetDesktopID(1LL, &v24, v9);
    if ( *(_QWORD *)a2 == v24 )
    {
      v18 = *((_QWORD *)this + 12);
      v19 = v18 ? *(unsigned int *)(*(_QWORD *)(v18 + 16) + 24LL) : 0LL;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v3 + 2)
                                                                                                 + 16LL)
                                                                                     + 16LL)
                                                                       + 288LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 16LL),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 24LL),
              v19,
              (char *)this + 104);
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x72Au, 0LL);
        goto LABEL_14;
      }
    }
  }
  v10 = CDesktopWindowReplacement::Create(&v23);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x730u, 0LL);
  }
  else
  {
    v11 = CMagnifierControl::Create((struct CVisual *)v7, v3, &v22);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x735u, 0LL);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(v7 + 8), *((_QWORD *)v22 + 4), 0LL, 0, v21);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x73Au, 0LL);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 64LL))(v7);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x73Du, 0LL);
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 24LL)
                                                  + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 6)
                                                                     + 24LL));
          v6 = v14;
          if ( v14 >= 0 )
          {
            *((_QWORD *)a2 + 1) = v7;
            _InterlockedIncrement(v7 + 2);
            v15 = v22;
            *((_QWORD *)a2 + 2) = v22;
            _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
            v3 = v25;
            *((_QWORD *)a2 + 3) = v25;
            if ( v3 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
              v3 = v25;
            }
            v16 = v23;
            *((_QWORD *)a2 + 4) = v23;
            if ( v16 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
              v3 = v25;
            }
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x73Fu, 0LL);
        }
      }
    }
  }
LABEL_14:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v22 )
    CBaseObject::Release(v22);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v23 )
    CBaseObject::Release(v23);
  return v6;
}
