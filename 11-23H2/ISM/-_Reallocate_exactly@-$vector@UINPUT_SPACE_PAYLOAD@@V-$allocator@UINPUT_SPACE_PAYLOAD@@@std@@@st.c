/*
 * XREFs of ?_Reallocate_exactly@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAX_K@Z @ 0x1800A01E4
 * Callers:
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x18009F310 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003E074 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v13; // [rsp+40h] [rbp+8h]

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  size_of = std::_Get_size_of_n<24>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = (__int64)v6;
  v13 = v6;
  try
  {
    memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v8 = a2;
    v9 = v4;
    v10 = v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, 24 * a2);
    throw;
  }
  return std::vector<INPUT_SPACE_PAYLOAD>::_Change_array(v11, v10, v9, v8);
}
