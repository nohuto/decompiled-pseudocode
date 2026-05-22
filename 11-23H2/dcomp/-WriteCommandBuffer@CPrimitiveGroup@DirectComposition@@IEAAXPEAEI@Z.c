/*
 * XREFs of ?WriteCommandBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEI@Z @ 0x180034144
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::WriteCommandBuffer(
        DirectComposition::CPrimitiveGroup *this,
        unsigned __int8 *a2)
{
  int v2; // r12d
  int v3; // r13d
  __int64 v4; // r14
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v7; // r15
  __int64 v8; // rdi
  unsigned __int8 *v9; // rbx
  void *v10; // rcx
  unsigned __int8 *v11; // rbx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _DWORD *v20; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v3 = -1;
  v21 = *((_DWORD *)this + 62);
  v4 = 0LL;
  v5 = a2;
  if ( *((_DWORD *)this + 52) )
  {
    v7 = a2 - 144;
    do
    {
      v8 = *((_QWORD *)this + 23) + 80 * v4;
      v20 = *(_DWORD **)v8;
      if ( *(_DWORD *)(v8 + 40) != v3 )
      {
        v11 = v5;
        v7 += 144;
        v5 += 144;
        memset_0(v11, 0, 0x90uLL);
        *(_DWORD *)v11 = 1;
        *((_DWORD *)v11 + 5) = 1;
        *((_DWORD *)v11 + 1) = 32;
        *((_DWORD *)v11 + 4) = 148 * (*(_DWORD *)(v8 + 40) + v21 + 1);
        v3 = *(_DWORD *)(v8 + 40);
      }
      v7 += 144;
      v9 = v5;
      v10 = v5 + 4;
      v5 += 144;
      memset_0(v10, 0, 0x8CuLL);
      *(_DWORD *)v9 = 1;
      *((_DWORD *)v9 + 1) = *(_BYTE *)(v8 + 60) == 0 ? 0x11 : 0;
      *((_DWORD *)v9 + 4) = v2;
      *((_DWORD *)v9 + 5) = *(_DWORD *)(v8 + 8);
      *((_DWORD *)v9 + 2) = v20[52];
      *((_DWORD *)v9 + 3) = v20[52] != -1;
      *((_DWORD *)v9 + 10) = v20[50];
      *((_DWORD *)v9 + 11) = 1;
      *((_DWORD *)v9 + 12) = *(_DWORD *)(v8 + 64);
      *((_DWORD *)v9 + 13) = *(_DWORD *)(v8 + 68);
      *((_DWORD *)v9 + 14) = v20[51];
      *((_DWORD *)v9 + 15) = 1;
      *((_DWORD *)v9 + 16) = *(_DWORD *)(v8 + 72);
      *((_DWORD *)v9 + 17) = *(_DWORD *)(v8 + 76);
      if ( !*(_BYTE *)(v8 + 60) )
      {
        v12 = *((_OWORD *)v7 + 1);
        *(_OWORD *)v5 = *(_OWORD *)v7;
        v13 = *((_OWORD *)v7 + 2);
        *((_OWORD *)v5 + 1) = v12;
        v14 = *((_OWORD *)v7 + 3);
        *((_OWORD *)v5 + 2) = v13;
        v15 = *((_OWORD *)v7 + 4);
        *((_OWORD *)v5 + 3) = v14;
        v16 = *((_OWORD *)v7 + 5);
        *((_OWORD *)v5 + 4) = v15;
        v17 = *((_OWORD *)v7 + 6);
        *((_OWORD *)v5 + 5) = v16;
        v18 = *((_OWORD *)v7 + 7);
        *((_OWORD *)v5 + 6) = v17;
        v19 = *((_OWORD *)v7 + 8);
        *((_OWORD *)v5 + 7) = v18;
        *((_OWORD *)v5 + 8) = v19;
        *((_DWORD *)v5 + 1) = 2;
        v5 += 144;
        v7 += 144;
      }
      v4 = (unsigned int)(v4 + 1);
      v2 += 148 * *(_DWORD *)(v8 + 8);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 52) );
  }
}
