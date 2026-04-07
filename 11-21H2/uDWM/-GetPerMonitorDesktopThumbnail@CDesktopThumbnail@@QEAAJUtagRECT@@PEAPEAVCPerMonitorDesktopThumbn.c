/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B2904
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B2624 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB88C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180102EE0 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B2298 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetPerMonitorDesktopThumbnail(
        CDesktopThumbnail *this,
        struct tagRECT *a2,
        struct CPerMonitorDesktopThumbnail **a3)
{
  HMONITOR v5; // rax
  int v6; // ebx
  HMONITOR v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  CBaseObject *v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  struct CPerMonitorDesktopThumbnail *v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CBaseObject *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(a2, 0);
  v6 = 0;
  v7 = v5;
  if ( !v5 )
  {
    v6 = -2147024809;
    v17 = 267;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v17);
    goto LABEL_17;
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
        goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a3 = (struct CPerMonitorDesktopThumbnail *)v10;
  }
LABEL_9:
  if ( !*a3 )
  {
    v11 = CPerMonitorDesktopThumbnail::Create(v18);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x11Bu);
      goto LABEL_17;
    }
    v12 = v18[0];
    *((_QWORD *)v18[0] + 2) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *((_QWORD *)v12 + 8) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *((_QWORD *)v18[0] + 7) = v7;
    LODWORD(v12) = *((_DWORD *)this + 78);
    v13 = (_DWORD)v12 + 1;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      v6 = -2147024362;
      v14 = 181;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v14);
      v17 = 286;
      goto LABEL_3;
    }
    if ( v13 > *((_DWORD *)this + 77) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8u, 1, v18);
      if ( v6 < 0 )
      {
        v14 = 192;
        goto LABEL_22;
      }
    }
    else
    {
      v6 = 0;
      *(CBaseObject **)(*((_QWORD *)this + 36) + 8LL * *((unsigned int *)this + 78)) = v18[0];
      *((_DWORD *)this + 78) = v13;
    }
    v15 = v18[0];
    v18[0] = 0LL;
    *a3 = v15;
  }
LABEL_17:
  if ( v18[0] )
    CBaseObject::Release(v18[0]);
  return (unsigned int)v6;
}
