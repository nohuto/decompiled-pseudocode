/*
 * XREFs of ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800C3524
 * Callers:
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010C7F8 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180034310 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800AC9B8 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800AD25C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801072B4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180108154 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1801081A0 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::LivePreviewBitmapReceived(
        unsigned __int64 this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINT *a6,
        void *a7,
        unsigned __int64 a8,
        char a9)
{
  bool v10; // zf
  CIconicBitmapRegistry *v13; // rsi
  CBaseObject *v14; // r14
  unsigned __int64 v15; // rax
  struct CWindowData *MDIOwner; // rbx
  int WindowRestoreRect; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // r9d
  _DWORD *v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  const struct tagPOINT *v29; // rax
  char v30; // bl
  bool v31; // r8
  __int64 v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-58h]
  CBaseObject *v35; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v36; // [rsp+38h] [rbp-40h] BYREF
  DWORD v37; // [rsp+88h] [rbp+10h] BYREF

  v10 = (*((_BYTE *)a2 + 674) & 2) == 0;
  v35 = 0LL;
  v13 = (CIconicBitmapRegistry *)this;
  v14 = 0LL;
  if ( v10
    || (this = a5 * (unsigned __int64)a4, this > 0xFFFFFFFF)
    || (v15 = 4LL * (unsigned int)this, v15 > 0xFFFFFFFF)
    || a8 < (unsigned int)v15
    || !GetWindowThreadProcessId(*((HWND *)a2 + 5), &v37)
    || a3 != v37 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v34 = 725;
    goto LABEL_47;
  }
  MDIOwner = CWindowData::GetMDIOwner(a2);
  if ( !MDIOwner )
    MDIOwner = a2;
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, &v36, 0);
  v19 = WindowRestoreRect;
  if ( WindowRestoreRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801290A8, 1LL, WindowRestoreRect, 0x2E0u);
    return v19;
  }
  v20 = v36.right - v36.left;
  v21 = *((_QWORD *)MDIOwner + 60);
  if ( v36.right - v36.left < 0 )
    v20 = 0;
  v22 = v36.bottom - v36.top;
  if ( v36.bottom - v36.top < 0 )
    v22 = 0;
  if ( v21 )
  {
    v23 = *(_DWORD **)(v21 + 32);
    v24 = 0;
    if ( v23[14] - v23[12] >= 0 )
      v24 = v23[14] - v23[12];
    if ( v20 <= v24 )
      v20 = v24;
    v25 = v23[15] - v23[13];
    v18 = 0LL;
    if ( v25 >= 0 )
      v18 = (unsigned int)v25;
    if ( v22 <= (unsigned int)v18 )
      v22 = v18;
  }
  if ( a4 > v20 || a5 > v22 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v18, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v34 = 747;
LABEL_47:
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801290A8, 1LL, -2147024809, v34);
    return v19;
  }
  v26 = *((_QWORD *)v13 + 12);
  if ( v26 && *(struct CWindowData **)(v26 + 72) == a2 )
  {
    v27 = CBitmapSource::Create(a4, a5, a4, a5, a7, &v35);
    v19 = v27;
    if ( v27 >= 0 )
    {
      if ( *((_BYTE *)v13 + 89) )
      {
        v28 = CIconicBitmapRegistry::RequestBitmap(v13, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
        v19 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801290A8, 1LL, v28, 0x2FCu);
      }
      v29 = a6;
      v30 = *((_BYTE *)v13 + 88);
      v14 = v35;
      v31 = a9 & 1;
      *(_WORD *)((char *)v13 + 89) = 0;
      *((_BYTE *)v13 + 88) = 1;
      *((struct tagPOINT *)v13 + 13) = *v29;
      CWindowIconic::SetBitmap(*((CWindowIconic **)v13 + 12), v14, v31, 1);
      if ( !v30 )
        CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v13 + 12));
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v32, (__int64)&UdwmManageIconicThumbnail_Info, 0LL, *((_QWORD *)a2 + 5));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801290A8, 1LL, v27, 0x2F7u);
      v14 = v35;
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return v19;
    McTemplateU0qp_EtwEventWriteTransfer(v18, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
  }
  if ( v14 )
    CBaseObject::Release(v14);
  return v19;
}
