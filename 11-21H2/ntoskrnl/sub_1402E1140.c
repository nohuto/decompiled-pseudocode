/*
 * XREFs of sub_1402E1140 @ 0x1402E1140
 * Callers:
 *     sub_14020B000 @ 0x14020B000 (sub_14020B000.c)
 * Callees:
 *     sub_14024E01C @ 0x14024E01C (sub_14024E01C.c)
 *     sub_1402E1A74 @ 0x1402E1A74 (sub_1402E1A74.c)
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

_UNKNOWN **__fastcall sub_1402E1140(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int v6; // eax
  __int64 v7; // rax
  char *v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  char i; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 16); ++v2 )
  {
    result = (_UNKNOWN **)sub_140797594(a1, v2, 0LL);
    v4 = (__int64)result;
    if ( result )
    {
      if ( (*((_DWORD *)result + 3) & 0x400) == 0 )
      {
        v5 = *((_DWORD *)result + 57);
        v6 = sub_1402E1C80(result);
        if ( v5 > *(_DWORD *)(v4 + 224) && v5 > 2 * v6 )
        {
          sub_1402E1BD0(v4, &i);
          v7 = sub_1402E1A74(v4, v4 + 48);
          v8 = (char *)v7;
          if ( v7 )
          {
            v9 = *(_QWORD *)(v7 + 56);
            if ( *(_QWORD *)(v9 + 8) != v7 + 56 || (v10 = *(_QWORD **)(v7 + 64), *v10 != v7 + 56) )
              __fastfail(3u);
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
          }
          sub_1402E1B84(v4, &i);
          if ( v8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 232));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 228));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v4 + 1096) + 4LL * (*(_DWORD *)(v4 + 300) & 1) + 4124),
              -*(_DWORD *)(v4 + 4));
            sub_14024E01C(v4, v8);
          }
        }
      }
      result = (_UNKNOWN **)sub_1407981E8(v4, 0LL);
    }
  }
  return result;
}
