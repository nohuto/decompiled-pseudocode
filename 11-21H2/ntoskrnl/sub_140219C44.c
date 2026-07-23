/*
 * XREFs of sub_140219C44 @ 0x140219C44
 * Callers:
 *     sub_140218D80 @ 0x140218D80 (sub_140218D80.c)
 *     sub_140219B90 @ 0x140219B90 (sub_140219B90.c)
 *     sub_14064AF30 @ 0x14064AF30 (sub_14064AF30.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140219C44(__int16 *a1)
{
  int v1; // eax
  _WORD *v3; // r10
  __int16 *v4; // r9
  __int16 *v5; // r8
  __int16 v6; // cx
  __int16 v7; // r8
  __int64 v10; // rcx
  char v11; // al

  v1 = *((_DWORD *)a1 + 3);
  if ( v1 != 1 && *((_DWORD *)a1 + 13) != 1 )
    return *a1 == a1[20];
  v3 = a1 + 20;
  v4 = a1;
  v5 = a1 + 20;
  if ( v1 != 1 )
  {
    v4 = a1 + 20;
    v5 = a1;
  }
  v6 = *v4;
  if ( *v4 == 16 && *((_BYTE *)v4 + 4) )
    return 1;
  v7 = *v5;
  if ( v7 == 16 )
  {
    if ( (unsigned __int16)(v6 - 2) <= 1u )
      return 1;
    return *a1 == *v3;
  }
  if ( (unsigned __int16)(v7 - 1) > 1u || v6 != 2 )
  {
    if ( v7 == 6 )
    {
      if ( v6 == 2 )
        return 1;
    }
    else if ( v7 == 5 && v6 == 16 )
    {
      return 1;
    }
    return *a1 == *v3;
  }
  v10 = *((_QWORD *)v4 + 4);
  v11 = *(_BYTE *)(v10 + 8);
  if ( v7 == 2 )
  {
    if ( v11 != 2 )
      return 1;
  }
  else if ( v7 == 1 && (v11 == 2 || *(_QWORD *)v10 <= 0x7FFFFFFFFFFFFFFFuLL) )
  {
    return 1;
  }
  return 0;
}
