/*
 * XREFs of sub_14076DC10 @ 0x14076DC10
 * Callers:
 *     sub_14076D7D4 @ 0x14076D7D4 (sub_14076D7D4.c)
 * Callees:
 *     sub_1406E9E7C @ 0x1406E9E7C (sub_1406E9E7C.c)
 */

__int64 __fastcall sub_14076DC10(__int64 a1)
{
  unsigned int v1; // r11d
  __int64 result; // rax
  unsigned int v3; // r9d
  _QWORD *i; // rdx
  __int64 v5; // r10
  __int64 v6; // r8

  v1 = *(_DWORD *)(a1 + 76);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    for ( i = (_QWORD *)(a1 + 104); ; i += 4 )
    {
      if ( !*((_DWORD *)i - 1) && !*i && *((_DWORD *)i - 2) == 55 )
      {
        v5 = 32LL * v3;
        v6 = *(_QWORD *)(v5 + a1 + 80) - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)(v5 + a1 + 80) == 0x4ACA104A78C34FC8LL )
          v6 = *(_QWORD *)(v5 + a1 + 88) - 0x576E99524D52A49ELL;
        if ( !v6 )
          break;
      }
      if ( ++v3 >= v1 )
        return result;
    }
    return sub_1406E9E7C(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
  }
  return result;
}
