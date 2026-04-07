/*
 * XREFs of ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18009B698
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18009B538 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848 (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x18001EDA4 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRectInternal(CAcrylicSheet *this, const struct tagRECT *a2)
{
  int v3; // ecx
  int v4; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  char v10; // al
  LONG v11; // eax
  CWindowBorder *v12; // rcx
  LONG v13; // eax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rax
  struct tagPOINT v18[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_DWORD *)this + 78);
  v4 = 0;
  if ( a2->right - a2->left >= 0 )
    v4 = a2->right - a2->left;
  v5 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v5 = a2->bottom - a2->top;
  v6 = v3 - *((_DWORD *)this + 76);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = v6;
  if ( v4 != v7 )
    goto LABEL_11;
  v8 = 0;
  if ( *((_DWORD *)this + 79) - *((_DWORD *)this + 77) >= 0 )
    v8 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
  v9 = v5 == v8;
  v10 = 0;
  if ( !v9 )
LABEL_11:
    v10 = 1;
  *((struct tagRECT *)this + 19) = *a2;
  if ( !v10 )
    goto LABEL_19;
  v11 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
  v12 = (CWindowBorder *)*((_QWORD *)this + 40);
  if ( v11 < 0 )
    v11 = 0;
  v18[0] = 0LL;
  v18[1].x = v11;
  v13 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
  if ( v13 < 0 )
    v13 = 0;
  v18[1].y = v13;
  CWindowBorder::SetBorderRect(v12, (const struct tagRECT *)v18);
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 657LL) )
  {
    *(_OWORD *)(*((_QWORD *)this + 41) + 352LL) = *((_OWORD *)this + 19);
    CVisual::SetDirtyFlags(this, 4096);
LABEL_19:
    v18[0] = (struct tagPOINT)*((_QWORD *)this + 38);
    CVisual::SetOffset((struct tagPOINT *)this, v18);
    return 0LL;
  }
  v15 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 42));
  if ( v15 >= 0 )
  {
    v17 = *((_QWORD *)this + 43);
    v18[0].x = 0;
    v18[0].y = 0;
    *(float *)&v18[1].y = (float)v5;
    *(float *)&v18[1].x = (float)v4;
    *(_OWORD *)(v17 + 32) = *(_OWORD *)&v18[0].x;
    v15 = CRenderDataVisual::AddInstruction(
            *((CRenderDataVisual **)this + 42),
            *((struct CRenderDataInstruction **)this + 43));
    if ( v15 >= 0 )
      goto LABEL_19;
    v16 = 301LL;
  }
  else
  {
    v16 = 290LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
