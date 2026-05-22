/*
 * XREFs of ??$emplace_back@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801AAB90
 * Callers:
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AC0AC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::emplace_back<EdgyControllerClientProxy * &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 *result; // rax

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
    return std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Emplace_reallocate<EdgyControllerClientProxy * &>(
             a1,
             (__int64)v4,
             a2);
  v5 = *a2;
  *v4 = *a2;
  if ( v5 )
    (**(void (__fastcall ***)(__int64))(v5 + 16))(v5 + 16);
  result = (__int64 *)a1[1];
  a1[1] = (__int64)(result + 1);
  return result;
}
