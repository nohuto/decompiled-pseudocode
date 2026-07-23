/*
 * XREFs of sub_1406C8634 @ 0x1406C8634
 * Callers:
 *     sub_1406689A4 @ 0x1406689A4 (sub_1406689A4.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C8634(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // r9d

  v1 = *(_WORD *)(a1 + 2);
  if ( (v1 & 0x10) == 0 )
    return 0x1000000;
  v2 = 0;
  if ( v1 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v3 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v3 )
      return 0x1000000;
    v4 = a1 + v3;
  }
  if ( !v4 )
    return 0x1000000;
  v5 = v4 + 8;
  v6 = 0;
  if ( *(_WORD *)(v4 + 4) )
  {
    while ( (unsigned __int8)(*(_BYTE *)v5 - 17) <= 1u || (unsigned __int8)(*(_BYTE *)v5 - 20) <= 1u )
    {
      ++v6;
      v5 += *(unsigned __int16 *)(v5 + 2);
      if ( v6 >= *(unsigned __int16 *)(v4 + 4) )
        return v2;
    }
    return 0x1000000;
  }
  return v2;
}
