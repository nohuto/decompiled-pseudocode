/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180023DD4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180051620 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180011F9C (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18001F0A0 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180042020 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  struct CVisualProxy *v5; // rcx
  int v6; // eax
  struct CClientArea *v7; // rdx
  int inserted; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct _MARGINS v11; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CClientArea *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 65) )
  {
    v4 = *((_QWORD *)this + 94);
    v5 = *(struct CVisualProxy **)(v4 + 144);
    if ( v5 )
    {
      v13 = 0LL;
      v6 = CClientArea::Create(v5, &v13);
      v2 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v6,
          v9);
        Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v13);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x896u, 0LL);
      }
      else
      {
        *((_QWORD *)v13 + 31) = v4;
        v7 = v13;
        *((_QWORD *)this + 65) = v13;
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 73) + 32LL),
                     (unsigned __int64)v7,
                     0LL,
                     1u,
                     v9);
        v2 = inserted;
        if ( inserted < 0 )
        {
          v10 = 2201;
          goto LABEL_11;
        }
        v11 = 0LL;
        CVisual::SetInsetFromParent(*((CVisual **)this + 65), &v11);
        if ( (*((_BYTE *)this + 248) & 4) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v2 = inserted;
          if ( inserted < 0 )
          {
            v10 = 2208;
LABEL_11:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10, 0LL);
          }
        }
      }
    }
  }
  return v2;
}
