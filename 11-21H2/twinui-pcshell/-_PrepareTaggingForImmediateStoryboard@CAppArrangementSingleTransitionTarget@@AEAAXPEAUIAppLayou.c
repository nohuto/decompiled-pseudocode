/*
 * XREFs of ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E3A08
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2AE0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804DFDBC (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804E35F4 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804E37B0 (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_ComputeDragVisualDestinationRect @ 0x1804E4030 (s_ComputeDragVisualDestinationRect.c)
 *     s_GetAlignedRectsForApp @ 0x1804E40B0 (s_GetAlignedRectsForApp.c)
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
  struct tagRECT v10; // xmm0
  int *v11; // r14
  int v12; // r13d
  unsigned int v13; // ebx
  struct tagRECT *v14; // rdx
  int v15; // ecx
  int v16; // eax
  CAppTransitionTargetBase *v17; // rcx
  __int128 v18; // xmm1
  const struct tagRECT *v19; // rdx
  const struct tagRECT *v20; // r8
  int v21; // edx
  bool v22; // r13
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  char v26; // dl
  LANGID ThreadUILanguage; // ax
  bool v28; // al
  int v29; // eax
  int v30; // eax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  unsigned __int8 v34; // di
  int v35; // eax
  __int64 v36; // rcx
  struct tagRECT *v37; // r14
  HMONITOR v38; // r15
  HMONITOR v39; // rax
  struct tagRECT v40; // xmm0
  int v41; // r8d
  const struct tagRECT *v42; // rdx
  char v43; // [rsp+30h] [rbp-40h] BYREF
  char v44[15]; // [rsp+31h] [rbp-3Fh] BYREF
  struct tagRECT v45; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-18h] BYREF

  v3 = *(_QWORD *)a2;
  v46 = 0LL;
  *(_QWORD *)&v45.left = a3;
  v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v3 + 32);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v46, &rcDst);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 96LL))(a2);
    v9 = *(_QWORD *)&v45.left == 0LL;
    v10 = *(struct tagRECT *)((char *)this + 172);
    v11 = (int *)((char *)this + 72);
    v12 = v8;
    v13 = 696614912;
    v14 = (struct tagRECT *)((char *)this + 88);
    *(struct tagRECT *)((char *)this + 72) = v10;
    if ( !v9 )
      v10 = *(struct tagRECT *)((char *)this + 236);
    v15 = *((_DWORD *)this + 19);
    v16 = *v11;
    *v11 = 0;
    *v14 = v10;
    *((_DWORD *)this + 21) -= v15;
    *((_DWORD *)this + 19) -= v15;
    *((_DWORD *)this + 20) -= v16;
    MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), v14);
    if ( v12 == 7 )
    {
      *((_DWORD *)this + 10) = 71;
      v13 = 697663488;
      goto LABEL_75;
    }
    if ( v12 == 8 )
    {
      v34 = 1;
      v35 = 72;
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
              goto LABEL_75;
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
              v22 = Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47) || *(_QWORD *)&v45.left;
              v43 = 1;
              v44[0] = 1;
              s_GetAlignedRectsForApp(
                (_DWORD)this + 172,
                v21,
                (_DWORD)this + 104,
                (_DWORD)this + 120,
                (__int64)&v43,
                (__int64)v44);
              if ( !v43 )
                v13 = 696549376;
              if ( !v44[0] )
                v13 &= ~0x8000u;
              if ( v22 )
              {
                v23 = *(_OWORD *)((char *)this + 120);
                v24 = *(_OWORD *)((char *)this + 104);
                *((_DWORD *)this + 10) = 28;
                *(_OWORD *)((char *)this + 88) = v23;
                *(_OWORD *)v11 = v24;
                if ( Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47) )
                  v13 = v13 & 0xDFDFFFFF | 0x200000;
              }
              else
              {
                *((_DWORD *)this + 10) = 23;
              }
              goto LABEL_75;
            }
            if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
LABEL_75:
              *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(v17, *((HWND *)this + 7), 0, v13);
              goto LABEL_76;
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
              goto LABEL_75;
            }
            if ( (unsigned int)(v12 - 3) <= 1 || (*((_BYTE *)this + 160) & 0x18) != 0 )
            {
              v26 = 1;
              if ( (*((_DWORD *)this + 40) & 1) != 0 )
              {
                *((_DWORD *)this + 10) = 7;
                goto LABEL_44;
              }
              v25 = (2 * (*((_DWORD *)this + 40) & 4)) | 0x17;
            }
            else
            {
              v25 = 20;
              v26 = 0;
              if ( *((_DWORD *)this + 39) == 3 )
                v25 = 28;
            }
            *((_DWORD *)this + 10) = v25;
LABEL_44:
            *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)this + 88);
            if ( !v26 )
              goto LABEL_53;
            ThreadUILanguage = GetThreadUILanguage();
            v28 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
            if ( v12 != 3 )
            {
              if ( v12 == 4 )
                goto LABEL_50;
              v13 = 696516608;
            }
            if ( (unsigned int)(v12 - 3) <= 1 || !v28 )
            {
              v29 = *((_DWORD *)this + 22) + *((_DWORD *)this + 34) - *((_DWORD *)this + 24);
              goto LABEL_52;
            }
LABEL_50:
            v29 = *((_DWORD *)this + 36);
LABEL_52:
            *((_DWORD *)this + 30) = v29;
            *((_DWORD *)this + 32) = *((_DWORD *)this + 30) + *((_DWORD *)this + 24) - *((_DWORD *)this + 22);
LABEL_53:
            *(_OWORD *)((char *)this + 104) = *(_OWORD *)v11;
            MatchRectAspectRatio((struct tagRECT *)((char *)this + 104), (const struct tagRECT *)((char *)this + 120));
            if ( *((_DWORD *)this + 68) )
              v13 &= ~0x20000000u;
            goto LABEL_75;
          }
          v30 = 84;
        }
        v31 = *(_OWORD *)v11;
        *((_DWORD *)this + 10) = v30;
        v32 = *(_OWORD *)((char *)this + 88);
        v33 = *((_QWORD *)this + 35);
        *(_OWORD *)((char *)this + 104) = v31;
        *(_OWORD *)((char *)this + 120) = v32;
        if ( v33 )
        {
          *((_QWORD *)this + 8) = v33;
          *((_DWORD *)this + 12) = 0x4000;
        }
        goto LABEL_75;
      }
      v34 = 0;
      v35 = 73;
    }
    v36 = *((_QWORD *)this + 7);
    v13 = (v34 << 20) + 696614912;
    *((_DWORD *)this + 10) = v35;
    if ( !(unsigned int)GetWindowMinimizeRect(v36, &rcDst) || IsRectEmpty(&rcDst) )
    {
      if ( v12 == 8 )
        *((_DWORD *)this + 10) = 71;
      else
        *((_DWORD *)this + 10) = 4095;
    }
    else
    {
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)v11;
      v37 = (struct tagRECT *)((char *)this + 188);
      v38 = MonitorFromRect(&rcDst, 0);
      v39 = MonitorFromRect((LPCRECT)((char *)this + 188), 0);
      if ( v34 || v39 && v39 == v38 )
      {
        v41 = (int)(float)((float)(rcDst.right - rcDst.left) * 0.60000002);
        v42 = (const struct tagRECT *)((char *)this + 188);
        v45.top = rcDst.top - v41 * (rcDst.bottom - rcDst.top) / (rcDst.right - rcDst.left);
        v45.bottom = rcDst.top;
        v45.left = (int)(float)((float)((float)v41 * 0.30000001) + (float)rcDst.left);
        v45.right = v41 + v45.left;
        if ( v34 )
          v42 = (const struct tagRECT *)((char *)this + 172);
        MatchRectAspectRatio(&v45, v42);
        v40 = v45;
        if ( !v34 )
        {
          *(struct tagRECT *)((char *)this + 88) = v45;
          v40 = *v37;
        }
      }
      else
      {
        v40 = *v37;
        *((_DWORD *)this + 10) = 74;
        *(struct tagRECT *)((char *)this + 88) = v40;
      }
      *(struct tagRECT *)((char *)this + 120) = v40;
    }
    goto LABEL_75;
  }
LABEL_76:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v46);
}
