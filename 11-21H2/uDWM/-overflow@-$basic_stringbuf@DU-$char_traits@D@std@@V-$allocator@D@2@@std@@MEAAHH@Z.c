/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18003AD20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  size_t v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  void *v10; // r15
  char *v11; // r14
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // rax
  char *v15; // r9
  signed __int64 v16; // r8
  int v17; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0LL;
    v4 = std::streambuf::pptr();
    v5 = std::streambuf::epptr(a1);
    v6 = 0LL;
    v7 = v5;
    if ( v4 && v4 < v5 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v4 + 1;
      return a2;
    }
    v8 = std::streambuf::eback(a1);
    v9 = 32LL;
    v10 = (void *)v8;
    if ( !v4 || (v6 = v7 - v8, v7 - v8 < 0x20) )
    {
LABEL_9:
      v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
      memcpy_0(v11, v10, v6);
      *(_QWORD *)(a1 + 104) = &v11[v6 + 1];
      std::streambuf::setp(a1, v11, &v11[v6], &v11[v9]);
      v12 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v15 = v11;
        v16 = 0LL;
      }
      else
      {
        v13 = *(char **)(a1 + 104);
        v14 = std::streambuf::gptr(a1);
        v15 = v13;
        v12 = a1;
        v16 = v11 - (_BYTE *)v10 + v14;
      }
      std::streambuf::setg(v12, v11, v16, v15);
      v17 = *(_DWORD *)(a1 + 112);
      if ( (v17 & 1) != 0 )
      {
        std::_Deallocate<16,0>(v10, v6);
        v17 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v17 | 1;
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
    if ( v6 < 0x3FFFFFFF )
    {
      v9 = 2 * v6;
      goto LABEL_9;
    }
    v9 = 0x7FFFFFFFLL;
    if ( v6 < 0x7FFFFFFF )
      goto LABEL_9;
  }
  return 0xFFFFFFFFLL;
}
