/*
 * XREFs of sub_1405A54BC @ 0x1405A54BC
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405C5550 @ 0x1405C5550 (sub_1405C5550.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 * Callees:
 *     sub_1402690B4 @ 0x1402690B4 (sub_1402690B4.c)
 *     sub_140269118 @ 0x140269118 (sub_140269118.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405A50AC @ 0x1405A50AC (sub_1405A50AC.c)
 */

__int64 __fastcall sub_1405A54BC(_SLIST_HEADER *a1, int a2)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int j; // edi
  __int64 v9; // r14
  _SLIST_HEADER *v10; // rbx
  _SLIST_HEADER *v11; // rbp
  _SLIST_HEADER *v12; // rbx
  _SLIST_HEADER *v13; // rbp
  _SLIST_ENTRY v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a2 || (byte_140C506CE & 1) == 0 )
  {
    result = (__int64)&StartContext;
    if ( a1 == (_SLIST_HEADER *)&StartContext )
    {
      for ( i = 0; i < (unsigned int)dword_140D06884; ++i )
      {
        result = sub_140348800(i);
        v6 = result;
        if ( *(_QWORD *)(result + 33352) )
        {
          v7 = _InterlockedExchange64((volatile __int64 *)(result + 33352), 0LL);
          if ( v7 )
            result = sub_140269118(v7);
        }
        if ( *(_QWORD *)(v6 + 38584) )
        {
          v15 = 0LL;
          v14 = 0LL;
          result = _InterlockedExchange64((volatile __int64 *)(v6 + 38584), 0LL);
          *(_QWORD *)&v15 = result;
          if ( result )
            result = (__int64)sub_1405A50AC(a1, &v14, 0);
        }
      }
    }
    for ( j = 0; j < (unsigned __int16)word_140D05000; ++j )
    {
      v9 = 24512LL * j;
      v10 = (_SLIST_HEADER *)(v9 + a1[1].Alignment + 22976);
      v11 = v10 + 6;
      while ( v10 < v11 )
      {
        sub_1402690B4((__int64)a1, v10, 0, 0);
        v10 += 2;
      }
      if ( a2 )
      {
        v12 = (_SLIST_HEADER *)(v9 + a1[1].Alignment + 23072);
        v13 = v12 + 6;
        while ( v12 < v13 )
        {
          sub_1402690B4((__int64)a1, v12, 0, 1);
          v12 += 2;
        }
      }
      result = (unsigned __int16)word_140D05000;
    }
  }
  return result;
}
