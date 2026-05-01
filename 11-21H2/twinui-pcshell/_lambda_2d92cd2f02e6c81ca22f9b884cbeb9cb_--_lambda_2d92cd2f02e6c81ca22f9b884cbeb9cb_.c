/*
 * XREFs of _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_ @ 0x180537BB8
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180537804 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180537898 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_ed.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180537BF0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lamb.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  return a1;
}
