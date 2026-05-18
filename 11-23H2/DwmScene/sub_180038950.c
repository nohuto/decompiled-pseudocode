/*
 * XREFs of sub_180038950 @ 0x180038950
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 */

__int64 __fastcall sub_180038950(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  void *v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r12
  char *v14; // r14
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // r8
  char *v18; // rbx
  __int64 v19; // rax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = std::wstreambuf::pptr(a1);
    v6 = std::wstreambuf::epptr(a1);
    v7 = 0LL;
    v8 = v6;
    if ( v5 && v5 < v6 )
    {
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 2;
      return a2;
    }
    v9 = std::wstreambuf::eback(a1);
    v10 = 32LL;
    v11 = (void *)v9;
    if ( !v5 || (v7 = (__int64)(v8 - v9) >> 1, v7 < 0x20) )
    {
LABEL_13:
      v12 = sub_18001217C(v10);
      v13 = 2 * v7;
      v14 = (char *)sub_18001090C(v12);
      memcpy(v14, v11, 2 * v7);
      *(_QWORD *)(a1 + 104) = &v14[2 * v7 + 2];
      std::wstreambuf::setp(a1, v14, &v14[2 * v7], &v14[2 * v10]);
      v15 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v16 = v14;
        v17 = 0LL;
      }
      else
      {
        v18 = *(char **)(a1 + 104);
        v19 = std::wstreambuf::gptr(a1);
        v16 = v18;
        v15 = a1;
        v17 = &v14[2 * ((v19 - (__int64)v11) >> 1)];
      }
      std::wstreambuf::setg(v15, v14, v17, v16);
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        sub_1800100E8(v11, v13);
      *(_DWORD *)(a1 + 112) |= 1u;
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
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
