/*
 * XREFs of ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA510 (-GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800DC298 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 */

char __fastcall CInplaceResize::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // esi
  int v8; // edx
  int v9; // ebx
  int v10; // r15d
  int PVLTarget; // eax
  int v12; // r15d
  int v13; // eax
  struct tagPOINT **v14; // rdi
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  LONG top; // edx
  int v22; // ecx
  struct tagPOINT *v23; // rax
  LONG x; // edx
  struct tagRECT v26; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v28; // [rsp+70h] [rbp-10h] BYREF
  CBaseObject *v29; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v29 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_26;
  v8 = *(_DWORD *)(a2 + 680);
  v9 = v8 & 0xFFF;
  v10 = v8;
  PVLTarget = CInplaceResize::GetPVLTarget((__int64)a1, v8);
  v12 = v10 & 0x20000000;
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          v12 != 0,
          PVLTarget,
          0LL,
          0LL,
          0xFFFFFFFF,
          1,
          &v29);
  v14 = (struct tagPOINT **)v29;
  v4 = v13;
  if ( v13 >= 0 )
  {
    v28 = *(struct tagRECT *)((char *)v29 + 88);
    v26 = v28;
    if ( v12 )
    {
      CStoryboard::ResizeToSnapshot(*(HWND *)(a2 + 40), &v28, &v27);
      v26 = v27;
      v15 = v9 - 48;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
            {
              v18 = 0;
              v26.right = v28.right;
              if ( v27.right - v27.left >= 0 )
                v18 = v27.right - v27.left;
              v26.left = v28.right - v18;
            }
          }
          else
          {
            v19 = 0;
            v26.left = v28.left;
            if ( v27.right - v27.left >= 0 )
              v19 = v27.right - v27.left;
            v26.right = v28.left + v19;
          }
          goto LABEL_22;
        }
        v20 = 0;
        v26.bottom = v28.bottom;
        if ( v27.bottom - v27.top >= 0 )
          v20 = v27.bottom - v27.top;
        top = v28.bottom - v20;
      }
      else
      {
        v22 = 0;
        top = v28.top;
        if ( v27.bottom - v27.top >= 0 )
          v22 = v27.bottom - v27.top;
        v26.bottom = v28.top + v22;
      }
      v26.top = top;
    }
LABEL_22:
    CAnimatedTransitionVisual::SetBeginRect(v14[5], &v26);
    v23 = v14[5];
    *(struct tagRECT *)&v23[109].x = v26;
    x = v23[12].x;
    if ( (x & 0x1000) == 0 )
    {
      v23[12].x = x | 0x1000;
      CVisual::PropagateDirtyChildren((CVisual *)&v23[1]);
    }
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x6C0u);
LABEL_24:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
LABEL_26:
  *a4 = v4;
  return 1;
}
