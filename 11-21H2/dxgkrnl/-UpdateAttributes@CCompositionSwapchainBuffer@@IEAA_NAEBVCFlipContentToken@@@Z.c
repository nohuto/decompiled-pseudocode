/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C00832C4
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x1C0083154 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C0078D80 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  int v6; // esi
  char v8; // cl
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int8 *v11; // rdi
  __int64 v12; // rax
  int v13; // r8d
  int v14; // eax
  float *v15; // rax
  __int64 v16; // r8
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // xmm0_8
  __int64 v30; // rax
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  __int64 v34; // xmm0_8

  v4 = *((_DWORD *)a2 + 30);
  v6 = 0;
  v8 = 0;
  if ( *((_DWORD *)this + 21) != v4 )
  {
    *((_DWORD *)this + 21) = v4;
    v8 = 1;
  }
  v9 = *((_DWORD *)a2 + 31);
  if ( *((_DWORD *)this + 22) == v9 )
  {
    v10 = *((_DWORD *)this + 46);
  }
  else
  {
    v8 = 1;
    v10 = *((_DWORD *)this + 46) & 0xFFFFDFFF | (v9 != 0 ? 0x2000 : 0);
    *((_DWORD *)this + 46) = v10;
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 31);
  }
  v11 = (unsigned __int8 *)a2 + 136;
  v12 = *((_QWORD *)a2 + 24);
  if ( *((_QWORD *)this + 7) != v12 )
  {
    *((_QWORD *)this + 7) = v12;
    v8 = 1;
    v10 = v10 & 0xFFFFFFFE | (*((_QWORD *)a2 + 24) != 0LL);
    *((_DWORD *)this + 46) = v10;
  }
  v13 = *((_BYTE *)a2 + 137) & 1;
  if ( ((v10 >> 1) & 1) != v13 )
  {
    v8 = 1;
    *((_DWORD *)this + 46) = v10 & 0xFFFFFFFD | (2 * v13);
  }
  v14 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 24) != v14 )
  {
    *((_DWORD *)this + 24) = v14;
    v8 = 1;
  }
  if ( *((_DWORD *)this + 25) != *((_DWORD *)a2 + 35)
    || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 36)
    || *((_DWORD *)this + 27) != *((_DWORD *)a2 + 37)
    || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 38) )
  {
    v8 = 1;
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a2 + 140);
  }
  v15 = (float *)((char *)this + 120);
  v16 = 6LL;
  do
  {
    v17 = *(float *)((char *)v15 + v11 - (unsigned __int8 *)this - 96);
    if ( *v15 != v17 )
    {
      *v15 = v17;
      v8 = 1;
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v18 = *((float *)a2 + 51);
  if ( *((float *)this + 36) != v18 )
  {
    *((float *)this + 36) = v18;
    v8 = 1;
  }
  v19 = *((float *)a2 + 52);
  if ( *((float *)this + 37) != v19 )
  {
    *((float *)this + 37) = v19;
    v8 = 1;
  }
  v20 = *((float *)a2 + 53);
  if ( *((float *)this + 38) != v20 )
  {
    *((float *)this + 38) = v20;
    v8 = 1;
  }
  v21 = *((float *)a2 + 54);
  if ( *((float *)this + 39) != v21 )
  {
    *((float *)this + 39) = v21;
    v8 = 1;
  }
  if ( *((float *)a2 + 51) != 0.0
    || *((float *)a2 + 52) != 0.0
    || *((float *)a2 + 53) != 0.0
    || (v22 = 0, *((float *)a2 + 54) != 0.0) )
  {
    v22 = 1;
  }
  v23 = *((unsigned int *)this + 46);
  if ( ((*((_DWORD *)this + 46) >> 15) & 1) != v22 )
  {
    v23 = (v22 << 15) | (unsigned int)v23 & 0xFFFF7FFF;
    v8 = 1;
    *((_DWORD *)this + 46) = v23;
  }
  if ( !*((_DWORD *)this + 68) || (v24 = 3, *(_DWORD *)(*((_QWORD *)this + 32) + 16LL) != 4) )
    v24 = *((_DWORD *)a2 + 39);
  if ( *((_DWORD *)this + 12) != v24 )
  {
    *((_DWORD *)this + 12) = v24;
    v8 = 1;
  }
  v25 = v23 ^ (v23 ^ (*v11 << 10)) & 0x400;
  *((_DWORD *)this + 46) = v25;
  if ( (v25 & 0x400) != 0 )
  {
    if ( *((_DWORD *)a2 + 50) && (int)CFlipExBuffer::EnsureHDR10MetaData(this, v23, 1024LL, a4) >= 0 )
    {
      v26 = *((_DWORD *)a2 + 50);
      if ( v26 == 1 )
      {
        v27 = *((_QWORD *)this + 46);
        v28 = *((_DWORD *)a2 + 63);
        v29 = *(_QWORD *)((char *)a2 + 244);
        *(_OWORD *)v27 = *(_OWORD *)((char *)a2 + 228);
        *(_QWORD *)(v27 + 16) = v29;
        *(_DWORD *)(v27 + 24) = v28;
      }
      else if ( v26 == 2 )
      {
        v30 = *((_QWORD *)this + 46);
        v31 = *(_OWORD *)((char *)a2 + 244);
        v32 = *(_OWORD *)((char *)a2 + 260);
        v33 = *(_OWORD *)((char *)a2 + 276);
        v34 = *(_QWORD *)((char *)a2 + 292);
        *(_OWORD *)v30 = *(_OWORD *)((char *)a2 + 228);
        *(_OWORD *)(v30 + 16) = v31;
        *(_OWORD *)(v30 + 32) = v32;
        *(_OWORD *)(v30 + 48) = v33;
        *(_QWORD *)(v30 + 64) = v34;
      }
      v6 = *((_DWORD *)a2 + 50);
    }
    *((_DWORD *)this + 94) = v6;
    return 1;
  }
  return v8;
}
