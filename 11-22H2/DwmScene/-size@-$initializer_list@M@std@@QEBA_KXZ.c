/*
 * XREFs of ?size@?$initializer_list@M@std@@QEBA_KXZ @ 0x180047180
 * Callers:
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@V?$initializer_list@M@1@AEBV?$allocator@M@1@@Z @ 0x180044D4C (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@V-$initializer_list@M@1@AEBV-$allocator@M@1@@Z.c)
 *     ??0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z @ 0x18004E6B8 (--0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::initializer_list<float>::size(_QWORD *a1)
{
  return (__int64)(a1[1] - *a1) >> 2;
}
