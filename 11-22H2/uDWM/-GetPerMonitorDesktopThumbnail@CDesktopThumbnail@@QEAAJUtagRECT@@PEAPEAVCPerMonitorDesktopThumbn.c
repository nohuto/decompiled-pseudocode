/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B6898
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B65B8 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EAAC0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180109CF0 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B64E8 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetPerMonitorDesktopThumbnail(
        CDesktopThumbnail *this,
        struct tagRECT *a2,
        struct CPerMonitorDesktopThumbnail **a3)
{
  HMONITOR v5; // rax
  unsigned int v6; // ebx
  HMONITOR v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  CBaseObject *v12; // rax
  char *v13; // r10
  __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // eax
  int v17; // edi
  struct CPerMonitorDesktopThumbnail *v18; // rax
  CBaseObject *v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v20[0] = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(a2, 0);
  v6 = 0;
  v7 = v5;
  if ( !v5 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10Bu);
    goto LABEL_16;
  }
  v8 = *((_DWORD *)this + 78);
  v9 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v9);
      if ( *(HMONITOR *)(v10 + 56) == v5 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a3 = (struct CPerMonitorDesktopThumbnail *)v10;
  }
LABEL_8:
  if ( !*a3 )
  {
    v11 = CPerMonitorDesktopThumbnail::Create(v20);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x11Bu);
      goto LABEL_16;
    }
    v12 = v20[0];
    *((_QWORD *)v20[0] + 2) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *((_QWORD *)v12 + 8) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    v13 = (char *)this + 288;
    *((_QWORD *)v20[0] + 7) = v7;
    v14 = *((unsigned int *)this + 78);
    v15 = v14 + 1;
    if ( (int)v14 + 1 < (unsigned int)v14 )
    {
      v6 = -2147024362;
      v16 = 181;
      v17 = -2147024362;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v16);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x11Eu);
      goto LABEL_16;
    }
    v17 = 0;
    if ( v15 > *((_DWORD *)v13 + 5) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v13, 8, 1, v20);
      v6 = v17;
      if ( v17 < 0 )
      {
        v16 = 192;
        goto LABEL_21;
      }
    }
    else
    {
      *(CBaseObject **)(*(_QWORD *)v13 + 8 * v14) = v20[0];
      *((_DWORD *)v13 + 6) = v15;
    }
    v18 = v20[0];
    v6 = v17;
    v20[0] = 0LL;
    *a3 = v18;
  }
LABEL_16:
  if ( v20[0] )
    CBaseObject::Release(v20[0]);
  return v6;
}
