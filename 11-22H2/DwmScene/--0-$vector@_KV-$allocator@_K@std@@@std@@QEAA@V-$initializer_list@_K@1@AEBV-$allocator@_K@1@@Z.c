/*
 * XREFs of ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@V?$initializer_list@_K@1@AEBV?$allocator@_K@1@@Z @ 0x18007CA0C
 * Callers:
 *     ?AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007D290 (-AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FB90 (-AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     ??$_Construct_n@PEB_KPEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z @ 0x18007C8CC (--$_Construct_n@PEB_KPEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z.c)
 *     ?size@?$initializer_list@_K@std@@QEBA_KXZ @ 0x18007E7BC (-size@-$initializer_list@_K@std@@QEBA_KXZ.c)
 */

__int64 *__fastcall std::vector<unsigned __int64>::vector<unsigned __int64>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = *(_QWORD *)(a2 + 8);
  v6 = *(void **)a2;
  v4 = std::initializer_list<unsigned __int64>::size(a2);
  std::vector<unsigned __int64>::_Construct_n<unsigned __int64 const *,unsigned __int64 const *>(a1, v4, &v6, &v7);
  return a1;
}
