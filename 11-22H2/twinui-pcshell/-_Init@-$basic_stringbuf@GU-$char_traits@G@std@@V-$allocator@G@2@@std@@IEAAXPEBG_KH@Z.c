/*
 * XREFs of ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x18009629C
 * Callers:
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180096CB4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::_Init(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  char *v4; // rbp
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 size_of; // rax
  size_t v11; // rbx
  char *v12; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
LABEL_14:
    result = std::basic_streambuf<unsigned short>::setg(a1, v4, 0LL);
LABEL_11:
    v7 |= 1u;
    goto LABEL_12;
  }
  if ( a3 )
  {
    result = a4 & 6;
    if ( (_BYTE)result != 6 )
    {
      size_of = std::_Get_size_of_n<2>(a3);
      v11 = 2 * a3;
      v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      result = (__int64)memcpy_0(v4, a2, v11);
      *(_QWORD *)(a1 + 104) = &v4[v11];
      if ( (v7 & 4) == 0 )
        result = std::basic_streambuf<unsigned short>::setg(a1, v4, v4);
      if ( (v7 & 2) != 0 )
        goto LABEL_11;
      v12 = v4;
      if ( (v7 & 0x18) != 0 )
        v12 = *(char **)(a1 + 104);
      result = std::basic_streambuf<unsigned short>::setp(a1, v4, v12);
      if ( (v7 & 4) == 0 )
        goto LABEL_11;
      goto LABEL_14;
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
LABEL_12:
  *(_DWORD *)(a1 + 112) = v7;
  return result;
}
