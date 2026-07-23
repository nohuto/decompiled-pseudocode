/*
 * XREFs of sub_140268E74 @ 0x140268E74
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_140268FB4 @ 0x140268FB4 (sub_140268FB4.c)
 *     sub_140269118 @ 0x140269118 (sub_140269118.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405A50AC @ 0x1405A50AC (sub_1405A50AC.c)
 */

__int64 __fastcall sub_140268E74(ULONG_PTR *a1)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v4; // rbx
  unsigned int j; // edi
  unsigned int v6; // ebp
  __int64 v7; // r14
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]

  result = (__int64)&StartContext;
  if ( a1 == &StartContext )
  {
    for ( i = 0; i < (unsigned int)dword_140D06884; ++i )
    {
      result = sub_140348800(i);
      v4 = result;
      if ( *(_QWORD *)(result + 33352) && _InterlockedExchange64((volatile __int64 *)(result + 33352), 0LL) )
        result = sub_140269118();
      if ( *(_QWORD *)(v4 + 38584) )
      {
        v14 = 0LL;
        v13 = 0LL;
        result = _InterlockedExchange64((volatile __int64 *)(v4 + 38584), 0LL);
        *(_QWORD *)&v14 = result;
        if ( result )
          result = sub_1405A50AC(a1, &v13, 0LL);
      }
    }
  }
  for ( j = 0; j < (unsigned __int16)word_140D05000; ++j )
  {
    v6 = 0;
    v7 = 24512LL * j;
    v8 = a1[2];
    v9 = v7 + v8 + 22976;
    v10 = v9 + 96;
    if ( v9 < v9 + 96 )
    {
      do
      {
        sub_140268FB4(a1, v9, v6, 0LL);
        v9 += 32LL;
        ++v6;
      }
      while ( v9 < v10 );
      v8 = a1[2];
    }
    v11 = v7 + v8 + 23072;
    v12 = v11 + 96;
    while ( v11 < v12 )
    {
      sub_140268FB4(a1, v11, 0LL, 1LL);
      v11 += 32LL;
    }
    result = (unsigned __int16)word_140D05000;
  }
  return result;
}
