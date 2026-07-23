/*
 * XREFs of sub_14054B018 @ 0x14054B018
 * Callers:
 *     sub_14054ABD0 @ 0x14054ABD0 (sub_14054ABD0.c)
 * Callees:
 *     sub_14054D214 @ 0x14054D214 (sub_14054D214.c)
 *     sub_14054D4B8 @ 0x14054D4B8 (sub_14054D4B8.c)
 *     sub_14054E34C @ 0x14054E34C (sub_14054E34C.c)
 */

__int64 __fastcall sub_14054B018(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v9; // bl
  _DWORD *v10; // rdi
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0;
  v9 = byte_140C48838 != 0 ? 1 : 16;
  if ( (dword_140D0688C & 2) != 0 )
    v9 |= byte_140C48839 != 0 ? 2 : 8;
  v10 = a5;
  *a5 = 0;
  if ( BYTE3(xmmword_140C48940) != v9 )
  {
    sub_14054D214(1LL, 0LL, 0LL);
    LOBYTE(xmmword_140C48940) = 0;
  }
  if ( !(_BYTE)xmmword_140C48940 )
  {
    result = sub_14054D4B8(1LL, v9, a2, a4, a3, v13);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)&xmmword_140C48960 + 1) = v13[0];
    LOBYTE(xmmword_140C48940) = 1;
    BYTE3(xmmword_140C48940) = v9;
  }
  LOBYTE(a5) = 0;
  result = sub_14054E34C(0LL, a1, &v12, &a5);
  if ( (int)result >= 0 )
  {
    *v10 = v12 << 12;
    return 0LL;
  }
  else if ( (_DWORD)result == -2147483622 )
  {
    sub_14054D214(1LL, 0LL, 0LL);
    return 3221226021LL;
  }
  return result;
}
