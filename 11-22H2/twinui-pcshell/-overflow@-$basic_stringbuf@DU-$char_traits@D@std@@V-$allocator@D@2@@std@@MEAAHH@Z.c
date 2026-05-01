/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18014D220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18039122C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  char *v6; // rsi
  unsigned __int64 v7; // rbx
  size_t v8; // rbp
  __int64 v9; // rax
  size_t v10; // r14
  void *v11; // r12
  unsigned __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rbx
  __int64 v16; // rax
  char *v17; // r9
  signed __int64 v18; // r8
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  void *v21; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0LL;
    v4 = std::streambuf::pptr(a1);
    v5 = std::streambuf::epptr(a1);
    v6 = 0LL;
    v7 = v5;
    if ( v4 && v4 < v5 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v4 + 1;
      return a2;
    }
    v8 = 0LL;
    v9 = std::streambuf::eback(a1);
    v10 = 32LL;
    v11 = (void *)v9;
    if ( !v4 || (v12 = v7 - v9, v8 = v12, v12 < 0x20) )
    {
LABEL_10:
      v13 = (char *)operator new(v10);
LABEL_11:
      v6 = v13;
      goto LABEL_12;
    }
    if ( v12 < 0x3FFFFFFF )
    {
      v10 = 2 * v12;
      if ( 2 * v12 < 0x1000 )
      {
        if ( !(2 * v12) )
        {
LABEL_12:
          memcpy_0(v6, v11, v8);
          *(_QWORD *)(a1 + 104) = &v6[v8 + 1];
          std::streambuf::setp(a1, v6, &v6[v8], &v6[v10]);
          v14 = a1;
          if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
          {
            v17 = v6;
            v18 = 0LL;
          }
          else
          {
            v15 = *(char **)(a1 + 104);
            v16 = std::streambuf::gptr(a1);
            v17 = v15;
            v14 = a1;
            v18 = v6 - (_BYTE *)v11 + v16;
          }
          std::streambuf::setg(v14, v6, v18, v17);
          if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
          {
            v20 = v8;
            v21 = v11;
            if ( v8 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v21, &v20);
              v8 = v20;
              v11 = v21;
            }
            operator delete(v11, v8);
          }
          *(_DWORD *)(a1 + 112) |= 1u;
          *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
          return a2;
        }
        goto LABEL_10;
      }
LABEL_24:
      v13 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v10);
      goto LABEL_11;
    }
    v10 = 0x7FFFFFFFLL;
    if ( v12 < 0x7FFFFFFF )
      goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}
