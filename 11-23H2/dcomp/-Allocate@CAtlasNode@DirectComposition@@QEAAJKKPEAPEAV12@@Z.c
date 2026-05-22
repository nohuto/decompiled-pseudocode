/*
 * XREFs of ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z @ 0x180020ED0
 * Callers:
 *     ?AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z @ 0x18001FF98 (-AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z @ 0x180020ED0 (-Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z.c)
 * Callees:
 *     ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z @ 0x180020ED0 (-Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z @ 0x180085A18 (--_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CAtlasNode::Allocate(
        DirectComposition::CAtlasNode *this,
        unsigned int a2,
        unsigned int a3,
        struct DirectComposition::CAtlasNode **a4)
{
  unsigned int v4; // edi
  int v9; // r15d
  DirectComposition::CAtlasNode *v10; // rcx
  DirectComposition::CAtlasNode *v11; // rcx
  int v12; // r10d
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  _DWORD *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  _DWORD *v23; // rax
  DirectComposition::CAtlasNode *v25; // rcx
  unsigned int v26; // ecx
  int v27; // edx
  unsigned int v28; // r12d
  int v29; // r13d
  int v30; // r11d
  char v31; // r8
  int v32; // eax
  int v33; // r10d
  unsigned int v34; // r9d
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // ecx
  HANDLE ProcessHeap; // rax
  _DWORD *v39; // rax
  HANDLE v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  int v43; // ecx
  int v44; // eax
  int v45; // r10d
  unsigned int v46; // r12d
  int v47; // r13d
  _DWORD *v48; // rax
  unsigned int v49; // r9d
  DirectComposition::CAtlasNode *v50; // rcx
  unsigned int v51; // [rsp+20h] [rbp-58h]
  unsigned int v52; // [rsp+20h] [rbp-58h]
  unsigned int v53; // [rsp+24h] [rbp-54h]
  unsigned int v54; // [rsp+28h] [rbp-50h]
  int v55; // [rsp+2Ch] [rbp-4Ch]
  __int128 v56; // [rsp+30h] [rbp-48h]
  int v57; // [rsp+80h] [rbp+8h]
  int v58; // [rsp+80h] [rbp+8h]
  int v59; // [rsp+88h] [rbp+10h]
  int v60; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v9 = 0;
  if ( a2 <= *((_DWORD *)this + 16) && a3 <= *((_DWORD *)this + 17) && a3 * a2 <= *((_DWORD *)this + 18) )
  {
    if ( *((_DWORD *)this + 14) && *((_DWORD *)this + 15) || *((_QWORD *)this + 5) )
      goto LABEL_6;
    if ( *(_OWORD *)((char *)this + 24) != 0LL )
    {
      if ( a2 > *((_DWORD *)this + 12) || a3 > *((_DWORD *)this + 13) )
        goto LABEL_6;
      if ( *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
      {
        v46 = *((_DWORD *)this + 12);
        if ( a2 < v46 || a3 < *((_DWORD *)this + 13) )
        {
          v47 = *((_DWORD *)this + 13);
          v60 = *(_DWORD *)this;
          v52 = v46 + *(_DWORD *)this;
          v58 = *((_DWORD *)this + 1);
          v48 = DefaultHeap::Alloc(0x50uLL);
          if ( !v48 )
          {
            *((_QWORD *)this + 5) = 0LL;
            v9 = -2147024882;
            goto LABEL_39;
          }
          *v48 = v60;
          v48[1] = v58;
          v48[2] = v52;
          v48[3] = v58 + v47;
          v48[16] = v46;
          *((_QWORD *)v48 + 2) = 0LL;
          *((_QWORD *)v48 + 3) = 0LL;
          *((_QWORD *)v48 + 4) = 0LL;
          *((_QWORD *)v48 + 5) = 0LL;
          v48[18] = v47 * v46;
          *((_QWORD *)v48 + 7) = 0LL;
          v48[17] = v47;
          *((_QWORD *)this + 5) = v48;
          goto LABEL_6;
        }
      }
    }
    *((_DWORD *)this + 14) = a2;
    *((_DWORD *)this + 15) = a3;
    *a4 = this;
LABEL_6:
    if ( *a4 )
      goto LABEL_13;
    v10 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 5);
    if ( v10 )
    {
      v9 = DirectComposition::CAtlasNode::Allocate(v10, a2, a3, a4);
      if ( v9 < 0 )
        goto LABEL_39;
    }
    if ( *a4 )
    {
LABEL_13:
      if ( v9 >= 0 )
      {
        if ( *a4 )
          goto LABEL_15;
        v25 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 4);
        if ( v25 )
          v9 = DirectComposition::CAtlasNode::Allocate(v25, a2, a3, a4);
      }
LABEL_39:
      if ( !*a4 )
        return (unsigned int)v9;
LABEL_15:
      v12 = *((_DWORD *)this + 14);
      v13 = 0;
      v14 = 0;
      if ( v12 && *((_DWORD *)this + 15) || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) || *((_QWORD *)this + 5) )
      {
        v15 = (_DWORD *)*((_QWORD *)this + 3);
        if ( v15 || *((_QWORD *)this + 4) || *((_QWORD *)this + 5) )
        {
          if ( !v12 || !*((_DWORD *)this + 15) )
          {
            v45 = *((_DWORD *)this + 12);
            if ( v45 )
              v4 = *((_DWORD *)this + 12);
            if ( *((_DWORD *)this + 13) )
              v13 = *((_DWORD *)this + 13);
            if ( v45 * *((_DWORD *)this + 13) )
              v14 = v45 * *((_DWORD *)this + 13);
          }
          if ( v15 )
          {
            v16 = v15[17];
            v17 = v15[18];
            v18 = v15[16];
            if ( v18 <= v4 )
              v18 = v4;
            v4 = v18;
            if ( v16 <= v13 )
              v16 = v13;
            v13 = v16;
            if ( v17 > v14 )
              v14 = v17;
          }
          v19 = (_DWORD *)*((_QWORD *)this + 4);
          if ( v19 )
          {
            v20 = v19[17];
            v21 = v19[18];
            v22 = v19[16];
            if ( v22 <= v4 )
              v22 = v4;
            v4 = v22;
            if ( v20 <= v13 )
              v20 = v13;
            v13 = v20;
            if ( v21 > v14 )
              v14 = v21;
          }
          v23 = (_DWORD *)*((_QWORD *)this + 5);
          if ( v23 )
          {
            if ( v23[16] > v4 )
              v4 = v23[16];
            if ( v23[17] > v13 )
              v13 = v23[17];
            if ( v23[18] > v14 )
              v14 = v23[18];
          }
        }
        else
        {
          v4 = *((_DWORD *)this + 2) - *(_DWORD *)this;
          v13 = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
          v14 = v13 * (*((_DWORD *)this + 2) - v12 - *(_DWORD *)this);
          if ( v4 * (v13 - *((_DWORD *)this + 15)) > v14 )
            v14 = v4 * (*((_DWORD *)this + 3) - *((_DWORD *)this + 1) - *((_DWORD *)this + 15));
        }
      }
      else
      {
        v4 = *((_DWORD *)this + 2) - *(_DWORD *)this;
        v13 = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
        v14 = v13 * v4;
      }
      *((_DWORD *)this + 16) = v4;
      *((_DWORD *)this + 17) = v13;
      *((_DWORD *)this + 18) = v14;
      return (unsigned int)v9;
    }
    if ( *((_QWORD *)this + 3) || *((_QWORD *)this + 4) || *((_QWORD *)this + 5) )
      goto LABEL_10;
    v26 = *((_DWORD *)this + 15);
    v27 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 12) = v27;
    *((_DWORD *)this + 13) = v26;
    v28 = *((_DWORD *)this + 3);
    v29 = *((_DWORD *)this + 1);
    if ( a3 <= v28 - v26 - v29 )
    {
      v49 = v26;
      v31 = 1;
      if ( a3 > v26 && a2 <= *((_DWORD *)this + 2) - v27 - *(_DWORD *)this && a3 < (5 * v26) >> 2 )
      {
        *((_DWORD *)this + 13) = a3;
        v49 = a3;
      }
      v32 = v49 + v29;
      v30 = v49 + v29;
      v57 = v49 + v29;
    }
    else
    {
      v30 = v26 + v29;
      v31 = 0;
      v57 = v26 + v29;
      v32 = *((_DWORD *)this + 3);
    }
    v33 = *(_DWORD *)this;
    v51 = *((_DWORD *)this + 2);
    v59 = v32;
    v55 = *(_DWORD *)this;
    v34 = v27 + *(_DWORD *)this;
    LODWORD(v56) = *(_DWORD *)this;
    v35 = v51;
    v53 = v34;
    if ( !v31 )
      v35 = v34;
    DWORD1(v56) = v30;
    v54 = v35;
    v36 = *((_DWORD *)this + 2) - v34;
    *((_QWORD *)&v56 + 1) = __PAIR64__(v28, v35);
    v37 = v32 - v29;
    if ( (a2 > v36 || a3 > v37) && (a2 > v35 - v33 || a3 > v28 - v30) )
    {
LABEL_10:
      if ( !*a4 )
      {
        v11 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 3);
        if ( v11 )
          v9 = DirectComposition::CAtlasNode::Allocate(v11, a2, a3, a4);
      }
      goto LABEL_13;
    }
    if ( v36 && v37 )
    {
      ProcessHeap = GetProcessHeap();
      v39 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      if ( !v39 )
        goto LABEL_104;
      v33 = v55;
      v30 = v57;
      v39[3] = v59;
      v39[2] = v51;
      *v39 = v53;
      v39[1] = v29;
      v39[17] = v59 - v29;
      v39[16] = v51 - v53;
      v35 = v54;
      *((_QWORD *)v39 + 2) = 0LL;
      *((_QWORD *)v39 + 3) = 0LL;
      v39[18] = (v51 - v53) * (v59 - v29);
      *((_QWORD *)v39 + 4) = 0LL;
      *((_QWORD *)v39 + 5) = 0LL;
      *((_QWORD *)v39 + 7) = 0LL;
      *((_QWORD *)this + 3) = v39;
    }
    if ( v28 == v30 || *((_QWORD *)this + 4) || v35 == v33 )
      goto LABEL_10;
    v40 = GetProcessHeap();
    v41 = HeapAlloc(v40, 0, 0x50uLL);
    v42 = v41;
    if ( v41 )
    {
      v41[2] = 0LL;
      v41[3] = 0LL;
      *(_OWORD *)v41 = v56;
      v41[4] = 0LL;
      v41[5] = 0LL;
      v41[7] = 0LL;
      v43 = *((_DWORD *)v41 + 2) - *(_DWORD *)v41;
      *((_DWORD *)v41 + 16) = v43;
      v44 = *((_DWORD *)v41 + 3) - *((_DWORD *)v41 + 1);
      *((_DWORD *)v42 + 17) = v44;
      *((_DWORD *)v42 + 18) = v43 * v44;
      *((_QWORD *)this + 4) = v42;
      goto LABEL_10;
    }
    v50 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 4) = 0LL;
    if ( v50 )
      DirectComposition::CAtlasNode::`scalar deleting destructor'(v50, 0);
LABEL_104:
    *((_QWORD *)this + 3) = 0LL;
    v9 = -2147024882;
    goto LABEL_39;
  }
  return 0LL;
}
