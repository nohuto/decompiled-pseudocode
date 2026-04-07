/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180005104 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EC040 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18002B6DC (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002FE94 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800364FC (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180037FCC (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800577E4 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___ @ 0x18005BBF4 (CWindowList--ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800B74CC (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BBB10 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D5CE0 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, char a3)
{
  struct CWindowData *v4; // rsi
  LONG x; // r14d
  unsigned int v7; // edi
  LONG v8; // r15d
  struct CWindowData *v9; // rdx
  CTopLevelWindow *v10; // rcx
  __int64 v11; // rbx
  CProjectionBorderVisual *v12; // rcx
  struct CWindowData *v13; // rbx
  __int64 v14; // rcx
  _WORD *v15; // rax
  int v16; // r8d
  int v17; // edx
  struct tagRECT v18; // xmm6
  HMONITOR v19; // rbx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  int started; // eax
  struct CWindowData *v25; // [rsp+30h] [rbp-50h] BYREF
  POINT pt; // [rsp+38h] [rbp-48h] BYREF
  POINT v27; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-30h] BYREF

  v25 = a2;
  v4 = a2;
  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 216), (int *)&pt, (int *)&v27);
  x = v27.x;
  v7 = 0;
  v8 = pt.x;
  if ( *((_QWORD *)this + 71) )
  {
    if ( *((_QWORD *)v4 + 55) )
    {
      if ( *((_QWORD *)v4 + 56) )
      {
        if ( CWindowData::IsWindowVisibleAndUncloaked(v4) && (*((_BYTE *)v4 + 674) & 0x40) == 0 )
        {
          v15 = (_WORD *)*((_QWORD *)v4 + 2);
          if ( v15 )
          {
            if ( *v15 && (*((_BYTE *)v4 + 678) & 0x10) == 0 )
            {
              v16 = x - *((_DWORD *)v4 + 13);
              v17 = v8 - *((_DWORD *)v4 + 12);
              rc = (struct tagRECT)*((_OWORD *)v4 + 3);
              v18 = rc;
              OffsetRect(&rc, v17, v16);
              pt.x = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 8)) + _mm_cvtsi128_si32((__m128i)v18)) / 2;
              pt.y = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 12))
                    + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 4)))
                   / 2;
              v27.x = (rc.left + rc.right) / 2;
              v27.y = (rc.top + rc.bottom) / 2;
              v19 = MonitorFromPoint(pt, 0);
              if ( v19 != MonitorFromPoint(v27, 0) )
              {
                if ( (unsigned int)dword_180147058 > 5
                  && (byte_180147068 & 1) != 0
                  && (qword_180147070 & 1) == qword_180147070 )
                {
                  pt = (POINT)*((_QWORD *)v4 + 2);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    v20,
                    (unsigned int)&unk_180127A6D,
                    v21,
                    v22,
                    (__int64)&pt);
                }
                v23 = *((_QWORD *)this + 71);
                pt = (POINT)v4;
                if ( v4 && *((_QWORD *)v4 + 56) && !*(_BYTE *)(v23 + 312) )
                  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
                    v23 + 384,
                    &v27,
                    &pt);
              }
              v4 = v25;
            }
          }
        }
      }
    }
  }
  OffsetRect((LPRECT)v4 + 3, v8 - *((_DWORD *)v4 + 12), x - *((_DWORD *)v4 + 13));
  v9 = v25;
  v10 = (CTopLevelWindow *)*((_QWORD *)v25 + 55);
  if ( v10 )
  {
    CTopLevelWindow::OnOffsetUpdated(v10);
    v9 = v25;
    if ( (*((_BYTE *)v25 + 676) & 2) != 0 )
    {
      pt = (POINT)*((_QWORD *)v25 + 6);
      *(_QWORD *)&rc.left = &v25;
      *(_QWORD *)&rc.right = &pt;
      CWindowList::ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___(this, &rc);
      v9 = v25;
    }
  }
  v11 = *((_QWORD *)v9 + 56);
  if ( v11 )
  {
    if ( a3 )
    {
      if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)v11, 0) )
      {
        started = CTopLevelWindow3D::StartAnimation(v11, 9u);
        if ( started < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x25Cu, 0LL);
        goto LABEL_10;
      }
      v9 = v25;
    }
    if ( !*(_BYTE *)(v11 + 296) && !*(_DWORD *)(v11 + 388) )
    {
      *(_OWORD *)(v11 + 320) = *(_OWORD *)(*(_QWORD *)(v11 + 336) + 48LL);
LABEL_10:
      v9 = v25;
    }
  }
  v12 = (CProjectionBorderVisual *)*((_QWORD *)v9 + 58);
  if ( v12 )
  {
    CProjectionBorderVisual::UpdateRectFromWindow(v12, v9);
    v9 = v25;
  }
  v13 = v9;
  if ( *((_DWORD *)v9 + 130) )
  {
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)v9 + 62) + 8LL * v7);
      if ( *(struct CWindowData **)(v14 + 64) == v13 && *(_DWORD *)(v14 + 72) == 1 )
      {
        CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v14);
        v9 = v25;
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)v9 + 130) );
  }
}
