/*
 * XREFs of ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1801F8594
 * Callers:
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x180047470 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009C330 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18004C27C (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetDirtyRegionVisualizationData(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  _QWORD *v3; // r11
  _DWORD *v5; // r10
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  char v9; // r11
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // r11

  v2 = (__int64 *)(a1 + 232);
  v3 = 0LL;
  v5 = (_DWORD *)*v2;
  result = *(unsigned int *)*v2;
  if ( a2 )
  {
    if ( (result & 0x80000) == 0 )
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 13);
      *(_QWORD *)result = a2;
      return result;
    }
    v10 = (unsigned int)v5[1];
    v11 = v5 + 2;
    result = 0LL;
    if ( (_DWORD)v10 )
    {
      while ( *v11 != 13 )
      {
        result = (unsigned int)(result + 1);
        ++v11;
        if ( (unsigned int)result >= (unsigned int)v10 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( (unsigned int)result >= (unsigned int)v10 )
      {
LABEL_11:
        *v3 = a2;
        return result;
      }
    }
    v12 = 8LL * (unsigned int)result;
    result = ((_BYTE)v10 + 15) & 7;
    v3 = (_QWORD *)((char *)v5 + v12 - result + v10 + 15);
    goto LABEL_11;
  }
  if ( (result & 0x80000) != 0 )
  {
    v7 = *v2;
    *v5 = result & 0xFFF7FFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 13);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v9;
    }
  }
  return result;
}
