/*
 * XREFs of ?UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z @ 0x1800A55E0
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18004C348 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAAPEAVCPreWalkVisual@CPreComputeContext@@QEAV23@AEAPEAVCVisual@@AEA_N2@Z @ 0x1800B8134 (--$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@-$vector@VCPreWalkVisual@CPreComputeContext@@V.c)
 *     ?Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@@Z @ 0x1800D104C (-Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV-$vector@VCPreWa.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ResolveTransformParent@CVisual@@IEBA_NPEBVCVisualTree@@@Z @ 0x1800DAD1C (-ResolveTransformParent@CVisual@@IEBA_NPEBVCVisualTree@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1801F7950 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 */

void __fastcall CPreComputeContext::UpdatePreWalkVisuals(CPreComputeContext *this, const struct CVisualTree *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  CPreComputeContext::CPreWalkVisual *v5; // rdi
  CPreComputeContext::CPreWalkVisual *v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  CPreComputeContext::CPreWalkVisual *i; // rsi
  CVisual **v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rdi
  CVisual *v14; // r14
  unsigned int v15; // ecx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  CPreComputeContext::CPreWalkVisual *v21; // rax
  CPreComputeContext::CPreWalkVisual *v22[2]; // [rsp+30h] [rbp-38h] BYREF
  CPreComputeContext::CPreWalkVisual *v23; // [rsp+40h] [rbp-28h]
  CPreComputeContext *v24; // [rsp+80h] [rbp+18h] BYREF
  char v25; // [rsp+88h] [rbp+20h] BYREF
  __int64 v26; // [rsp+90h] [rbp+28h] BYREF

  v24 = this;
  v2 = 0LL;
  v4 = *((_QWORD *)a2 + 8);
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  if ( (*(_BYTE *)(v4 + 96) & 1) != 0 )
  {
    v11 = *((_DWORD *)g_pComposition + 260);
    if ( v11 )
    {
      v12 = 0LL;
      v13 = v11;
      do
      {
        v14 = *(CVisual **)(v12 + *((_QWORD *)g_pComposition + 127));
        if ( CVisual::ResolveTransformParent(v14, a2) )
          CPreComputeContext::CPreWalkVisual::Add((_DWORD)v14, (_DWORD)a2, 0, 0, (__int64)v22);
        else
          CVisual::InvalidateTransformParent(v14, a2);
        v12 += 8LL;
        --v13;
      }
      while ( v13 );
    }
    v5 = v22[1];
    v6 = v22[0];
    v15 = *((_DWORD *)g_pComposition + 268);
    if ( v15 )
    {
      v16 = v15;
      do
      {
        LOBYTE(v24) = 0;
        v25 = 1;
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + *((_QWORD *)g_pComposition + 131)) + 200LL))(*(_QWORD *)(v2 + *((_QWORD *)g_pComposition + 131)));
        v26 = v17;
        v18 = v17;
        v19 = v17;
        if ( v17 )
        {
          v20 = v17;
          while ( v19 != *((_QWORD *)a2 + 8) )
          {
            if ( !v20 || (v20 = *(_QWORD *)(v20 + 88)) == 0 || v19 != v20 && (v20 = *(_QWORD *)(v20 + 88), v19 != v20) )
            {
              v19 = *(_QWORD *)(v19 + 88);
              if ( v19 )
                continue;
            }
            goto LABEL_24;
          }
          v21 = v6;
          if ( v6 == v5 )
            goto LABEL_29;
          while ( *(_QWORD *)v21 != v18 )
          {
            v21 = (CPreComputeContext::CPreWalkVisual *)((char *)v21 + 16);
            if ( v21 == v5 )
              goto LABEL_29;
          }
          if ( v21 == v5 )
          {
LABEL_29:
            if ( v5 == v23 )
            {
              std::vector<CPreComputeContext::CPreWalkVisual>::_Emplace_reallocate<CVisual * &,bool &,bool &>(
                (unsigned int)v22,
                (_DWORD)v5,
                (unsigned int)&v26,
                (unsigned int)&v25,
                (__int64)&v24);
              v5 = v22[1];
              v6 = v22[0];
            }
            else
            {
              *(_QWORD *)v5 = v18;
              *((_WORD *)v5 + 4) = 1;
              v5 = (CPreComputeContext::CPreWalkVisual *)((char *)v5 + 16);
              v22[1] = v5;
            }
          }
          else
          {
            *((_BYTE *)v21 + 8) |= 1u;
          }
        }
LABEL_24:
        v2 += 8LL;
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    v5 = v22[1];
    v6 = v22[0];
  }
  if ( CPreComputeContext::s_projectedShadowsEnabled )
  {
    v7 = (_QWORD *)*((_QWORD *)g_pComposition + 136);
    v8 = (_QWORD *)*((_QWORD *)g_pComposition + 135);
    if ( v8 != v7 )
    {
      do
        CPreComputeContext::CPreWalkVisual::Add(*v8++, (_DWORD)a2, 0, 1, (__int64)v22);
      while ( v8 != v7 );
      v5 = v22[1];
      v6 = v22[0];
    }
  }
  for ( i = v6; i != v5; i = (CPreComputeContext::CPreWalkVisual *)((char *)i + 16) )
    CPreComputeContext::CPreWalkVisual::UpdateTransform(i, a2);
  v10 = (CVisual **)v6;
  if ( v6 != v5 )
  {
    do
    {
      CPreComputeContext::CPreWalkVisual::UpdateTransformChildBounds(v10, a2);
      v10 += 2;
    }
    while ( v10 != (CVisual **)v5 );
  }
  if ( v6 )
    std::_Deallocate<16,0>(v6, (v23 - v6) & 0xFFFFFFFFFFFFFFF0uLL);
}
