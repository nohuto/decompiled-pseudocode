/*
 * XREFs of AlpcpExposeViewAttribute32 @ 0x1407A723C
 * Callers:
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 * Callees:
 *     AlpcpExposeViewAttribute @ 0x1407A717C (AlpcpExposeViewAttribute.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned int v9; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  v9 = 0;
  v7 = 0LL;
  result = AlpcpExposeViewAttribute(a1, a2, (__int64)&v7, a4);
  if ( (*a4 & 0x40000000) != 0 )
  {
    *a3 = v7;
    a3[1] = DWORD2(v7);
    a3[2] = v8;
    result = v9;
    a3[3] = v9;
  }
  return result;
}
