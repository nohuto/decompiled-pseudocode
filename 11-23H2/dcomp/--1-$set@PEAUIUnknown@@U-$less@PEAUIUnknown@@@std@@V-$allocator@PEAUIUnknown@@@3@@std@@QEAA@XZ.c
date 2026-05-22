/*
 * XREFs of ??1?$set@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ @ 0x1800A7330
 * Callers:
 *     ??1CPresentationManager@@EEAA@XZ @ 0x1801ACF48 (--1CPresentationManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::set<IUnknown *>::~set<IUnknown *>(void **a1)
{
  std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::~_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>(a1);
}
