/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180034138
 * Callers:
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800118E0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800181B0 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800366A8 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ??1?$ComPtr@VUdwmTopVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800970B4 (--1-$ComPtr@VUdwmTopVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  struct CVisualProxy *v5; // rcx
  int v6; // eax
  struct CVisual *v7; // rdx
  int inserted; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  struct _MARGINS v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CClientArea *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 62) )
  {
    v4 = *((_QWORD *)this + 94);
    v5 = *(struct CVisualProxy **)(v4 + 144);
    if ( v5 )
    {
      v12 = 0LL;
      v6 = CClientArea::Create(v5, &v12);
      v2 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<UdwmTopVisual>::~ComPtr<UdwmTopVisual>(&v12);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x856u);
      }
      else
      {
        *((_QWORD *)v12 + 31) = v4;
        v7 = v12;
        *((_QWORD *)this + 62) = v12;
        inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 69) + 32LL), v7, 0LL, 1, 1);
        v2 = inserted;
        if ( inserted < 0 )
        {
          v9 = 2137;
          goto LABEL_11;
        }
        v10 = 0LL;
        CVisual::SetInsetFromParent(*((CVisual **)this + 62), &v10);
        if ( (*((_BYTE *)this + 248) & 4) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v2 = inserted;
          if ( inserted < 0 )
          {
            v9 = 2144;
LABEL_11:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v9);
          }
        }
      }
    }
  }
  return v2;
}
