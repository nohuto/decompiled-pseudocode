/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x180127270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  char *v7; // rsi
  size_t v8; // r14
  __int64 v9; // rax
  void *v10; // r15
  size_t v11; // rdi
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  __int64 v15; // rax
  char *v16; // r9
  signed __int64 v17; // r8
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  void *v20; // [rsp+60h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFFFFFLL;
  if ( a2 == -1 )
    return 0LL;
  v4 = std::streambuf::pptr(a1);
  v5 = std::streambuf::epptr(a1);
  v6 = v5;
  if ( v4 && v4 < v5 )
  {
    *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
    *(_QWORD *)(a1 + 104) = v4 + 1;
    return a2;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = std::streambuf::eback(a1);
  v10 = (void *)v9;
  if ( !v4 || (v8 = v6 - v9, v6 - v9 < 0x20) )
  {
    v11 = 32LL;
    goto LABEL_10;
  }
  if ( v8 >= 0x3FFFFFFF )
  {
    v11 = 0x7FFFFFFFLL;
    if ( v8 < 0x7FFFFFFF )
      goto LABEL_23;
    return 0xFFFFFFFFLL;
  }
  v11 = 2 * v8;
  if ( 2 * v8 >= 0x1000 )
  {
LABEL_23:
    v12 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    goto LABEL_11;
  }
  if ( v11 )
  {
LABEL_10:
    v12 = (char *)operator new(v11);
LABEL_11:
    v7 = v12;
  }
  memcpy_0(v7, v10, v8);
  *(_QWORD *)(a1 + 104) = &v7[v8 + 1];
  std::streambuf::setp(a1, v7, &v7[v8], &v7[v11]);
  v13 = a1;
  if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
  {
    v16 = v7;
    v17 = 0LL;
  }
  else
  {
    v14 = *(char **)(a1 + 104);
    v15 = std::streambuf::gptr(a1);
    v16 = v14;
    v13 = a1;
    v17 = v7 - (_BYTE *)v10 + v15;
  }
  std::streambuf::setg(v13, v7, v17, v16);
  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    v19 = v8;
    v20 = v10;
    if ( v8 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v8 = v19;
      v10 = v20;
    }
    operator delete(v10, v8);
  }
  *(_DWORD *)(a1 + 112) |= 1u;
  *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
  return a2;
}
