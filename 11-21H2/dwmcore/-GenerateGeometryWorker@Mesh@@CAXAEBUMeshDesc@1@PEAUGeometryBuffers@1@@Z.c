/*
 * XREFs of ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC7D0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC488 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Mesh::GenerateGeometryWorker(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdi
  unsigned int v6; // r11d
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int16 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  __int16 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  float v27; // xmm0_4
  float v28; // xmm1_4
  char v29; // r15
  __int16 v30; // si
  __int16 v31; // bp
  __int64 v32; // rcx
  __int16 v33; // ax

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    v7 = 0LL;
    do
    {
      v8 = *((_QWORD *)a1 + 4);
      if ( *((_BYTE *)a1 + 41) || *(float *)(v8 + 24 * v7 + 20) > 0.0 )
      {
        v9 = *((_QWORD *)a2 + 2) + (int)v4 * *((_DWORD *)a2 + 6);
        *(_QWORD *)v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v7);
        *(_DWORD *)(v9 + 8) = *(_DWORD *)(v8 + 24 * v7 + 8);
        *(_DWORD *)(v9 + 12) = 1065353216;
        v10 = *(_QWORD *)a2;
        v11 = (int)v4 * *((_DWORD *)a2 + 2);
        v12 = *((_QWORD *)a1 + 2);
        v13 = *(float *)(v12 + 8 * v7);
        v14 = *(float *)(v12 + 8 * v7 + 4);
        *(float *)(v10 + v11) = v13;
        *(float *)(v10 + v11 + 4) = v14;
        *(_DWORD *)(v10 + v11 + 8) = 1065353216;
        if ( *(float *)(v9 + 8) != 0.0 )
        {
          *(float *)(v10 + v11) = v13 + *(float *)(v8 + 24 * v7);
          *(float *)(v10 + v11 + 4) = v14 + *(float *)(v8 + 24 * v7 + 4);
        }
        ++v4;
      }
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *((_QWORD *)a1 + 1) );
  }
  v15 = v4;
  if ( *((_BYTE *)a1 + 41) )
  {
    v16 = 2LL;
    v17 = 1LL;
    if ( v4 > 2 )
    {
      do
      {
        if ( v5 >= *((_QWORD *)a2 + 5) )
        {
LABEL_31:
          ((void (__fastcall *)(__int64, unsigned __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
            v16,
            v17);
          __debugbreak();
        }
        v18 = *((_QWORD *)a2 + 6);
        *(_WORD *)(v18 + 2 * v5 + 2) = v17;
        v17 = (unsigned int)v16;
        *(_WORD *)(v18 + 2 * v5 + 4) = v16;
        v16 = (unsigned int)(v16 + 1);
        *(_WORD *)(v18 + 2 * v5) = 0;
        v5 += 3LL;
      }
      while ( (unsigned int)v16 < v4 );
    }
  }
  if ( *((_BYTE *)a1 + 42) )
  {
    v19 = *((_QWORD *)a1 + 1);
    v20 = 0;
    v21 = 0;
    if ( v19 )
    {
      v22 = 0LL;
      do
      {
        v23 = *((_QWORD *)a1 + 4);
        if ( *(float *)(v23 + 24 * v22 + 20) > 0.0 )
        {
          v24 = *((_QWORD *)a2 + 2) + (int)v4 * *((_DWORD *)a2 + 6);
          *(_QWORD *)v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v22);
          *(_DWORD *)(v24 + 8) = *(_DWORD *)(v23 + 24 * v22 + 20);
          *(_DWORD *)(v24 + 12) = 0;
          v25 = *((_QWORD *)a1 + 2);
          v26 = *(_QWORD *)a2 + (int)v4 * *((_DWORD *)a2 + 2);
          v27 = *(float *)(v23 + 24 * v22 + 12) + *(float *)(v25 + 8 * v22);
          v28 = *(float *)(v25 + 8 * v22 + 4) + *(float *)(v23 + 24 * v22 + 16);
          *(_DWORD *)(v26 + 8) = 1065353216;
          *(float *)v26 = v27;
          *(float *)(v26 + 4) = v28;
          if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v22) == 3 )
          {
            v17 = (unsigned __int64)(v20 + 1) % *((_QWORD *)a1 + 1);
            v16 = 3LL * (unsigned int)v17;
            if ( *(float *)(*((_QWORD *)a1 + 4) + 24LL * (unsigned int)v17 + 20) > 0.0 )
            {
              v29 = *((_BYTE *)a1 + 41);
              v30 = v15 + v21;
              v31 = 0;
              if ( (_DWORD)v17 )
                v31 = v21 + 1;
              if ( !v29 )
                LOWORD(v17) = v31;
              if ( v5 >= *((_QWORD *)a2 + 5) )
                goto LABEL_31;
              v32 = *((_QWORD *)a2 + 6);
              *(_WORD *)(v32 + 2 * v5 + 2) = v15 + v31;
              v33 = v20;
              if ( !v29 )
                v33 = v21;
              *(_WORD *)(v32 + 2 * v5) = v30;
              *(_WORD *)(v32 + 2 * v5 + 10) = v33;
              *(_WORD *)(v32 + 2 * v5 + 4) = v17;
              *(_WORD *)(v32 + 2 * v5 + 6) = v30;
              *(_WORD *)(v32 + 2 * v5 + 8) = v17;
              v5 += 6LL;
            }
          }
          v19 = *((_QWORD *)a1 + 1);
          ++v4;
          ++v21;
        }
        v22 = ++v20;
      }
      while ( v20 < v19 );
    }
  }
  *((_QWORD *)a2 + 4) = v4;
  *((_QWORD *)a2 + 7) = v5;
}
