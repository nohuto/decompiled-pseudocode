/*
 * XREFs of sub_180020A70 @ 0x180020A70
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

__int64 __fastcall sub_180020A70(__int64 a1, unsigned int a2)
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
      v12 = (char *)sub_18001090C(v10);
      memcpy(v12, v11, v7);
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
        sub_1800100E8(v11, v7);
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
