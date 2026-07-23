/*
 * XREFs of sub_140948520 @ 0x140948520
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140948520(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v5 = 0;
  *a3 = 0;
  v6 = sub_14042A5E0(*(_QWORD *)a2, *(_QWORD *)(a1 + 16));
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          return (unsigned int)-1073741248;
        else
          return (unsigned int)-1073741595;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 24) = 1;
    }
    *a3 = 1;
  }
  return v5;
}
