/*
 * XREFs of ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E33E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000E4F0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD658 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 */

char __fastcall CVirtualDesktopSwitch::_WindowEnumCallback(__int64 a1, struct CWindowData *a2, char a3, int *a4)
{
  CBaseObject *v4; // rdi
  int v5; // ebx
  int v8; // edx
  int v9; // r14d
  __int64 v10; // r15
  struct tagRECT v11; // xmm6
  __m128i v12; // xmm0
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rax
  CVisual *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  CVisual *v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  char result; // al
  CBaseObject *v27; // [rsp+38h] [rbp-39h] BYREF
  int *v28; // [rsp+40h] [rbp-31h]
  struct tagRECT v29; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v31; // [rsp+68h] [rbp-9h] BYREF

  v4 = 0LL;
  v28 = a4;
  v5 = 0;
  v27 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 184);
    if ( v8 == *(_DWORD *)(a1 + 152) )
    {
      v9 = *((_DWORD *)a2 + 170) & 0xFFF;
      if ( v9 == 75 || (*((_DWORD *)a2 + 170) & 0xFFF) == 0x4C )
      {
        v10 = 0LL;
        if ( v8 )
        {
          while ( 1 )
          {
            v12 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 160) + 16LL * (unsigned int)v10), 8);
            v29 = *(struct tagRECT *)(*(_QWORD *)(a1 + 160) + 16LL * (unsigned int)v10);
            v11 = v29;
            rc = v29;
            v13 = _mm_cvtsi128_si32(v12) - _mm_cvtsi128_si32((__m128i)v29);
            v14 = 0;
            if ( v13 >= 0 )
              v14 = v13;
            v15 = -v14;
            if ( v9 != 75 )
              v15 = v14;
            OffsetRect(&rc, v15, 0);
            v31 = v11;
            OffsetRect(&v31, -v15, 0);
            v5 = CStoryboard::_AddAnimationComponent(
                   (CStoryboard *)a1,
                   *(struct CAnimationComponent **)(*(_QWORD *)(a1 + 128) + 8 * v10));
            if ( v5 < 0 )
              break;
            CAnimatedTransitionVisual::SetBeginRect(
              *(struct tagPOINT **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v10) + 40LL),
              &v29);
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v10) + 40LL);
            v17 = (CVisual *)(v16 + 8);
            *(struct tagRECT *)(v16 + 872) = rc;
            v18 = *(_DWORD *)(v16 + 96);
            if ( (v18 & 0x1000) == 0 )
            {
              *((_DWORD *)v17 + 22) = v18 | 0x1000;
              CVisual::PropagateDirtyChildren(v17);
            }
            v19 = *(_QWORD *)(a1 + 128);
            v29 = v11;
            v20 = *(_QWORD *)(v19 + 8 * v10);
            *(struct tagRECT *)(v20 + 104) = v11;
            *(_DWORD *)(v20 + 68) = 2;
            v21 = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v29, 0, &v27);
            v4 = v27;
            v5 = v21;
            if ( v21 < 0 )
            {
              v25 = 4737;
              goto LABEL_23;
            }
            v5 = CStoryboard::_AddAnimationComponent((CStoryboard *)a1, v27);
            if ( v5 < 0 )
            {
              v25 = 4738;
              goto LABEL_23;
            }
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v4 + 5), &v31);
            v22 = *((_QWORD *)v4 + 5);
            v23 = (CVisual *)(v22 + 8);
            *(struct tagRECT *)(v22 + 872) = v11;
            v24 = *(_DWORD *)(v22 + 96);
            if ( (v24 & 0x1000) == 0 )
            {
              *((_DWORD *)v23 + 22) = v24 | 0x1000;
              CVisual::PropagateDirtyChildren(v23);
            }
            *((_DWORD *)v4 + 17) = 2;
            *(struct tagRECT *)((char *)v4 + 104) = v11;
            CBaseObject::Release(v4);
            v4 = 0LL;
            v10 = (unsigned int)(v10 + 1);
            v27 = 0LL;
            if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 184) )
              goto LABEL_25;
          }
          v25 = 4731;
LABEL_23:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, v25);
          if ( v4 )
            CBaseObject::Release(v4);
        }
      }
    }
    else
    {
      v5 = -2147019873;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        -2147019873,
        0x1262u);
    }
  }
LABEL_25:
  result = 1;
  *v28 = v5;
  return result;
}
