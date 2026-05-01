/*
 * XREFs of ?_Init@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXPEBD_KH@Z @ 0x18019402C
 * Callers:
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180193F54 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@DU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::_Init(__int64 a1, const void *a2, size_t a3, int a4)
{
  char *v4; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  char *v10; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
LABEL_13:
    result = std::streambuf::setg(a1, v4, 0LL, v4);
    goto LABEL_10;
  }
  if ( !a3 || (result = a4 & 6, (_BYTE)result == 6) )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    goto LABEL_11;
  }
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a3);
  result = (__int64)memcpy_0(v4, a2, a3);
  *(_QWORD *)(a1 + 104) = &v4[a3];
  if ( (v7 & 4) == 0 )
    result = std::streambuf::setg(a1, v4, v4, &v4[a3]);
  if ( (v7 & 2) == 0 )
  {
    v10 = v4;
    if ( (v7 & 0x18) != 0 )
      v10 = *(char **)(a1 + 104);
    result = std::streambuf::setp(a1, v4, v10, *(_QWORD *)(a1 + 104));
    if ( (v7 & 4) != 0 )
      goto LABEL_13;
  }
LABEL_10:
  v7 |= 1u;
LABEL_11:
  *(_DWORD *)(a1 + 112) = v7;
  return result;
}
