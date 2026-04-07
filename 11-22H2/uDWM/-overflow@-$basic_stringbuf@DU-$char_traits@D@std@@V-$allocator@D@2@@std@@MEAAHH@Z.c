/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x1800F3400
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  size_t v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  void *v11; // r15
  char *v12; // r14
  __int64 v13; // rcx
  char *v14; // r9
  signed __int64 v15; // r8
  char *v16; // rbx
  __int64 v17; // rax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0LL;
    v5 = std::streambuf::pptr(a1);
    v6 = std::streambuf::epptr(a1);
    v7 = 0LL;
    v8 = v6;
    if ( v5 && v5 < v6 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 1;
      return a2;
    }
    v9 = std::streambuf::eback(a1);
    v10 = 32LL;
    v11 = (void *)v9;
    if ( !v5 || (v7 = v8 - v9, v8 - v9 < 0x20) )
    {
LABEL_13:
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
      memcpy_0(v12, v11, v7);
      *(_QWORD *)(a1 + 104) = &v12[v7 + 1];
      std::streambuf::setp(a1, v12, &v12[v7], &v12[v10]);
      v13 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v14 = v12;
        v15 = 0LL;
      }
      else
      {
        v16 = *(char **)(a1 + 104);
        v17 = std::streambuf::gptr(a1);
        v14 = v16;
        v13 = a1;
        v15 = v12 - (_BYTE *)v11 + v17;
      }
      std::streambuf::setg(v13, v12, v15, v14);
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        std::_Deallocate<16,0>(v11, v7);
      *(_DWORD *)(a1 + 112) |= 1u;
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
    if ( v7 < 0x3FFFFFFF )
    {
      v10 = 2 * v7;
      goto LABEL_13;
    }
    v10 = 0x7FFFFFFFLL;
    if ( v7 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
