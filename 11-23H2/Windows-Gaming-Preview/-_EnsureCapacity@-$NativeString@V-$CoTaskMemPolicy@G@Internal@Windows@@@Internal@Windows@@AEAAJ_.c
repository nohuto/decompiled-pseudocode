/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18000C7E4
 * Callers:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18000C658 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _WORD *v7; // rax
  unsigned __int64 v8; // r14
  LPVOID v9; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = -1LL;
  if ( v4 == -1LL )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      if ( *(_QWORD *)a1 )
      {
        do
          ++v6;
        while ( *(_WORD *)(*(_QWORD *)a1 + 2 * v6) );
      }
      else
      {
        v6 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v6;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 8);
    }
    v4 = (v6 + 1) & -(__int64)(*(_QWORD *)a1 != 0LL);
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v4 )
  {
    if ( v2 <= v4 )
      return v5;
    if ( is_mul_ok(v4, 2uLL) )
    {
      v8 = v4 + 2048;
      if ( v4 <= 0x800 )
        v8 = 2 * v4;
      if ( v2 > v8 )
        v8 = a2 + 1;
      v9 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v8);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 16) = v8;
        *(_QWORD *)a1 = v9;
        return v5;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024362;
  }
  if ( !is_mul_ok(v2, 2uLL) )
    return (unsigned int)-2147024362;
  v7 = CoTaskMemAlloc(2 * v2);
  if ( !v7 )
    return (unsigned int)-2147024882;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = v7;
  *v7 = 0;
  return v5;
}
