/*
 * XREFs of ??$_Uninitialized_move@PEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@YAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1801C4450
 * Callers:
 *     ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800212A0 (--$_Emplace_reallocate@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VI.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800F64F4 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 *v5; // rax
  char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    v6 = (char *)((char *)a3 - (char *)a1);
    do
    {
      v7 = *(v5 - 1);
      v8 = v5[1];
      v9 = *v5;
      v5[1] = 0LL;
      *v5 = 0LL;
      *(v5 - 1) = 0LL;
      *v3 = v7;
      v3 += 3;
      *(_QWORD *)&v6[(_QWORD)v5] = v9;
      *(__int64 *)((char *)v5 + (_QWORD)v6 + 8) = v8;
      v5 += 3;
    }
    while ( v5 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>((__int64)v3, (__int64)v3);
  return v3;
}
