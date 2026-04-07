/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DBBA0
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFA30 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E00F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DB778 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct CAnimationComponent **a6)
{
  __m128i *v6; // rdi
  __int64 v8; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r14d
  CBaseObject *v14; // rbx
  int v15; // r8d
  LONG right; // edi
  __int64 v17; // kr00_8
  int v18; // r9d
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rcx
  struct tagRECT *p_rc; // rcx
  __int64 v28; // rcx
  CBaseObject *v30; // [rsp+50h] [rbp-29h] BYREF
  const struct tagRECT *v31; // [rsp+58h] [rbp-21h]
  struct tagRECT v32; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-9h] BYREF

  v6 = a5;
  v8 = *(_QWORD *)this;
  v30 = 0LL;
  v31 = a3;
  v11 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(v8 + 112))(this, *((unsigned int *)a2 + 168));
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v11, 0LL, 0LL, -1, 1, &v30);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = v30;
    if ( !a5 )
      v6 = (__m128i *)((char *)v30 + 88);
    v15 = _mm_cvtsi128_si32(*v6);
    v32 = (struct tagRECT)*v6;
    right = v31->right;
    v17 = v31->left - v15;
    rc = v32;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v32, 8));
    if ( (int)abs32(right - v18) >= (int)((HIDWORD(v17) ^ v17) - HIDWORD(v17)) )
      v19 = v31->left - v18;
    else
      v19 = right - v15;
    v20 = *((_DWORD *)a2 + 168);
    v21 = v20 & 0xFFF;
    if ( a4 )
    {
      if ( v21 == 42 )
      {
        v22 = 0LL;
        v23 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
        v24 = *(_DWORD *)(v23 + 40);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v23 + 16);
          while ( 1 )
          {
            v26 = *(_QWORD *)(v25 + 8 * v22);
            if ( *(_DWORD *)(v26 + 72) == 16 && *(_DWORD *)(v26 + 24) != 4 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v24 )
              goto LABEL_18;
          }
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v19 -= *(_DWORD *)(v26 + 128);
          CStoryboard::Release((CStoryboard *)v26);
          v14 = v30;
        }
      }
LABEL_18:
      if ( (*((_DWORD *)a2 + 168) & 0x1000000) != 0 )
      {
        v32 = *(struct tagRECT *)((char *)a2 + 692);
LABEL_27:
        CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v14 + 5), &v32);
        v28 = *((_QWORD *)v14 + 5);
        *(struct tagRECT *)(v28 + 872) = rc;
        CVisual::SetDirtyFlags((CVisual *)(v28 + 8), 4096);
        goto LABEL_28;
      }
      p_rc = &v32;
    }
    else
    {
      if ( v21 == 24 )
      {
        *((_DWORD *)this + 32) = v19;
        v20 = *((_DWORD *)a2 + 168);
      }
      if ( (v20 & 0x800000) != 0 )
      {
        rc = *(struct tagRECT *)((char *)a2 + 724);
        goto LABEL_27;
      }
      p_rc = &rc;
    }
    OffsetRect(p_rc, v19, 0);
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x12Cu);
  v14 = v30;
  if ( v30 )
    CStoryboard::_RemoveAnimationComponent(this, v30);
LABEL_28:
  if ( a6 )
  {
    if ( v13 < 0 )
    {
      *a6 = 0LL;
    }
    else
    {
      *a6 = v14;
      if ( !v14 )
        return (unsigned int)v13;
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v14 = v30;
    }
  }
  if ( v14 )
    CBaseObject::Release(v14);
  return (unsigned int)v13;
}
