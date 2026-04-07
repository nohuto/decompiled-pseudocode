/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006A362
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x180060F04 (_o_sqrtf_0.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18006A27A (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006A81A (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800AB57C (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800E7060 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x1800E74D4 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800E9150 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  unsigned int v3; // r14d
  DWORD TickCount; // eax
  __int64 v6; // r8
  unsigned int v7; // esi
  DWORD v8; // r12d
  __int64 v9; // rax
  char v10; // r15
  __int64 v11; // rax
  DWORD v12; // ecx
  DWORD v13; // edx
  CContactManager *v14; // rcx
  int v15; // eax
  __m128i v16; // xmm1
  unsigned int v17; // xmm0_4
  char *v18; // r13
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rbx
  __m128 v22; // xmm6
  __m128 v23; // xmm10
  __m128 v24; // xmm11
  float v25; // xmm8_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm9_4
  float v29; // xmm0_4
  __m128 v30; // xmm2
  int v31; // eax
  unsigned int v32; // r15d
  __int64 v33; // r12
  float *v34; // rbx
  float v35; // xmm0_4
  __int64 v36; // rdx
  float v37; // xmm0_4
  __int64 v38; // rax
  __int128 v40; // [rsp+38h] [rbp-99h] BYREF
  __int64 v41; // [rsp+48h] [rbp-89h] BYREF
  float v42; // [rsp+50h] [rbp-81h]
  char v43[8]; // [rsp+58h] [rbp-79h] BYREF
  float v44; // [rsp+60h] [rbp-71h]

  v3 = 0;
  TickCount = GetTickCount();
  v7 = *((_DWORD *)this + 88);
  v8 = TickCount;
  if ( !v7
    || (v9 = *((_QWORD *)this + 41), *(float *)(v9 + 4) != (float)a2->x)
    || (v10 = 0, *(float *)(v9 + 8) != (float)a2->y) )
  {
    v10 = 1;
  }
  if ( v7 )
  {
    v11 = *((_QWORD *)this + 41);
    v12 = v8 - *(_DWORD *)v11;
    if ( *((float *)this + 78) <= (float)((float)((float)((float)(*(float *)(v11 + 8) - (float)a2->y)
                                                        * (float)(*(float *)(v11 + 8) - (float)a2->y))
                                                + (float)((float)(*(float *)(v11 + 4) - (float)a2->x)
                                                        * (float)(*(float *)(v11 + 4) - (float)a2->x)))
                                        / (float)(int)(v12 * v12)) )
    {
      *((_DWORD *)this + 113) = 0;
      v13 = 0;
    }
    else
    {
      v13 = v12 + *((_DWORD *)this + 113);
      *((_DWORD *)this + 113) = v13;
    }
    if ( v13 > *((_DWORD *)this + 79) )
    {
      v14 = (CContactManager *)*((_QWORD *)this + 57);
      if ( v14 )
      {
        v15 = CContactManager::NotifyTouchDragVisualComplete(v14, this);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x6Bu);
LABEL_29:
          CTouchDragVisual::Stop(this);
          return v3;
        }
      }
      *((_DWORD *)this + 113) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
  {
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTouchDragVisual_BeginDraw_Info,
      v6,
      1,
      (__int64)v43);
  }
  if ( v10 )
  {
    v16 = _mm_cvtsi32_si128(a2->y);
    *(float *)&v17 = (float)a2->x;
    v41 = 0LL;
    v42 = 0.0;
    *(_QWORD *)&v40 = __PAIR64__(v17, v8);
    *((float *)&v40 + 3) = FLOAT_0_5;
    DWORD2(v40) = _mm_cvtepi32_ps(v16).m128_u32[0];
    if ( *((_BYTE *)this + 448) && v7 )
    {
      v18 = (char *)this + 328;
      v19 = v41;
      v20 = *((_QWORD *)this + 41);
      *(_OWORD *)v20 = v40;
      *(_QWORD *)(v20 + 16) = v19;
      *(_DWORD *)(v20 + 24) = 0;
    }
    else
    {
      v18 = (char *)this + 328;
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((__int64)this + 328, (unsigned __int64)&v40);
      ++v7;
    }
    *((_BYTE *)this + 448) = 0;
    if ( v7 > 1 )
    {
      v21 = *(_QWORD *)v18;
      v22 = *(__m128 *)(*(_QWORD *)v18 + 28LL);
      v23 = _mm_shuffle_ps(v22, v22, 85);
      v24 = _mm_shuffle_ps(v22, v22, 170);
      v25 = *((float *)&v40 + 1) - v23.m128_f32[0];
      v26 = *((float *)&v40 + 2) - v24.m128_f32[0];
      v27 = _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
      v28 = *((float *)&v40 + 3) - v27;
      v29 = o_sqrtf_0((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v28 * v28));
      if ( v7 <= 2 )
      {
        if ( v29 >= 10.0 )
        {
LABEL_27:
          v31 = CTouchVisual::RegisterGlobalTimer(this);
          v3 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xA5u);
            goto LABEL_29;
          }
          v32 = 0;
          v33 = 0LL;
          do
          {
            v34 = (float *)*((_QWORD *)this + 41);
            if ( v32 )
            {
              v36 = 7LL * (v32 - 1);
              v37 = v34[v36 + 2];
              if ( v32 == v7 - 1 )
              {
                LODWORD(v41) = COERCE_UNSIGNED_INT(v37 - v34[v33 + 2]) ^ _xmm;
                v35 = v34[v36 + 1] - v34[v33 + 1];
              }
              else
              {
                v38 = 7LL * (v32 + 1);
                LODWORD(v41) = COERCE_UNSIGNED_INT(v37 - v34[v38 + 2]) ^ _xmm;
                v35 = v34[v36 + 1] - v34[v38 + 1];
              }
            }
            else
            {
              LODWORD(v41) = COERCE_UNSIGNED_INT(v34[2] - v34[9]) ^ _xmm;
              v35 = v34[1] - v34[8];
            }
            v42 = 0.0;
            *((float *)&v41 + 1) = v35;
            CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v41);
            ++v32;
            *(_QWORD *)&v34[v33 + 4] = v41;
            v34[v33 + 6] = v42;
            v33 += 7LL;
          }
          while ( v32 < 2 );
          CTouchDragVisualHelper::SmoothTouchDragPath(v18, (char *)this + 360);
          return v3;
        }
      }
      else
      {
        v30 = *(__m128 *)(v21 + 56);
        v24.m128_f32[0] = v24.m128_f32[0] - _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
        v23.m128_f32[0] = v23.m128_f32[0] - _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
        *((_QWORD *)this + 52) = _mm_unpacklo_ps(v23, v24).m128_u64[0];
        v44 = v27 - _mm_shuffle_ps(v30, v30, 255).m128_f32[0];
        *((float *)this + 106) = v44;
        CTouchDragVisualHelper::Normalize((CTouchDragVisual *)((char *)this + 416));
        if ( (float)((float)((float)((float)((float)(v26 * *((float *)this + 105))
                                           + (float)(v25 * *((float *)this + 104)))
                                   + (float)(v28 * *((float *)this + 106)))
                           / v29)
                   / v29) <= 0.059999999 )
          goto LABEL_27;
      }
      *((_BYTE *)this + 448) = 1;
      goto LABEL_27;
    }
  }
  return v3;
}
