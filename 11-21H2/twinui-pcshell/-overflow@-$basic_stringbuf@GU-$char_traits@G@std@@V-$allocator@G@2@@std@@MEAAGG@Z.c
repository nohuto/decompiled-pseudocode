/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x1803D9B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  void *v11; // r15
  size_t size_of; // rax
  unsigned __int64 v13; // r12
  char *v14; // r14
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // r8
  char *v18; // rbx
  __int64 v19; // rax
  int v20; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = std::basic_streambuf<unsigned short>::pptr();
    v6 = std::basic_streambuf<unsigned short>::epptr(a1);
    v7 = 0LL;
    v8 = v6;
    if ( v5 && v5 < v6 )
    {
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 2;
      return a2;
    }
    v9 = std::basic_streambuf<unsigned short>::eback(a1);
    v10 = 32LL;
    v11 = (void *)v9;
    if ( !v5 || (v7 = (__int64)(v8 - v9) >> 1, v7 < 0x20) )
    {
LABEL_13:
      size_of = std::_Get_size_of_n<2>(v10);
      v13 = 2 * v7;
      v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memcpy_0(v14, v11, 2 * v7);
      *(_QWORD *)(a1 + 104) = &v14[2 * v7 + 2];
      std::basic_streambuf<unsigned short>::setp(a1, v14, &v14[2 * v7], &v14[2 * v10]);
      v15 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v16 = v14;
        v17 = 0LL;
      }
      else
      {
        v18 = *(char **)(a1 + 104);
        v19 = std::basic_streambuf<unsigned short>::gptr(a1);
        v16 = v18;
        v15 = a1;
        v17 = &v14[2 * ((v19 - (__int64)v11) >> 1)];
      }
      std::basic_streambuf<unsigned short>::setg(v15, v14, v17, v16);
      v20 = *(_DWORD *)(a1 + 112);
      if ( (v20 & 1) != 0 )
      {
        std::_Deallocate<16,0>(v11, v13);
        v20 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v20 | 1;
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
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
  return 0xFFFFLL;
}
