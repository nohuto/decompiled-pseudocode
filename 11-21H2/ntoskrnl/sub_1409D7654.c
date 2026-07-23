/*
 * XREFs of sub_1409D7654 @ 0x1409D7654
 * Callers:
 *     sub_140262650 @ 0x140262650 (sub_140262650.c)
 * Callees:
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FD93C @ 0x1405FD93C (sub_1405FD93C.c)
 *     sub_1407E21D4 @ 0x1407E21D4 (sub_1407E21D4.c)
 *     sub_14082E8D4 @ 0x14082E8D4 (sub_14082E8D4.c)
 *     sub_1409C5C24 @ 0x1409C5C24 (sub_1409C5C24.c)
 *     sub_1409C5D4C @ 0x1409C5D4C (sub_1409C5D4C.c)
 */

__int64 __fastcall sub_1409D7654(__int64 a1, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  __int64 result; // rax
  _DWORD *v7; // rdi
  PVOID v8; // rax
  SIZE_T v9; // rcx
  PVOID v10; // rax
  PVOID v11; // rax

  v4 = a3;
  result = sub_14082E8D4(a1, (__int64)L"AES");
  if ( (int)result >= 0 )
  {
    v7 = (_DWORD *)(a1 + 8);
    result = sub_1407E21D4(*(_QWORD *)a1, (__int64)L"BlockLength");
    if ( (int)result >= 0 )
    {
      if ( !*v7 || ((*v7 - 1) & *v7) != 0 )
      {
        return 3221225843LL;
      }
      else
      {
        v8 = sub_140260C2C((unsigned int)v4, 0x52436D73u);
        *(_QWORD *)(a1 + 16) = v8;
        if ( !v8 )
          return 3221225626LL;
        if ( a2 )
        {
          memmove(v8, a2, v4);
        }
        else
        {
          result = sub_1405FD93C((__int64)v8);
          if ( (int)result < 0 )
            return result;
        }
        v9 = (unsigned int)*v7;
        *(_DWORD *)(a1 + 24) = v4;
        v10 = sub_140260C2C(v9, 0x52436D73u);
        *(_QWORD *)(a1 + 48) = v10;
        if ( !v10 )
          return 3221225626LL;
        memset(v10, 0, (unsigned int)*v7);
        result = sub_1407E21D4(*(_QWORD *)a1, (__int64)L"ObjectLength");
        if ( (int)result >= 0 )
        {
          v11 = sub_140260C2C(0LL, 0x52436D73u);
          *(_QWORD *)(a1 + 40) = v11;
          if ( !v11 )
            return 3221225626LL;
          result = sub_1409C5D4C(*(_QWORD *)a1, (__int64)L"ChainingMode");
          if ( (int)result >= 0 )
          {
            result = sub_1409C5C24(*(_QWORD *)a1, a1 + 32);
            if ( (int)result >= 0 )
              return 0LL;
          }
        }
      }
    }
  }
  return result;
}
