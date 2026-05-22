/*
 * XREFs of ?UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ @ 0x180132B84
 * Callers:
 *     ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@5@@Z @ 0x18013254C (-FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W.c)
 * Callees:
 *     ??$GetSharedData@G@SharedSectionWrapper@Composition@UI@Windows@@QEAA?AV?$span@$$CBG$0?0@gsl@@XZ @ 0x180131D10 (--$GetSharedData@G@SharedSectionWrapper@Composition@UI@Windows@@QEAA-AV-$span@$$CBG$0-0@gsl@@XZ.c)
 *     ??$GetSharedData@UXMFLOAT3@DirectX@@@SharedSectionWrapper@Composition@UI@Windows@@QEAA?AV?$span@$$CBUXMFLOAT3@DirectX@@$0?0@gsl@@XZ @ 0x180131D6C (--$GetSharedData@UXMFLOAT3@DirectX@@@SharedSectionWrapper@Composition@UI@Windows@@QEAA-AV-$span@.c)
 *     ?CreateFromPoints@BoundingBox@DirectX@@SAXAEAU12@_KPEBUXMFLOAT3@2@1@Z @ 0x1801323EC (-CreateFromPoints@BoundingBox@DirectX@@SAXAEAU12@_KPEBUXMFLOAT3@2@1@Z.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneMesh::UpdateBounds(
        Windows::UI::Composition::Scenes::SceneMesh *this)
{
  __int64 v2; // rcx
  gsl::details *v3; // rax
  struct DirectX::XMFLOAT3 *v4; // rdi
  __int64 v5; // rcx
  unsigned __int16 *v6; // rcx
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __m128 v11; // xmm2
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[4]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v15; // [rsp+48h] [rbp-9h]
  __int128 v16; // [rsp+58h] [rbp+7h] BYREF
  __int128 v17; // [rsp+68h] [rbp+17h] BYREF
  __int64 v18; // [rsp+78h] [rbp+27h]
  struct DirectX::XMFLOAT3 *v19[2]; // [rsp+80h] [rbp+2Fh] BYREF

  memset(v14, 0, 12);
  v2 = *((_QWORD *)this + 24);
  memset(&v14[2], 0, 12);
  if ( v2 )
  {
    v3 = Windows::UI::Composition::SharedSectionWrapper::GetSharedData<DirectX::XMFLOAT3>(v2, (gsl::details *)v19);
  }
  else
  {
    v16 = 0uLL;
    v3 = (gsl::details *)&v16;
  }
  *(_OWORD *)v19 = *(_OWORD *)v3;
  v4 = v19[0];
  if ( v19[0] )
  {
    v5 = *((_QWORD *)this + 23);
    if ( v5 )
    {
      Windows::UI::Composition::SharedSectionWrapper::GetSharedData<unsigned short>(v5, (gsl::details *)&v17);
      if ( (_QWORD)v17 )
      {
        v6 = (unsigned __int16 *)*((_QWORD *)&v17 + 1);
        v7 = (__m128)_xmm;
        v8 = (__m128)_xmm;
        v15 = _xmm;
        v9 = *((_QWORD *)&v17 + 1) + 2 * v17;
        v16 = _xmm;
        if ( *((_QWORD *)&v17 + 1) != v9 )
        {
          do
          {
            v10 = *v6;
            if ( v10 < (unsigned __int64)v4 )
            {
              v11 = _mm_movelh_ps(
                      (__m128)*(unsigned __int64 *)((char *)v19[1] + 12 * v10),
                      (__m128)*((unsigned int *)v19[1] + 3 * v10 + 2));
              v7 = _mm_min_ps(v7, v11);
              v8 = _mm_max_ps(v8, v11);
              v15 = (__int128)v7;
              v16 = (__int128)v8;
            }
            ++v6;
          }
          while ( v6 != (unsigned __int16 *)v9 );
        }
        if ( *((float *)&v16 + 1) >= *(float *)&v15 )
        {
          *(float *)v14 = (float)(*(float *)&v16 + *(float *)&v15) * 0.5;
          *((float *)v14 + 1) = (float)(*((float *)&v15 + 1) + *((float *)&v16 + 1)) * 0.5;
          *(float *)&v14[1] = (float)(*((float *)&v15 + 2) + *((float *)&v16 + 2)) * 0.5;
          *(float *)&v14[2] = (float)(*(float *)&v16 - *(float *)&v15) * 0.5;
          *((float *)&v14[2] + 1) = (float)(*((float *)&v16 + 1) - *((float *)&v15 + 1)) * 0.5;
          *(float *)&v14[3] = (float)(*((float *)&v16 + 2) - *((float *)&v15 + 2)) * 0.5;
        }
      }
    }
    else
    {
      v17 = _xmm;
      v18 = 0x3F8000003F800000LL;
      DirectX::BoundingBox::CreateFromPoints((struct DirectX::BoundingBox *)&v17, (unsigned __int64)v19[0], v19[1]);
      LODWORD(v14[0]) = v17;
      LODWORD(v14[2]) = HIDWORD(v17);
      *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)((char *)&v17 + 4);
      *(_QWORD *)((char *)&v14[2] + 4) = v18;
    }
  }
  v12 = *((_QWORD *)this + 21);
  *(_QWORD *)(v12 + 160) = v14[0];
  *(_DWORD *)(v12 + 168) = v14[1];
  v13 = *((_QWORD *)this + 21);
  *(_QWORD *)(v13 + 172) = v14[2];
  *(_DWORD *)(v13 + 180) = v14[3];
}
