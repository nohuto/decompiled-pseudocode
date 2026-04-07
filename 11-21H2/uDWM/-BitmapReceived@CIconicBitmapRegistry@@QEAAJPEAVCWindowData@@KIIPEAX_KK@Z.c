/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180003D04
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180003A2C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180003E64 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180003F50 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180011268 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x1800131E4 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18004B1A4 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v9; // r14
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  bool v14; // bp
  unsigned int v15; // r15d
  int v16; // esi
  unsigned int v17; // r12d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r10d
  bool v21; // r10
  int v22; // eax
  CBaseObject *v23; // rsi
  char v24; // al
  CBaseObject *v25; // r8
  HWND ShellWindowForDesktop; // rax
  __int64 v28; // rcx
  int v29; // ebx
  int v30; // ebp
  int nNumerator[2]; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v32; // [rsp+38h] [rbp-40h] BYREF
  DWORD v33; // [rsp+88h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+98h] [rbp+20h] BYREF

  v9 = a4;
  v11 = 0;
  v32 = 0LL;
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &v33) && a3 == v33 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                              *((_QWORD *)a2 + 17));
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &dwProcessId);
      v14 = dwProcessId == a3;
    }
  }
  v15 = v9;
  v16 = nNumber;
  v17 = nNumber;
  if ( (*((_BYTE *)a2 + 666) & 2) != 0
    && (v13 = nNumber * v9, v13 <= 0xFFFFFFFF)
    && (v18 = 4LL * (unsigned int)v13, v18 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v18
    && v14 )
  {
    if ( CIconicBitmapRegistry::CanAcceptBitmap(this, a2) )
    {
      if ( IsWindowTab(a2) )
      {
LABEL_11:
        v22 = CBitmapSource::Create(v9, v16, v15, v17, a6, &v32);
        v23 = v32;
        v11 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, v22, 0x2A6u, 0LL);
        }
        else
        {
          v24 = a8;
          v25 = v32;
          *((_BYTE *)a2 + 666) &= ~4u;
          *((_BYTE *)a2 + 666) |= 4 * (v24 & 1);
          CIconicBitmapRegistry::AcceptBitmap(this, a2, v25);
        }
        if ( v23 )
          CBaseObject::Release(v23);
        return v11;
      }
      if ( (unsigned int)DwmGetIdealIconicThumbnailSize(v21, (struct tagSIZE *)nNumerator) )
      {
        v29 = nNumerator[0];
        v30 = nNumerator[1];
        if ( (int)v9 <= nNumerator[0] || (int)v9 * nNumerator[1] > v16 * nNumerator[0] )
        {
          if ( v16 > nNumerator[1] && (int)v9 * nNumerator[1] > v16 * nNumerator[0] )
          {
            v15 = MulDiv(v9, nNumerator[1], v16);
            v17 = v30;
          }
        }
        else
        {
          v17 = MulDiv(v16, nNumerator[0], v9);
          v15 = v29;
        }
        goto LABEL_11;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v28, &UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
      v11 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, -2147467259, 0x297u, 0LL);
    }
    else if ( ((unsigned __int8)v20 & (unsigned __int8)Microsoft_Windows_Dwm_UdwmEnableBits) != 0 )
    {
      McTemplateU0qp_EtwEventWriteTransfer(v19, &UdwmManageIconicThumbnail_Info, v20, *((_QWORD *)a2 + 5));
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v13, &UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, -2147024809, 0x285u, 0LL);
  }
  return v11;
}
