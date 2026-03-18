/*
 * XREFs of ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x18007D698
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180044E04 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180046190 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CComposition::CleanPossibleDirtyInputSinkList(CComposition *this)
{
  unsigned int v2; // r13d
  __int64 *v3; // r15
  __int64 *v4; // rbx
  __int64 v6; // rdi
  int v7; // r14d
  __int64 *v8; // r12
  const void *v9; // rdx
  int v10; // eax
  _BYTE v11[4]; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h]
  __int64 v13; // [rsp+40h] [rbp-21h]
  __int64 v14; // [rsp+48h] [rbp-19h]
  __int64 v15; // [rsp+54h] [rbp-Dh]
  __int64 v16; // [rsp+5Ch] [rbp-5h]
  void *v17; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+27h]

  v2 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v15 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 165);
    v4 = (__int64 *)*((_QWORD *)this + 164);
    if ( !(v3 - v4) )
      break;
    v6 = *((_QWORD *)this + 166);
    v7 = 0;
    *((_QWORD *)this + 166) = 0LL;
    v8 = v4;
    *((_QWORD *)this + 164) = 0LL;
    *((_QWORD *)this + 165) = 0LL;
    if ( v4 != v3 )
    {
      while ( 1 )
      {
        v9 = (const void *)*v8;
        if ( (*(_BYTE *)(*v8 + 96) & 0x20) != 0 )
        {
          v20 = 0LL;
          v19 = 0LL;
          v10 = CVisualTreeIterator::WalkSubtree<CInputSinkContext>((__int64)v11, (__int64)v9, v9, (__int64)v11);
          v7 = v10;
          v2 = v10;
          if ( v10 < 0 )
            break;
        }
        if ( ++v8 == v3 )
          goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v10, 0x4Au);
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v7, 0xEDBu);
      if ( v4 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v4, v3);
        std::_Deallocate<16,0>(v4, (v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      break;
    }
LABEL_8:
    v2 = v7;
    if ( v7 < 0 )
      goto LABEL_12;
    if ( v4 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v4, v3);
      std::_Deallocate<16,0>(v4, (v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  DefaultHeap::Free(v17);
  return v2;
}
