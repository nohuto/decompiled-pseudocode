/*
 * XREFs of sub_14056AF98 @ 0x14056AF98
 * Callers:
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     sub_14054DDD0 @ 0x14054DDD0 (sub_14054DDD0.c)
 *     sub_140653964 @ 0x140653964 (sub_140653964.c)
 */

__int64 __fastcall sub_14056AF98(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  int v7; // ebx

  v3 = a3;
  if ( (((_DWORD)a3 - 2) & 0xFFFFFFFD) != 0 )
  {
    result = sub_140653964(a1, a2, a3);
    if ( (int)result < 0 )
      return result;
    v7 = sub_14054DDD0(a1, a2, v3);
    if ( v7 < 0 && !v3 )
      sub_140653964(a1, a2, 8LL);
  }
  else
  {
    result = sub_14054DDD0(a1, a2, a3);
    if ( (int)result < 0 )
      return result;
    v7 = sub_140653964(a1, a2, v3);
    if ( v7 < 0 && v3 == 2 )
      sub_14054DDD0(a1, a2, 8u);
  }
  return (unsigned int)v7;
}
