/*
 * XREFs of _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x1800785B8
 * Callers:
 *     _lambda_9193c85b91a90ecd300d0af0c9084680_::operator() @ 0x18007844C (_lambda_9193c85b91a90ecd300d0af0c9084680_--operator().c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801FEC00 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@UHotKeyInfo@@@std@@QEAA@XZ @ 0x1801FBB88 (--$-0$$V@-$_Ref_count_obj2@UHotKeyInfo@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator()(__int64 **a1)
{
  std::_Ref_count_base *v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  void *v8; // [rsp+40h] [rbp+8h]

  v8 = operator new(0x48uLL);
  v2 = (std::_Ref_count_base *)std::_Ref_count_obj2<HotKeyInfo>::_Ref_count_obj2<HotKeyInfo>(v8);
  v6 = (__int64)v2 + 16;
  v7 = v2;
  std::shared_ptr<SystemCursor2>::operator=(*a1, &v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v3 = **a1;
  *(_OWORD *)v3 = *(_OWORD *)a1[1];
  *(_DWORD *)(v3 + 16) = *(_DWORD *)a1[2];
  *(_DWORD *)(v3 + 28) = *(_DWORD *)a1[3];
  v4 = a1[4];
  *(_DWORD *)(v3 + 20) = *(_DWORD *)v4 & 0xF;
  *(_WORD *)(v3 + 24) = *(_WORD *)v4 & 0x7A80;
  *(_BYTE *)(v3 + 32) = *(_BYTE *)a1[5];
  result = a1[6];
  *(_BYTE *)result = 1;
  return result;
}
