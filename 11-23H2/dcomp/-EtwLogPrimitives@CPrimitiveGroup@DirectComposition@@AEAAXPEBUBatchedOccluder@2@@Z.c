/*
 * XREFs of ?EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z @ 0x1800F9BC4
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ??$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x180004824 (--$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA-AV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C054 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A80C0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqqqffffhhbr10hbr12_EventWriteTransfer @ 0x1800FAA1C (McTemplateU0qqqqqffffhhbr10hbr12_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::EtwLogPrimitives(
        DirectComposition::CPrimitiveGroup *this,
        const struct DirectComposition::BatchedOccluder *a2)
{
  char *v3; // rdx
  __int64 v4; // rax
  char v5; // bl
  bool v6; // zf
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  float *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r14
  __int64 v12; // rdx
  float *v13; // rax
  char *v14; // rax
  float *v15; // rsi
  char *v16; // rcx
  int v17; // xmm6_4
  int v18; // xmm7_4
  int v19; // xmm8_4
  int v20; // r14d
  int v21; // xmm9_4
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  int v31; // edx
  __int128 v32; // xmm0
  unsigned int v33; // ecx
  int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  int v37; // eax
  char v38; // al
  const struct DirectComposition::BatchedOccluder *v39; // rdx
  unsigned int v40; // eax
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // r14d
  int v49; // xmm6_4
  int v50; // xmm7_4
  int v51; // xmm8_4
  int v52; // esi
  int v53; // xmm9_4
  int v54; // edi
  int v55; // eax
  int v56; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v57; // [rsp+80h] [rbp-80h]
  unsigned int v58; // [rsp+84h] [rbp-7Ch]
  int v59; // [rsp+88h] [rbp-78h]
  float *v60; // [rsp+90h] [rbp-70h]
  _OWORD v61[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h]
  const struct DirectComposition::BatchedOccluder *v63; // [rsp+C0h] [rbp-40h]
  __int128 v64; // [rsp+C8h] [rbp-38h] BYREF
  float v65[6]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v66[250]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v67[400]; // [rsp+1090h] [rbp+F90h] BYREF

  v63 = a2;
  if ( *((_DWORD *)this + 62) )
  {
    v3 = (char *)this + 256;
    v59 = 0;
    v4 = *((_QWORD *)this + 32);
    v5 = 3;
    v6 = v4 == (_QWORD)this + 256;
    v7 = 0;
    v8 = 0;
    v64 = 0LL;
    v9 = (float *)(v4 - 24);
    v10 = 0;
    if ( v6 )
      v9 = 0LL;
    v60 = v9;
    if ( *((_DWORD *)this + 52) )
    {
      do
      {
        v11 = *((_QWORD *)this + 23) + 80LL * v10;
        v62 = v11;
        if ( *(_DWORD *)(v11 + 40) == -1 )
        {
          v57 = 0;
        }
        else
        {
          v12 = *((_QWORD *)this + 27) + 40LL * *(unsigned int *)(v11 + 40);
          v13 = DirectComposition::ComputeTransformedRectBounds<D2D_RECT_F>(v65, v12, (float *)(v12 + 16), 0LL);
          v9 = v60;
          v3 = (char *)this + 256;
          v57 = 1;
          v64 = *(_OWORD *)v13;
        }
        v58 = 0;
        if ( *(_DWORD *)(v11 + 8) )
        {
          do
          {
            if ( !v9 )
              break;
            v14 = (char *)*((_QWORD *)v9 + 3);
            v15 = v9;
            *(_QWORD *)&v61[0] = v9;
            v16 = v14 - 24;
            if ( v14 == v3 )
              v16 = 0LL;
            v60 = (float *)v16;
            if ( v8 >= 0xC8 )
            {
              if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x40) != 0 )
              {
                v17 = *((_DWORD *)this + 101);
                v18 = *((_DWORD *)this + 100);
                v19 = *((_DWORD *)this + 99);
                v20 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
                v21 = *((_DWORD *)this + 98);
                v22 = *((_DWORD *)this + 62);
                v23 = *((_DWORD *)this + 52);
                v24 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 160LL)
                                                                        + 8LL))(
                        *(_QWORD *)(*((_QWORD *)this + 6) + 160LL),
                        v3,
                        0LL);
                McTemplateU0qqqqqffffhhbr10hbr12_EventWriteTransfer(
                  (unsigned int)v67,
                  v25,
                  v24,
                  v20,
                  v5,
                  v23,
                  v22,
                  v21,
                  v19,
                  v18,
                  v17,
                  v56,
                  8 * v7,
                  (__int64)v67,
                  20 * v8,
                  (__int64)v66);
                v15 = *(float **)&v61[0];
                v11 = v62;
              }
              v5 &= ~1u;
              v8 = 0;
              v7 = 0;
            }
            v26 = v8++;
            v27 = 5 * v26;
            *(_OWORD *)((char *)v66 + 4 * v27) = 0LL;
            *((_DWORD *)&v66[1] + v27) = 0;
            v28 = (*(__int64 (__fastcall **)(float *, char *, _QWORD))(*(_QWORD *)v15 + 184LL))(v15, v3, 0LL);
            v29 = v57;
            v30 = 0;
            v31 = *((_DWORD *)&v66[1] + v27) ^ (*((_DWORD *)&v66[1] + v27) ^ v28) & 0x1F;
            *((_DWORD *)&v66[1] + v27) = v31;
            v61[0] = *(_OWORD *)(v15 + 46);
            if ( v57 )
            {
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                (__int64)v61,
                (__int64)&v64);
              v31 = *((_DWORD *)&v66[1] + v27);
            }
            v32 = v61[0];
            v61[1] = v61[0];
            v33 = v31 & 0xFFFFFFDF | (v58 == 0 ? 0x20 : 0);
            v34 = v30;
            v35 = (v29 << 6) | v33 & 0xFFFFFFBF;
            *((_DWORD *)&v66[1] + v27) = v35;
            *(_OWORD *)((char *)v66 + 4 * v27) = v32;
            if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15[24] - 1.0)) & _xmm) > 9.999999717180685e-10 )
              v34 = 128;
            v36 = v35 & 0xFFFFFF7F | v34;
            *((_DWORD *)&v66[1] + v27) = v36;
            if ( (v36 & 0x80) != 0 )
            {
              v37 = 256;
              if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15[24]) & _xmm) > 9.999999717180685e-10 )
                v37 = v30;
              *((_DWORD *)&v66[1] + v27) = v36 & 0xFFFFFEFF | v37;
            }
            v38 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v15 + 96LL))(v15);
            v39 = v63;
            v40 = (v38 != 0 ? 0 : 0x800) | *((_DWORD *)&v66[1] + v27) & 0xFFFFF7FF;
            *((_DWORD *)&v66[1] + v27) = v40;
            v41 = v40;
            if ( v39 && v15 == *((float **)v39 + 3) )
            {
              v41 = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)(*((unsigned __int8 *)v39 + 16) << 13)) & 0x2000 | 0x1000;
              *((_DWORD *)&v66[1] + v27) = v41;
            }
            v42 = *((_QWORD *)v15 + 13);
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 16);
              v44 = v7++;
              *((_DWORD *)&v66[1] + v27) = v41 | 0x200;
              v67[v44] = v43;
            }
            v45 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v15 + 80LL))(v15);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 16);
              v47 = v7++;
              *((_DWORD *)&v66[1] + v27) |= 0x400u;
              v67[v47] = v46;
            }
            v3 = (char *)this + 256;
            v9 = v60;
            ++v58;
          }
          while ( v58 < *(_DWORD *)(v11 + 8) );
          v10 = v59;
        }
        v48 = *((_DWORD *)this + 52);
        v3 = (char *)this + 256;
        v59 = ++v10;
      }
      while ( v10 < v48 );
      if ( v8 )
      {
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x40) != 0 )
        {
          v49 = *((_DWORD *)this + 101);
          v50 = *((_DWORD *)this + 100);
          v51 = *((_DWORD *)this + 99);
          v52 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
          v53 = *((_DWORD *)this + 98);
          v54 = *((_DWORD *)this + 62);
          v55 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 160LL) + 8LL))(
                  *(_QWORD *)(*((_QWORD *)this + 6) + 160LL),
                  v3,
                  0LL);
          McTemplateU0qqqqqffffhhbr10hbr12_EventWriteTransfer(
            (unsigned int)v67,
            (unsigned int)v66,
            v55,
            v52,
            v5,
            v48,
            v54,
            v53,
            v51,
            v50,
            v49,
            v56,
            8 * v7,
            (__int64)v67,
            20 * v8,
            (__int64)v66);
        }
      }
    }
  }
}
