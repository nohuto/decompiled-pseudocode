/*
 * XREFs of ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800DA824
 * Callers:
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800DA6E4 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180047C44 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  _WORD *v10; // r8
  __int64 v11; // rsi
  __int16 v12; // ax
  _WORD *v13; // rax

  v6 = 0;
  if ( a2 )
  {
    v7 = a1[1];
    if ( v7 == -1 )
    {
      v8 = *a1;
      if ( v8 )
      {
        do
          ++v7;
        while ( *(_WORD *)(v8 + 2 * v7) );
      }
      else
      {
        v7 = 0LL;
      }
      a1[1] = v7;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v7 + a3);
    if ( v6 >= 0 )
    {
      v9 = a3 + 1;
      v10 = (_WORD *)(*a1 + 2 * a1[1]);
      if ( a3 > 0x7FFFFFFE )
      {
        if ( a3 != -1LL )
          *v10 = 0;
      }
      else
      {
        v11 = a2 - (_QWORD)v10;
        while ( v9 != 1 )
        {
          v12 = *(_WORD *)((char *)v10 + v11);
          if ( !v12 )
            break;
          *v10++ = v12;
          --v9;
        }
        v13 = v10 - 1;
        if ( v9 )
          v13 = v10;
        *v13 = 0;
      }
      a1[1] += a3;
    }
  }
  return (unsigned int)v6;
}
