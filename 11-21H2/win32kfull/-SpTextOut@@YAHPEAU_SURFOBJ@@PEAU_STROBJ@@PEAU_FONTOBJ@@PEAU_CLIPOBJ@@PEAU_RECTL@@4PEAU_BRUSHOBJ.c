/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0032200
 * Callers:
 *     <none>
 * Callees:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  _BOOL8 v10; // r13
  struct _STROBJ *v11; // rbx
  unsigned int v14; // r12d
  FLONG flFontType; // ecx
  ULONG cGlyphs; // edi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v18; // r14
  PVOID *p_pvScan0; // rsi
  USHORT *p_iType; // rbx
  PVOID *v21; // rdi
  int hsurf; // eax
  CLIPOBJ *v23; // r13
  struct _RECTL *v24; // rax
  struct _POINTL v25; // rbx
  LONG y; // esi
  int v27; // ecx
  struct _STROBJ *v28; // rdx
  LONG v29; // esi
  int v30; // r14d
  LONG v31; // ebx
  int v32; // eax
  HDEV hdev; // rax
  bool v35; // zf
  __int64 ThreadWin32Thread; // rax
  PVOID v37; // rcx
  int x; // r10d
  int pwszOrg; // ecx
  __int64 v40; // rax
  int v41; // r11d
  ULONG v42; // r8d
  _DWORD *v43; // r9
  _DWORD *v44; // rcx
  ULONG v45; // ecx
  _DWORD *v46; // rax
  struct _STROBJ *v47; // rdx
  int v48; // r10d
  int v49; // ecx
  __int64 v50; // rax
  int v51; // r11d
  ULONG v52; // r8d
  _DWORD *v53; // r9
  _DWORD *v54; // rcx
  ULONG v55; // ecx
  _DWORD *v56; // rax
  BOOL (__stdcall *v57)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v58; // [rsp+68h] [rbp-98h]
  struct _SURFOBJ *v59; // [rsp+70h] [rbp-90h] BYREF
  struct _STROBJ *v60; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v62; // [rsp+88h] [rbp-78h] BYREF
  __int64 v63; // [rsp+90h] [rbp-70h]
  ULONG v64; // [rsp+98h] [rbp-68h]
  struct _POINTL v65; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v66; // [rsp+A8h] [rbp-58h]
  struct _BRUSHOBJ *v67; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v68; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v69; // [rsp+C0h] [rbp-40h]
  struct _FONTOBJ *v70; // [rsp+C8h] [rbp-38h]
  __int128 v71; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v72[912]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = 0LL;
  v59 = a1;
  v11 = a2;
  v60 = a2;
  v70 = a3;
  v14 = 1;
  v69 = a5;
  v68 = a7;
  v67 = a8;
  v66 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  v62 = 0LL;
  v63 = 0LL;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
    {
      v35 = ((_DWORD)hdev[524] & 0x4000) == 0;
      v63 = 0LL;
      if ( v35 )
      {
        v10 = 1LL;
        v63 = 1LL;
      }
    }
    else
    {
      v10 = ((_DWORD)hdev[448] & 0x1000000) == 0;
      v63 = v10;
    }
  }
  cGlyphs = v11[1].cGlyphs;
  v64 = cGlyphs;
  if ( a6 )
    p_rclBkGround = a6;
  else
    p_rclBkGround = &v11->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v72, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v72, &v59, &v62, &ppco) )
  {
    do
    {
      v18 = v59;
      p_pvScan0 = &v59[-1].pvScan0;
      v11[1].cGlyphs = cGlyphs;
      if ( (*((_DWORD *)p_pvScan0 + 29) & 1) == 0
        && ((_DWORD)p_pvScan0[14] & 0x800) != 0
        && *((_WORD *)p_pvScan0 + 50) == 3 )
      {
        v57 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
      }
      else
      {
        if ( v10 )
          goto LABEL_52;
        p_iType = &v18->iType;
        if ( v18->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v18) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v18 = v59;
              v57 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
              goto LABEL_10;
            }
            v18 = v59;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v18) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              v18 = v59;
LABEL_52:
              v57 = EngTextOut;
              goto LABEL_10;
            }
            v18 = v59;
          }
        }
        if ( ((__int64)v18[1].hsurf & 8) == 0 )
          goto LABEL_52;
        v57 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v18->hdev + 166);
      }
