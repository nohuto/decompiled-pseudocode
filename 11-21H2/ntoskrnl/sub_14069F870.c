/*
 * XREFs of sub_14069F870 @ 0x14069F870
 * Callers:
 *     sub_14069F7AC @ 0x14069F7AC (sub_14069F7AC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14069F870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = *(_QWORD *)(a2 + 16);
  while ( v4 )
  {
    v8 = v4 - 16;
    v9 = *(_DWORD *)(v4 - 16 + 8);
    v4 = *(_QWORD *)(v4 + 8);
    v10 = (v9 >> 21) & 0x3FF;
    v11 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
    if ( v11 < v10 )
    {
      v12 = v8;
      v13 = v10 - v11;
      do
      {
        v12 = *(_QWORD *)(v12 + 72);
        --v13;
      }
      while ( v13 );
      if ( v12 == a1 )
      {
        result = sub_14042A5E0(v8, a4);
        if ( (_DWORD)result )
          return result;
      }
    }
  }
  return 0LL;
}
