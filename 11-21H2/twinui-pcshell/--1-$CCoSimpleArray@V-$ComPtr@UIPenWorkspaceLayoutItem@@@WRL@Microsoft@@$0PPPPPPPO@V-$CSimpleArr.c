/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1803BB89C
 * Callers:
 *     _PWSLayoutPolicyManager::GetPenWorkspaceLayout_::_1_::dtor$0 @ 0x1803BBFA7 (_PWSLayoutPolicyManager--GetPenWorkspaceLayout_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::Populate_::_1_::dtor$1 @ 0x1803BC35D (_PWSLayoutPolicyManager--Populate_--_1_--dtor$1.c)
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x1803BD152 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--_Emplace_reall.c)
 *     _std::_Uninitialized_move_ParsedPenWorkspaceLayout___std::allocator_ParsedPenWorkspaceLayout____::_1_::dtor$1 @ 0x1803BD266 (_std--_Uninitialized_move_ParsedPenWorkspaceLayout___std--allocator_ParsedPenWorksp_ea_1803BD266.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>()
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll();
}
