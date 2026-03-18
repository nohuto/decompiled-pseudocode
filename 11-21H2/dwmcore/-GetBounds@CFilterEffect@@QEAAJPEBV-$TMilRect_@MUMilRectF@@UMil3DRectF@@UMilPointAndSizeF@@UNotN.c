/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180204820
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D0360 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180204820 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180204820 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // r8d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rbx
  int v18; // edi
  char v19; // al
  __int64 v20; // rcx
  int Bounds; // eax
  __m128i v22; // xmm1
  unsigned __int64 v23; // xmm0_8
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // edi
  unsigned int v32; // [rsp+20h] [rbp-60h]
  __int128 v33; // [rsp+30h] [rbp-50h] BYREF
  int v34; // [rsp+40h] [rbp-40h]
  unsigned int v35; // [rsp+44h] [rbp-3Ch]
  unsigned int v36; // [rsp+48h] [rbp-38h]
  __int128 v37; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v38[20]; // [rsp+60h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v34 = 0;
  v35 = 0;
  v6 = 0;
  v36 = 0;
  v8 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  *(_DWORD *)(a1 + 32) = v8;
  LOBYTE(v8) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v33 = 0LL;
  if ( (_BYTE)v8 == 2 )
  {
    v11 = *(_DWORD *)(a1 + 136);
    if ( v11 )
    {
      v9 = 0;
      v15 = *(int *)(a1 + 136);
      if ( v11 > 0 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v16);
          v18 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * v16);
          v37 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
          v8 = *(_QWORD *)(v17 + 24);
          if ( v8 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 59LL);
            v20 = *(_QWORD *)(v17 + 24);
            if ( v19 )
            {
              Bounds = CFilterEffect::GetBounds(v20, a2, &v37);
              v9 = Bounds;
              if ( Bounds < 0 )
              {
                v10 = Bounds;
                v32 = 238;
                goto LABEL_3;
              }
            }
            else
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 56LL))(v20, 40LL) )
              {
                v9 = -2147467263;
                v32 = 256;
                goto LABEL_7;
              }
              v22 = *(__m128i *)(v17 + 4);
              *(_QWORD *)&v37 = 0LL;
              v23 = _mm_srli_si128(v22, 8).m128i_u64[0];
              v8 = HIDWORD(v22.m128i_i64[0]);
              *((float *)&v37 + 3) = (float)(HIDWORD(v23) - v22.m128i_i32[1]);
              *((float *)&v37 + 2) = (float)((int)v23 - v22.m128i_i32[0]);
            }
            v6 = v36;
          }
          else
          {
            v37 = *a2;
          }
          v24 = v6 + 1;
          *(_DWORD *)v38 = v18;
          *(_OWORD *)&v38[4] = v37;
          if ( v6 + 1 < v6 )
            break;
          if ( v24 > v35 )
          {
            v28 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&v33, 0x14u, 1, v38);
            v30 = v28;
            v9 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0xC0u);
              goto LABEL_29;
            }
            v6 = v36;
          }
          else
          {
            v25 = v33;
            v9 = 0;
            v26 = v6++;
            v27 = 5 * v26;
            *(_OWORD *)(v33 + 4 * v27) = *(_OWORD *)v38;
            *(_DWORD *)(v25 + 4 * v27 + 16) = *(_DWORD *)&v38[16];
            v36 = v24;
          }
          if ( ++v16 >= v15 )
            goto LABEL_24;
        }
        v9 = -2147024362;
        v30 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_29:
        v10 = v30;
        v32 = 265;
        goto LABEL_3;
      }
    }
    else
    {
      v12 = *a2;
      *(_DWORD *)v38 = 0;
      *(_OWORD *)&v38[4] = v12;
      v13 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&v33, 0x14u, 1, v38);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xC0u);
        v32 = 218;
LABEL_7:
        v10 = v9;
        goto LABEL_3;
      }
    }
LABEL_24:
    (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 216LL))(a1, &v33, a3);
    goto LABEL_25;
  }
  v9 = -2147467259;
  v10 = -2147467259;
  v32 = 212;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v10, v32);
LABEL_25:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v33);
  return v9;
}
