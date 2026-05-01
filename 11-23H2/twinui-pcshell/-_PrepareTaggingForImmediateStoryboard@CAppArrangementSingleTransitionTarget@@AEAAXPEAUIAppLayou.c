/*
 * XREFs of ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18059B904
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059A9B0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x180597C8C (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x18059B4E4 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x18059B6A0 (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_ComputeDragVisualDestinationRect @ 0x18059BF68 (s_ComputeDragVisualDestinationRect.c)
 *     s_GetAlignedRectsForApp @ 0x18059BFE8 (s_GetAlignedRectsForApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::_PrepareTaggingForImmediateStoryboard(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3)
{
  __int64 v3; // rax
  int (__fastcall *v6)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  int v8; // eax
  bool v9; // zf
  __int128 v10; // xmm0
  int *v11; // r15
  int v12; // r13d
  unsigned int v13; // ebx
  _OWORD *v14; // rdi
  int v15; // ecx
  int v16; // eax
  CAppTransitionTargetBase *top; // rcx
  __int128 v18; // xmm1
  const struct tagRECT *v19; // rdx
  const struct tagRECT *v20; // r8
  bool v21; // r12
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  char v25; // cl
  int v26; // eax
  LANGID ThreadUILanguage; // ax
  bool v28; // al
  int v29; // ecx
  int v30; // eax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  unsigned __int8 v34; // r14
  int v35; // eax
  __int64 v36; // rcx
  __int128 *v37; // r15
  HMONITOR v38; // r13
  HMONITOR v39; // rax
  __int128 v40; // xmm0
  int v41; // r8d
  const struct tagRECT *v42; // rdx
  LONG right; // edx
  LONG bottom; // r8d
  char v45; // [rsp+30h] [rbp-40h] BYREF
  char v46[7]; // [rsp+31h] [rbp-3Fh] BYREF
  __int64 v47; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-30h] BYREF
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_QWORD *)a2;
  v47 = 0LL;
  *(_QWORD *)&rc.left = a3;
  v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v3 + 32);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v47, &rcDst);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 96LL))(a2);
    v9 = *(_QWORD *)&rc.left == 0LL;
    v10 = *(_OWORD *)((char *)this + 172);
    v11 = (int *)((char *)this + 72);
    v12 = v8;
    v13 = 696614912;
    v14 = (_OWORD *)((char *)this + 88);
    *(_OWORD *)((char *)this + 72) = v10;
    if ( !v9 )
      v10 = *(_OWORD *)((char *)this + 236);
    v15 = *((_DWORD *)this + 19);
    v16 = *v11;
    *v14 = v10;
    *((_DWORD *)this + 21) -= v15;
    *((_DWORD *)this + 19) -= v15;
    *v11 = 0;
    *((_DWORD *)this + 20) -= v16;
    MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
    if ( v12 == 7 )
    {
      *((_DWORD *)this + 10) = 71;
      v13 = 697663488;
      goto LABEL_77;
    }
    if ( v12 == 8 )
    {
      v35 = 72;
      v34 = 1;
    }
    else
    {
      if ( v12 != 9 )
      {
        if ( v12 == 2 )
        {
          v30 = 45;
        }
        else
        {
          if ( v12 != 10 )
          {
            if ( *((_DWORD *)this + 68) == 6 )
            {
              v18 = *(_OWORD *)((char *)this + 188);
              v19 = (const struct tagRECT *)((char *)this + 120);
              *((_DWORD *)this + 10) = 44;
              *(_OWORD *)((char *)this + 120) = v18;
LABEL_15:
              *(_OWORD *)((char *)this + 104) = *(_OWORD *)v11;
              MatchRectAspectRatio((struct tagRECT *)((char *)this + 104), v19);
              goto LABEL_77;
            }
            if ( CAppArrangementSingleTransitionTarget::_IsDragVisual(this)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              *((_DWORD *)this + 10) = 35;
              s_ComputeDragVisualDestinationRect((char *)this + 188, (char *)this + 88, (char *)this + 120);
              v19 = v20;
              goto LABEL_15;
            }
            if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              v21 = Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47) || *(_QWORD *)&rc.left;
              v45 = 1;
              v46[0] = 1;
              s_GetAlignedRectsForApp(
                (_DWORD)this + 172,
                (_DWORD)this + 188,
                (_DWORD)this + 104,
                (_DWORD)this + 120,
                (__int64)&v45,
                (__int64)v46);
              if ( !v45 )
                v13 = 696549376;
              if ( !v46[0] )
                v13 &= ~0x8000u;
              if ( v21 )
              {
                v22 = *(_OWORD *)((char *)this + 120);
                v23 = *(_OWORD *)((char *)this + 104);
                *((_DWORD *)this + 10) = 28;
                *v14 = v22;
                *(_OWORD *)v11 = v23;
                if ( Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47) )
                  v13 = v13 & 0xDFDFFFFF | 0x200000;
              }
              else
              {
                *((_DWORD *)this + 10) = 23;
              }
              goto LABEL_77;
            }
            if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
LABEL_77:
              *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(top, *((HWND *)this + 7), 0, v13);
              goto LABEL_78;
            }
            rcDst = 0LL;
            if ( *((_DWORD *)this + 68) == 1
              && !IntersectRect(&rcDst, (const RECT *)((char *)this + 88), (const RECT *)((char *)this + 136)) )
            {
              *((_DWORD *)this + 10) = 43;
              v13 = 671449088;
              SetRectEmpty((LPRECT)((char *)this + 72));
              SetRectEmpty((LPRECT)((char *)this + 88));
              SetRectEmpty((LPRECT)((char *)this + 104));
              SetRectEmpty((LPRECT)((char *)this + 120));
              goto LABEL_77;
            }
            if ( (unsigned int)(v12 - 3) <= 1 || (*((_BYTE *)this + 160) & 0x18) != 0 )
            {
              v26 = *((_DWORD *)this + 40);
              v25 = 1;
              if ( (v26 & 1) != 0 )
              {
                *((_DWORD *)this + 10) = 7;
              }
              else if ( (v26 & 4) != 0 )
              {
                *((_DWORD *)this + 10) = 31;
              }
              else
              {
                *((_DWORD *)this + 10) = 23;
              }
            }
            else
            {
              v24 = 20;
              v25 = 0;
              if ( *((_DWORD *)this + 39) == 3 )
                v24 = 28;
              *((_DWORD *)this + 10) = v24;
            }
            *(_OWORD *)((char *)this + 120) = *v14;
            if ( !v25 )
            {
LABEL_54:
              *(_OWORD *)((char *)this + 104) = *(_OWORD *)v11;
              MatchRectAspectRatio((struct tagRECT *)((char *)this + 104), (const struct tagRECT *)((char *)this + 120));
              if ( *((_DWORD *)this + 68) )
                v13 &= ~0x20000000u;
              goto LABEL_77;
            }
            ThreadUILanguage = GetThreadUILanguage();
            v28 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
            if ( v12 != 3 )
            {
              if ( v12 == 4 )
                goto LABEL_51;
              v13 = 696516608;
            }
            if ( (unsigned int)(v12 - 3) <= 1 || !v28 )
            {
              v29 = *(_DWORD *)v14 + *((_DWORD *)this + 34) - *((_DWORD *)this + 24);
              goto LABEL_53;
            }
LABEL_51:
            v29 = *((_DWORD *)this + 36);
LABEL_53:
            *((_DWORD *)this + 30) = v29;
            *((_DWORD *)this + 32) = v29 + *((_DWORD *)this + 24) - *((_DWORD *)this + 22);
            goto LABEL_54;
          }
          v30 = 84;
        }
        v31 = *(_OWORD *)v11;
        *((_DWORD *)this + 10) = v30;
        v32 = *v14;
        v33 = *((_QWORD *)this + 35);
        *(_OWORD *)((char *)this + 104) = v31;
        *(_OWORD *)((char *)this + 120) = v32;
        if ( v33 )
        {
          *((_QWORD *)this + 8) = v33;
          *((_DWORD *)this + 12) = 0x4000;
        }
        goto LABEL_77;
      }
      v34 = 0;
      v35 = 73;
    }
    v36 = *((_QWORD *)this + 7);
    v13 = (v34 << 20) + 696614912;
    *((_DWORD *)this + 10) = v35;
    if ( !(unsigned int)GetWindowMinimizeRect(v36, &rc) || IsRectEmpty(&rc) )
    {
      if ( v12 == 8 )
        *((_DWORD *)this + 10) = 71;
      else
        *((_DWORD *)this + 10) = 4095;
      goto LABEL_77;
    }
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)v11;
    v37 = (__int128 *)((char *)this + 188);
    v38 = MonitorFromRect(&rc, 0);
    v39 = MonitorFromRect((LPCRECT)((char *)this + 188), 0);
    if ( v34 || v39 && v39 == v38 )
    {
      v41 = (int)(float)((float)(rc.right - rc.left) * 0.60000002);
      v42 = (const struct tagRECT *)((char *)this + 188);
      rcDst.top = rc.top - v41 * (rc.bottom - rc.top) / (rc.right - rc.left);
      rcDst.bottom = rc.top;
      rcDst.left = (int)(float)((float)((float)v41 * 0.30000001) + (float)rc.left);
      rcDst.right = v41 + rcDst.left;
      if ( v34 )
        v42 = (const struct tagRECT *)((char *)this + 172);
      MatchRectAspectRatio(&rcDst, v42);
      top = (CAppTransitionTargetBase *)(unsigned int)rcDst.top;
      right = rcDst.right;
      bottom = rcDst.bottom;
      if ( v34 )
      {
        *((_DWORD *)this + 30) = rcDst.left;
        *((_DWORD *)this + 31) = (_DWORD)top;
        *((_DWORD *)this + 32) = right;
        *((_DWORD *)this + 33) = bottom;
        goto LABEL_77;
      }
      *(_DWORD *)v14 = rcDst.left;
      *((_DWORD *)this + 23) = (_DWORD)top;
      *((_DWORD *)this + 24) = right;
      *((_DWORD *)this + 25) = bottom;
      v40 = *v37;
    }
    else
    {
      v40 = *v37;
      *((_DWORD *)this + 10) = 74;
      *v14 = v40;
    }
    *(_OWORD *)((char *)this + 120) = v40;
    goto LABEL_77;
  }
LABEL_78:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v47);
}
