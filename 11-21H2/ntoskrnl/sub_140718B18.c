/*
 * XREFs of sub_140718B18 @ 0x140718B18
 * Callers:
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140718B18(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // r10
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned __int16 v7; // r9
  unsigned int v8; // [rsp+8h] [rbp+8h]

  result = 0LL;
  v2 = *a1 >> 1;
  v8 = 0;
  v3 = 4;
  if ( v2 >= 4 || (v3 = v2) != 0 )
  {
    v4 = *((_QWORD *)a1 + 1);
    v5 = 0;
    while ( 1 )
    {
      v6 = v5;
      v7 = *(_WORD *)(v4 + 2LL * v5);
      if ( v7 > 0xFFu )
        break;
      ++v5;
      *((_BYTE *)&v8 + v6) = v7;
      if ( v5 >= v3 )
        return v8;
    }
  }
  return result;
}
