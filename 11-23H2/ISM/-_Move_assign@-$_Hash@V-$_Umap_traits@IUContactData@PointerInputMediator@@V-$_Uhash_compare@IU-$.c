/*
 * XREFs of ?_Move_assign@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800FD260
 * Callers:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FCD7C (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800FD5AC (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Move_assign(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::clear(a1);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v4;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  v7 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = v6;
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v7;
  v9 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v8;
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v9;
  v11 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v10;
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v11;
  v13 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v12;
  v14 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v13;
  result = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v14;
  v16 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a2 + 56) = v16;
  return result;
}
