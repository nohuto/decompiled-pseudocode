/*
 * XREFs of sub_140B2F0F0 @ 0x140B2F0F0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 sub_140B2F0F0()
{
  __int64 result; // rax
  unsigned int v1; // esi
  unsigned int v2; // ebx
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // di
  unsigned int v5; // r14d
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // cl
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v1 = dword_140D06884;
  v2 = 0;
  v3 = 0;
  v4 = -1;
  v5 = 0;
  if ( (_DWORD)dword_140D06884 )
  {
    do
    {
      v6 = *(_BYTE *)(sub_140348800(v5) + 34125);
      v7 = v6;
      if ( v6 <= v3 )
        v7 = v3;
      result = v4;
      v3 = v7;
      if ( v6 >= v4 )
        v6 = v4;
      ++v5;
      v4 = v6;
    }
    while ( v5 < v1 );
    if ( v7 != v6 && v1 )
    {
      do
      {
        result = sub_140348800(v2++);
        *(_BYTE *)(result + 34059) = *(_BYTE *)(result + 34125) != v4;
      }
      while ( v2 < v1 );
    }
  }
  return result;
}
