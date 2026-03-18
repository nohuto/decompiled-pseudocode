/*
 * XREFs of DrawEdge @ 0x1C002995C
 * Callers:
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C0014EA0 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     DrawPushButton @ 0x1C00286BC (DrawPushButton.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00C6FE0 (xxxDrawWindowFrame.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01C9CAC (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C023534C (xxxMNDrawFullNC.c)
 *     xxxMenuDraw @ 0x1C02361F4 (xxxMenuDraw.c)
 * Callees:
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011CB30 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C024C0BC (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C024C3E8 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, int a3, int a4)
{
  HDC v4; // r10
  RECT v5; // xmm0
  int v6; // edi
  LONG bottom; // r13d
  unsigned int v8; // esi
  LONG right; // r12d
  LONG top; // r14d
  int v11; // ecx
  LONG left; // r15d
  bool v13; // zf
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  HBRUSH v17; // rdx
  HBRUSH v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  DC *v29; // rcx
  struct _DC_ATTR *UserAttr; // rax
  DC *v31; // rcx
  struct _DC_ATTR *v32; // rax
  __int64 v33; // rdi
  HBRUSH v35; // r8
  int v36; // eax
  HBRUSH v37; // r8
  RECT v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch]
  DC *v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h]
  unsigned int v43; // [rsp+74h] [rbp-8Ch]
  _BYTE v44[32]; // [rsp+78h] [rbp-88h] BYREF
  HDC v45; // [rsp+98h] [rbp-68h]
  RECT *v46; // [rsp+A0h] [rbp-60h]
  LONG v47; // [rsp+B0h] [rbp-50h] BYREF
  LONG v48; // [rsp+B4h] [rbp-4Ch]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  _QWORD v51[10]; // [rsp+C0h] [rbp-40h]

  v4 = a1;
  v5 = *a2;
  v45 = a1;
  v6 = a3;
  v40 = a3;
  v38 = v5;
  bottom = v5.bottom;
  v8 = 1;
  right = v5.right;
  top = v5.top;
  v11 = a4 | 0x8000;
  left = v5.left;
  v13 = *(_WORD *)(gpsi + 6996LL) == 1;
  v46 = a2;
  if ( !v13 )
    v11 = a4;
  v14 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v14 = v11;
  v15 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_63;
  while ( 1 )
  {
    if ( (v14 & 0x4000) != 0 )
    {
      v16 = v15 & 3;
      if ( (v14 & 0x8000) != 0 )
      {
        if ( v16 )
          v17 = *(HBRUSH *)(gpsi + 4744LL);
        else
          v17 = *(HBRUSH *)(gpsi + 4736LL);
      }
      else if ( v16 )
      {
        v17 = *(HBRUSH *)(gpsi + 4824LL);
      }
      else
      {
        v17 = *(HBRUSH *)(gpsi + 4816LL);
      }
      v18 = v17;
    }
    else
    {
      v19 = v15 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 2;
          if ( v21 )
          {
            if ( v21 != 4 )
              return 0LL;
            if ( (v14 & 0x1000) != 0 )
              v18 = *(HBRUSH *)(gpsi + 4824LL);
            else
              v18 = *(HBRUSH *)(gpsi + 4864LL);
            v17 = *(HBRUSH *)(gpsi + 4872LL);
          }
          else
          {
            if ( (v14 & 0x1000) != 0 )
              v18 = *(HBRUSH *)(gpsi + 4872LL);
            else
              v18 = *(HBRUSH *)(gpsi + 4856LL);
            v17 = *(HBRUSH *)(gpsi + 4824LL);
          }
        }
        else
        {
          if ( (v14 & 0x1000) != 0 )
            v18 = *(HBRUSH *)(gpsi + 4864LL);
          else
            v18 = *(HBRUSH *)(gpsi + 4824LL);
          v17 = *(HBRUSH *)(gpsi + 4856LL);
        }
      }
      else
      {
        if ( (v14 & 0x1000) != 0 )
          v18 = *(HBRUSH *)(gpsi + 4856LL);
        else
          v18 = *(HBRUSH *)(gpsi + 4872LL);
        v17 = *(HBRUSH *)(gpsi + 4864LL);
      }
    }
    if ( (v14 & 0x10) == 0 )
    {
      v23 = 0;
      if ( (v14 & 4) != 0 )
      {
        --right;
        v48 = top;
        v38.right = right;
        v47 = right;
        v50 = bottom - top;
        v23 = 1;
        v49 = 1;
        v51[0] = v17;
      }
      if ( (v14 & 8) != 0 )
      {
        v38.bottom = --bottom;
        v24 = 3LL * v23;
        *(&v47 + 2 * v24) = left;
        *(&v49 + 2 * v24) = right - left;
        ++v23;
        *(&v48 + 2 * v24) = bottom;
        *(&v50 + 2 * v24) = 1;
        v51[v24] = v17;
      }
      if ( (v14 & 1) != 0 )
      {
        v25 = v23++;
        v26 = 3 * v25;
        *(&v47 + 2 * v26) = left++;
        *(&v48 + 2 * v26) = top;
        v38.left = left;
        *(&v49 + 2 * v26) = 1;
        *(&v50 + 2 * v26) = bottom - top;
        v51[v26] = v18;
      }
      if ( (v14 & 2) != 0 )
      {
        v27 = v23++;
        v28 = 3 * v27;
        *(&v48 + 2 * v28) = top++;
        *(&v47 + 2 * v28) = left;
        v38.top = top;
        *(&v49 + 2 * v28) = right - left;
        *(&v50 + 2 * v28) = 1;
        v51[v28] = v18;
      }
      v41 = 0LL;
      v42 = 0;
      v43 = 0;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v44);
      XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v41, v45);
      v29 = v41;
      if ( v41 )
      {
        if ( (*((_DWORD *)v41 + 11) & 2) == 0 )
        {
          if ( !v43 )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v41);
            if ( UserAttr && !DC::SaveAttributes(v41, UserAttr) )
            {
              _InterlockedDecrement((volatile signed __int32 *)v41 + 3);
              v41 = 0LL;
              bottom = v38.bottom;
              v8 = 0;
              right = v38.right;
              top = v38.top;
              left = v38.left;
              goto LABEL_51;
            }
            v29 = v41;
          }
          *((_DWORD *)v29 + 11) |= 2u;
          v29 = v41;
          v42 = 1;
        }
        if ( (*((_DWORD *)v29 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v29);
          v29 = v41;
        }
      }
      v8 = 0;
      if ( v29 )
      {
        v8 = GrePolyPatBltInternal(
               (struct XDCOBJ *)&v41,
               0xF00021u,
               (struct _POLYPATBLT *)&v47,
               v23,
               0,
               *(_DWORD *)(*((_QWORD *)v29 + 122) + 184LL),
               *(_DWORD *)(*((_QWORD *)v29 + 122) + 176LL),
               *(_DWORD *)(*((_QWORD *)v29 + 122) + 188LL),
               *(_DWORD *)(*((_QWORD *)v29 + 122) + 180LL));
        goto LABEL_52;
      }
LABEL_51:
      EngSetLastError(6u);
LABEL_52:
      v31 = v41;
      if ( v41 )
      {
        if ( v42 && (*((_DWORD *)v41 + 11) & 2) != 0 )
        {
          if ( !v43 )
          {
            v32 = XDCOBJ::GetUserAttr((XDCOBJ *)&v41);
            v31 = v41;
            if ( v32 )
            {
              DC::RestoreAttributes(v41, v32);
              v31 = v41;
            }
          }
          *((_DWORD *)v31 + 11) &= ~2u;
          v31 = v41;
          v42 = 0;
        }
        v39 = 0;
        v33 = *(_QWORD *)v31;
        HmgDecrementExclusiveReferenceCountEx(v31, v43, &v39);
        if ( v39 )
          GrepDeleteDC(v33, 0x2000000LL);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
      v6 = v40;
      goto LABEL_62;
    }
    v22 = DrawDiagonal(v4, &v38, v18, v17, v14);
    bottom = v38.bottom;
    v8 = v22;
    right = v38.right;
    top = v38.top;
    left = v38.left;
LABEL_62:
    v4 = v45;
LABEL_63:
    v15 = v6 & 0xC;
    if ( (v6 & 0xC) == 0 )
      break;
    v6 &= 0xFFFFFFF3;
    v40 = v6;
  }
  if ( (v14 & 0x800) != 0 )
  {
    if ( (v14 & 0x10) != 0 )
    {
      if ( (v14 & 0x8000) != 0 )
        v35 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v35 = *(HBRUSH *)(gpsi + 4816LL);
      v36 = FillTriangle(v4, &v38, v35, v14);
    }
    else
    {
      if ( (v14 & 0x8000) != 0 )
        v37 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v37 = *(HBRUSH *)(gpsi + 4816LL);
      v36 = FillRect(v4, &v38, v37);
    }
    v8 = v36;
  }
  if ( (v14 & 0x2000) != 0 )
    *v46 = v38;
  return v8;
}
