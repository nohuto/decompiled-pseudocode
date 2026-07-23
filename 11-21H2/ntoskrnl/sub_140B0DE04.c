/*
 * XREFs of sub_140B0DE04 @ 0x140B0DE04
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_140B0DEB0 @ 0x140B0DEB0 (sub_140B0DEB0.c)
 */

__int64 *__fastcall sub_140B0DE04(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 *result; // rax
  __int64 **v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  bool v11; // zf
  int v12; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+44h] [rbp+1Ch]

  v13 = HIDWORD(a3);
  v12 = 0;
  v4 = 0;
  result = *a2;
  if ( *a2 )
  {
    v8 = a2 + 5;
    do
    {
      v9 = sub_140B0DEB0(a1, result, &v12);
      v10 = *v8;
      if ( *v8 )
      {
        if ( !*v10 )
        {
          *v10 = v9;
          v10 = *v8;
        }
        if ( *v10 == 1 )
          *v10 = 0LL;
      }
      v11 = v12 == 0;
      *(v8 - 2) = (__int64 *)v9;
      if ( !v11 )
      {
        _bittestandreset(*(signed __int32 **)(a4 + 8), v4);
        *((_DWORD *)v8 - 2) |= 2u;
        v9 = 0LL;
      }
      *(v8 - 3) = (__int64 *)v9;
      ++v4;
      result = v8[2];
      v8 += 7;
    }
    while ( result );
  }
  return result;
}