LABEL_10:
      v21 = 0LL;
      if ( v18 )
      {
        hsurf = (int)v18[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          v21 = p_pvScan0;
          GreLockDisplayDevice(p_pvScan0[6]);
          if ( *((_WORD *)p_pvScan0 + 50) == 1 && !EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          {
            v37 = p_pvScan0[6];
            goto LABEL_97;
          }
        }
      }
      v23 = ppco;
      v24 = a6;
      v25 = v62;
      y = v62.y;
      v58 = a6;
      v71 = 0LL;
      if ( a6 )
      {
        v24 = (struct _RECTL *)&v71;
        v27 = v62.x + a6->left;
        v58 = (struct _RECTL *)&v71;
        LODWORD(v71) = v27;
        DWORD2(v71) = v62.x + a6->right;
        DWORD1(v71) = v62.y + a6->top;
        HIDWORD(v71) = v62.y + a6->bottom;
      }
      if ( v62.x || v62.y )
      {
        v28 = v60;
        x = 16 * v62.x;
        pwszOrg = (int)v60[4].pwszOrg;
        v60->rclBkGround.left += v62.x;
        v28->rclBkGround.right += v25.x;
        v28->rclBkGround.top += y;
        v28->rclBkGround.bottom += y;
        v40 = *(_QWORD *)&v28[1].rclBkGround.top;
        if ( (pwszOrg & 0x100) == 0 )
          x = v25.x;
        v41 = 16 * y;
        if ( (pwszOrg & 0x100) == 0 )
          v41 = y;
        if ( (pwszOrg & 0x1400) != 0 )
        {
          v42 = v28->cGlyphs;
          v43 = *(_DWORD **)&v28[4].rclBkGround.top;
          if ( v28->cGlyphs )
          {
            v44 = (_DWORD *)(v40 + 20);
            do
            {
              if ( *v43 == HIDWORD(v28[4].pwszOrg) )
              {
                *(v44 - 1) += x;
                --v42;
                *v44 += v41;
              }
              v44 += 6;
              ++v43;
            }
            while ( v42 );
            v24 = v58;
            goto LABEL_18;
          }
        }
        else
        {
          if ( v28->ulCharInc )
          {
            *(_DWORD *)(v40 + 16) += x;
            *(_DWORD *)(v40 + 20) += v41;
            v24 = v58;
            goto LABEL_18;
          }
          v45 = v28->cGlyphs;
          if ( v28->cGlyphs )
          {
            v46 = (_DWORD *)(v40 + 20);
            do
            {
              *(v46 - 1) += x;
              *v46 += v41;
              v46 += 6;
              --v45;
            }
            while ( v45 );
          }
        }
        v24 = v58;
      }
      else
      {
        v28 = v60;
      }
LABEL_18:
      v65 = 0LL;
      if ( v23 && (v25.x || y) )
      {
        v23->rclBounds.left += v25.x;
        v23->rclBounds.right += v25.x;
        v23->rclBounds.top += y;
        v23->rclBounds.bottom += y;
        if ( v23->iDComplexity )
        {
          v65 = v25;
          RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, &v65);
          v24 = v58;
          v28 = v60;
        }
      }
      v29 = -y;
      v30 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v57)(
              v18,
              v28,
              v70,
              v23,
              v69,
              v24,
              v68,
              v67,
              v66,
              a10);
      v31 = -v25.x;
      if ( v31 || v29 )
      {
        v47 = v60;
        v48 = 16 * v31;
        v49 = (int)v60[4].pwszOrg;
        v60->rclBkGround.left += v31;
        v47->rclBkGround.right += v31;
        v47->rclBkGround.top += v29;
        v47->rclBkGround.bottom += v29;
        v50 = *(_QWORD *)&v47[1].rclBkGround.top;
        if ( (v49 & 0x100) == 0 )
          v48 = v31;
        v51 = 16 * v29;
        if ( (v49 & 0x100) == 0 )
          v51 = v29;
        if ( (v49 & 0x1400) != 0 )
        {
          v52 = v47->cGlyphs;
          v53 = *(_DWORD **)&v47[4].rclBkGround.top;
          if ( v47->cGlyphs )
          {
            v54 = (_DWORD *)(v50 + 20);
            do
            {
              if ( *v53 == HIDWORD(v47[4].pwszOrg) )
              {
                *(v54 - 1) += v48;
                --v52;
                *v54 += v51;
              }
              v54 += 6;
              ++v53;
            }
            while ( v52 );
          }
        }
        else if ( v47->ulCharInc )
        {
          *(_DWORD *)(v50 + 16) += v48;
          *(_DWORD *)(v50 + 20) += v51;
        }
        else
        {
          v55 = v47->cGlyphs;
          if ( v47->cGlyphs )
          {
            v56 = (_DWORD *)(v50 + 20);
            do
            {
              *(v56 - 1) += v48;
              *v56 += v51;
              v56 += 6;
              --v55;
            }
            while ( v55 );
          }
        }
      }
      v57 = 0LL;
      if ( v23 && (v31 || v29) )
      {
        v23->rclBounds.left += v31;
        v23->rclBounds.right += v31;
        v23->rclBounds.top += v29;
        v23->rclBounds.bottom += v29;
        if ( v23->iDComplexity )
        {
          LODWORD(v57) = v31;
          HIDWORD(v57) = v29;
          RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, (struct _POINTL *)&v57);
        }
      }
      v14 &= v30;
      if ( !v21 )
        goto LABEL_27;
      v37 = v21[6];
LABEL_97:
      GreUnlockDisplayDevice(v37);
LABEL_27:
      v32 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v72, &v59, &v62, &ppco);
      v11 = v60;
      cGlyphs = v64;
      v10 = v63;
    }
    while ( v32 );
  }
  return v14;
}
