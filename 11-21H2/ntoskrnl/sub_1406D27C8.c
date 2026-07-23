/*
 * XREFs of sub_1406D27C8 @ 0x1406D27C8
 * Callers:
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D27C8(int a1, __int128 *a2, unsigned int a3, int a4, unsigned int a5, __int64 a6)
{
  size_t v6; // rbp
  __int128 *v7; // rsi
  __int64 result; // rax
  void *Pool2; // rax
  __int128 v11; // xmm0
  _BYTE v12[80]; // [rsp+20h] [rbp-88h] BYREF

  v6 = a3;
  v7 = a2;
  result = 0LL;
  if ( !a1 )
  {
    *(_DWORD *)a6 = 2;
    return result;
  }
  if ( !a5 || a1 != a4 )
    goto LABEL_3;
  if ( a1 == 13 )
  {
    result = sub_140773030(a2, v12);
    if ( (int)result < 0 )
      return result;
    a2 = (__int128 *)v12;
  }
  else
  {
    if ( a1 != 18 || !a2 )
    {
LABEL_4:
      if ( (unsigned int)v6 > 8 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v6, 1517317712LL);
        *(_QWORD *)(a6 + 16) = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        memmove(Pool2, v7, v6);
        *(_DWORD *)a6 = 5;
      }
      else
      {
        memmove((void *)(a6 + 16), v7, v6);
        *(_DWORD *)a6 = 3;
      }
      result = 0LL;
      *(_DWORD *)(a6 + 12) = v6;
      goto LABEL_7;
    }
    *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
  }
  result = sub_14077B0A4(a5, a2, a6 + 16);
  if ( (_DWORD)result == -1073741772 )
  {
LABEL_3:
    if ( a1 == 13 )
    {
      v11 = *v7;
      *(_DWORD *)a6 = 4;
      result = 0LL;
      *(_OWORD *)(a6 + 8) = v11;
      return result;
    }
    goto LABEL_4;
  }
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a6 = 6;
LABEL_7:
    *(_DWORD *)(a6 + 8) = a1;
  }
  return result;
}
