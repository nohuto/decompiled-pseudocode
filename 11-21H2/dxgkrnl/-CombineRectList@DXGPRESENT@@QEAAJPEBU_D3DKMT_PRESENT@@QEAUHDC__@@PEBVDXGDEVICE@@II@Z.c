/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C01EAE60
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C01EA970 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0001BC0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C01EB3E0 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0330C24 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C0333040 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *v7; // r15
  const struct _D3DKMT_PRESENT *v9; // r13
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v11; // eax
  RECT *p_DstRect; // r9
  RECT *p_SrcRect; // r8
  LONG right; // edx
  LONG v15; // r9d
  LONG v16; // r8d
  LONG bottom; // ecx
  LONG v18; // r10d
  LONG v19; // edx
  unsigned int bottom_low; // eax
  unsigned int i; // edx
  unsigned int top; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned int j; // edi
  unsigned int v27; // eax
  LONG v28; // r10d
  const struct tagRECT *v29; // r15
  LONG v30; // r9d
  LONG v31; // edi
  int v32; // esi
  int v33; // r14d
  int v34; // r9d
  LONG v35; // r11d
  int v36; // r10d
  LONG left; // edx
  LONG v38; // r8d
  char v39; // di
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  LONG v44; // r8d
  LONG v45; // r10d
  LONG v46; // r9d
  LONG v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // r11d
  const struct tagRECT *v50; // r10
  LONG v51; // eax
  LONG *v52; // r9
  LONG v53; // r8d
  LONG v54; // edx
  LONG v55; // ecx
  LONG v56; // eax
  LONG v57; // r8d
  LONG v58; // edi
  LONG v59; // r15d
  LONG v60; // r12d
  __int64 v61; // rax
  unsigned int v62; // esi
  __int64 v63; // rcx
  unsigned int v64; // edx
  __m128i *v65; // rcx
  LONG v66; // r10d
  LONG v67; // r9d
  LONG v68; // r8d
  LONG v69; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v70; // edi
  struct tagRECT *v71; // r11
  LONG v72; // ecx
  LONG v73; // eax
  LONG v74; // ecx
  LONG v75; // eax
  __int64 v76; // rax
  __int64 v78; // r9
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  LONG *v81; // rcx
  __m128i v82; // xmm0
  unsigned int v83; // edi
  const struct DXGDEVICE *v84; // rsi
  __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // r8
  LONG *v88; // r14
  __int64 v89; // r12
  __int64 v90; // r12
  _DWORD *v91; // r8
  _DWORD *v92; // r13
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v94; // [rsp+50h] [rbp-89h]
  LONG v95; // [rsp+54h] [rbp-85h]
  LONG v96; // [rsp+58h] [rbp-81h]
  struct tagRECT v97; // [rsp+60h] [rbp-79h] BYREF
  struct tagRECT v98; // [rsp+70h] [rbp-69h] BYREF
  LONG v99; // [rsp+80h] [rbp-59h]
  LONG v100; // [rsp+84h] [rbp-55h]
  LONG v101; // [rsp+88h] [rbp-51h]
  LONG v102; // [rsp+8Ch] [rbp-4Dh]
  int v103; // [rsp+90h] [rbp-49h]
  unsigned int v104; // [rsp+94h] [rbp-45h]
  __int64 v105; // [rsp+98h] [rbp-41h] BYREF
  unsigned int v106; // [rsp+A0h] [rbp-39h]
  unsigned int v107; // [rsp+A4h] [rbp-35h]
  LONG v108; // [rsp+A8h] [rbp-31h]
  LONG v109; // [rsp+ACh] [rbp-2Dh]
  int v110; // [rsp+B0h] [rbp-29h]
  const struct DXGDEVICE *v111; // [rsp+B8h] [rbp-21h]
  const struct _D3DKMT_PRESENT *v112; // [rsp+C0h] [rbp-19h]
  __int128 v113; // [rsp+C8h] [rbp-11h] BYREF

  v111 = a4;
  v7 = this + 8;
  v112 = a2;
  this[8].top = 0;
  v9 = a2;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  this[8].left = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0 && !DXGPRESENT::IntersectRect(this + 8, &a2->DstRect, this + 8) )
      goto LABEL_81;
    this[9] = *v7;
  }
  else
  {
    this[9].right = a5;
    this[9].bottom = a6;
    *(_QWORD *)&this[9].left = 0LL;
    v11 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&v11 & 0x40) != 0 )
      p_DstRect = &a2->DstRect;
    else
      p_DstRect = 0LL;
    if ( *(_BYTE *)&v11 < 0 )
      p_SrcRect = &a2->SrcRect;
    else
      p_SrcRect = 0LL;
    if ( !(unsigned int)DXGPRESENT::ClipRects(this + 9, this + 8, p_SrcRect, p_DstRect) )
      goto LABEL_81;
  }
  right = this[1].right;
  v15 = right + v7->left;
  v16 = right + this[8].right;
  bottom = this[1].bottom;
  v18 = bottom + this[8].top;
  v19 = bottom + this[8].bottom;
  v7->left = v15;
  this[8].bottom = v19;
  this[8].top = v18;
  this[8].right = v16;
  if ( (v9->Flags.Value & 0x10000) != 0 )
  {
    bottom_low = LOWORD(this[26].bottom);
    if ( bottom_low > 1 )
    {
      v7->left = v15 * bottom_low;
      this[8].right = bottom_low * v16;
      this[8].top = v18 * bottom_low;
      this[8].bottom = bottom_low * v19;
    }
  }
  if ( !this[7].top )
  {
    WdLogSingleEntry1(1LL, 11103LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SubRectCnt", 11103LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    WdLogSingleEntry1(1LL, 11104LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVisRgnData", 11104LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0; ; ++i )
  {
    top = 1;
    if ( this[4].top )
      top = this[4].top;
    if ( i >= top )
      break;
    v23 = i;
    *(&this[22].left + v23) = 0;
  }
  v24 = *(_QWORD *)&this[1].left;
  v25 = *(unsigned int *)(v24 + 8) * (unsigned __int64)(unsigned int)this[7].top;
  if ( v25 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v25 )
    {
      for ( j = 0; ; ++j )
      {
        v27 = 1;
        if ( this[4].top )
          v27 = this[4].top;
        if ( j >= v27 )
          break;
        if ( *(&this[10].left + j) < (unsigned int)v25 )
        {
          operator delete[](*((void **)&this[14].left + j));
          v79 = 16LL * (unsigned int)v25;
          if ( !is_mul_ok((unsigned int)v25, 0x10uLL) )
            v79 = -1LL;
          v80 = operator new[](v79, 0x4B677844u, 256LL, v78);
          *((_QWORD *)&this[14].left + j) = v80;
          v81 = &this->left + j;
          if ( !v80 )
          {
            v81[40] = 0;
            WdLogSingleEntry2(6LL, this, (unsigned int)v25);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"0x%I64x fails to allocate array of 0x%I64d RECTs",
              (__int64)this,
              (unsigned int)v25,
              0LL,
              0LL,
              0LL);
            return 3221225495LL;
          }
          v81[40] = v25;
        }
      }
      v28 = this[9].bottom;
      v29 = this + 8;
      v30 = this[8].bottom;
      v31 = this[8].top;
      v32 = 0;
      v103 = 0;
      v33 = 0;
      v110 = 0;
      v34 = v30 - v31;
      v107 = 0;
      v106 = 0;
      v35 = this[9].top;
      v36 = v28 - v35;
      if ( v34 != v36 )
        goto LABEL_92;
      left = this[9].left;
      v38 = v29->left;
      if ( this[8].right - v29->left == this[9].right - left )
      {
        v32 = v38 - left;
        v33 = v31 - v35;
        v103 = v38 - left;
        v39 = 0;
        v110 = v33;
      }
      else
      {
LABEL_92:
        v39 = 1;
        v107 = ((this[8].right - this[8].left) << 16) / (this[9].right - this[9].left);
        v106 = (v34 << 16) / v36;
      }
      v40 = v9->Flags.Value & 0x10100;
      v94 = v39;
      v97 = 0LL;
      if ( v40 == 65792 )
      {
        v41 = *((_QWORD *)v111 + 5);
        v97 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v111 + 231) + 2792LL) + 128LL)
                                + 4000LL * v9->VidPnSourceId
                                + 628);
        v42 = *(_QWORD *)(v41 + 88);
        v105 = 0LL;
        v43 = (*(__int64 (__fastcall **)(HDC, __int64 *))(v42 + 312))(a3, &v105);
        v44 = v97.left;
        v45 = v97.top;
        v46 = v97.right;
        v47 = v97.bottom;
        if ( v43 )
        {
          v45 = v97.top - HIDWORD(v105);
          v44 = v97.left - v105;
          v46 = v97.right - v105;
          v47 = v97.bottom - HIDWORD(v105);
        }
        v48 = LOWORD(this[26].bottom);
        v99 = v44;
        v101 = v45;
        v100 = v46;
        v102 = v47;
        if ( v48 > 1 )
        {
          v99 = v48 * v44;
          v101 = v48 * v45;
          v100 = v48 * v46;
          v102 = v48 * v47;
        }
      }
      else
      {
        v102 = v97.bottom;
        v100 = v97.right;
        v101 = v97.top;
        v99 = v97.left;
      }
      v49 = 0;
      v104 = 0;
      if ( this[7].top )
      {
        v50 = this + 9;
        do
        {
          v51 = v50->left;
          v52 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v49);
          v98 = 0LL;
          v53 = *v52;
          if ( *v52 > v51 )
          {
            v98.left = *v52;
          }
          else
          {
            v53 = v51;
            v98.left = v51;
          }
          v54 = v52[2];
          if ( v54 < this[9].right )
          {
            v98.right = v52[2];
          }
          else
          {
            v54 = this[9].right;
            v98.right = v54;
          }
          v55 = v52[1];
          if ( v55 > this[9].top )
          {
            v98.top = v52[1];
          }
          else
          {
            v55 = this[9].top;
            v98.top = v55;
          }
          v56 = v52[3];
          if ( v56 >= this[9].bottom )
            v56 = this[9].bottom;
          v98.bottom = v56;
          if ( v56 > v55 && v54 > v53 )
          {
            v97 = 0LL;
            if ( v39 )
            {
              DXGPRESENT::XformRect(v29, v50, &v97, &v98, v107, v106);
              v57 = v97.left;
              v50 = this + 9;
              v49 = v104;
              v60 = v97.bottom;
              v58 = v97.right;
              v59 = v97.top;
            }
            else
            {
              v57 = v32 + v53;
              v58 = v54 + v32;
              v59 = v55 + v33;
              v60 = v56 + v33;
            }
            v61 = *(_QWORD *)&this[1].left;
            v62 = 0;
            v109 = v60;
            v108 = v59;
            v96 = v58;
            v63 = v61 + 32;
            v95 = v57;
            *(_QWORD *)&v97.left = v61 + 32;
            LODWORD(v105) = 0;
            if ( *(_DWORD *)(v61 + 8) )
            {
              while ( 1 )
              {
                v64 = LOWORD(this[26].bottom);
                v65 = (__m128i *)(16LL * v62 + v63);
                v113 = 0LL;
                v98 = 0LL;
                if ( v64 > 1 )
                {
                  v82 = *v65;
                  v65 = (__m128i *)&v113;
                  v66 = v64 * _mm_cvtsi128_si32(v82);
                  DWORD1(v113) = v64 * v82.m128i_i32[1];
                  LODWORD(v113) = v66;
                  DWORD2(v113) = v64 * v82.m128i_i32[2];
                  HIDWORD(v113) = v64 * v82.m128i_i32[3];
                }
                else
                {
                  v66 = v65->m128i_i32[0];
                }
                if ( v66 > v57 )
                {
                  v98.left = v66;
                }
                else
                {
                  v66 = v57;
                  v98.left = v57;
                }
                v67 = v65->m128i_i32[2];
                if ( v67 < v58 )
                {
                  v98.right = v65->m128i_i32[2];
                }
                else
                {
                  v67 = v58;
                  v98.right = v58;
                }
                if ( v66 >= v67 )
                  goto LABEL_77;
                v68 = v65->m128i_i32[1];
                if ( v68 > v59 )
                {
                  v98.top = v65->m128i_i32[1];
                }
                else
                {
                  v68 = v59;
                  v98.top = v59;
                }
                v69 = v65->m128i_i32[3];
                if ( v69 >= v60 )
                  v69 = v60;
                v98.bottom = v69;
                if ( v68 < v69 )
                  break;
LABEL_76:
                v57 = v95;
LABEL_77:
                v76 = *(_QWORD *)&this[1].left;
                ++v62;
                v63 = *(_QWORD *)&v97.left;
                LODWORD(v105) = v62;
                if ( v62 >= *(_DWORD *)(v76 + 8) )
                {
                  v33 = v110;
                  v50 = this + 9;
                  v49 = v104;
                  goto LABEL_79;
                }
              }
              v70 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
              if ( (*(_DWORD *)&v70 & 0x10000) != 0 )
              {
                v71 = (struct tagRECT *)(*(_QWORD *)&this[14].left + 16LL * (unsigned int)this[22].left);
                if ( (*(_WORD *)&v70 & 0x100) == 0 )
                {
                  *v71 = v98;
                  goto LABEL_74;
                }
                v72 = v99;
                v73 = v100;
                if ( v66 > v99 )
                  v72 = v66;
                v71->left = v72;
                if ( v67 < v73 )
                  v73 = v67;
                v71->right = v73;
                if ( v72 < v73 )
                {
                  v74 = v101;
                  v75 = v102;
                  if ( v68 > v101 )
                    v74 = v68;
                  v71->top = v74;
                  if ( v69 < v75 )
                    v75 = v69;
                  v71->bottom = v75;
                  if ( v74 < v75 )
                  {
LABEL_74:
                    ++this[22].left;
                    this->top &= ~2u;
                  }
                }
              }
              else
              {
                v83 = 0;
                if ( this[4].top )
                {
                  v84 = v111;
                  do
                  {
                    v85 = *((_QWORD *)v84 + 231);
                    if ( !v85 || !*(_QWORD *)(v85 + 2792) )
                    {
                      WdLogSingleEntry1(1LL, 11262LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"(pDevice->GetDisplayAdapter(VidPnSourceId) != NULL) && pDevice->GetDisplayAdapter(VidPn"
                                  "SourceId)->IsDisplayAdapter()",
                        11262LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      v85 = *((_QWORD *)v84 + 231);
                    }
                    v86 = *(_QWORD *)(v85 + 2792);
                    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v86 + 16)) )
                    {
                      WdLogSingleEntry1(1LL, 11265LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pDisplayCore->IsCoreResourceSharedOwner()",
                        11265LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v87 = *(_QWORD *)(v86 + 128);
                    v88 = &this->left + v83;
                    v89 = (unsigned int)v88[88];
                    *(_QWORD *)&v113 = *((_QWORD *)&this[14].left + v83);
                    v90 = 2 * v89;
                    if ( DXGPRESENT::IntersectRect(
                           (struct tagRECT *)(v113 + 8 * v90),
                           &v98,
                           (const struct tagRECT *)(4000LL * v83 + 628 + v87))
                      && ((v9->Flags.Value & 0x100) == 0 || v83 == v9->VidPnSourceId) )
                    {
                      v92 = (_DWORD *)(v113 + 8 * v90);
                      v92[1] -= v91[1];
                      v92[3] -= v91[1];
                      *v92 -= *v91;
                      v92[2] -= *v91;
                      CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)v86, v83);
                      if ( CddInterface )
                        (*((void (__fastcall **)(_QWORD, _DWORD *))CddInterface + 1))(*(_QWORD *)CddInterface, v92);
                      ++v88[88];
                      this->top &= ~2u;
                      v9 = v112;
                    }
                    ++v83;
                  }
                  while ( v83 < this[4].top );
                  v62 = v105;
                  v59 = v108;
                  v60 = v109;
                }
              }
              v58 = v96;
              goto LABEL_76;
            }
LABEL_79:
            v39 = v94;
            v29 = this + 8;
            v32 = v103;
          }
          v104 = ++v49;
        }
        while ( v49 < this[7].top );
      }
    }
LABEL_81:
    this->top &= 0xFFFFFEF7;
    return 0LL;
  }
  WdLogSingleEntry4(2LL, -1073741675LL, this, (unsigned int)this[7].top, *(unsigned int *)(v24 + 8));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
    -1073741675LL,
    (__int64)this,
    (unsigned int)this[7].top,
    *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL),
    0LL);
  return 3221225621LL;
}
