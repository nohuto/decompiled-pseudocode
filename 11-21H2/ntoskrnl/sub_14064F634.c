/*
 * XREFs of sub_14064F634 @ 0x14064F634
 * Callers:
 *     sub_140503F38 @ 0x140503F38 (sub_140503F38.c)
 *     sub_14051A670 @ 0x14051A670 (sub_14051A670.c)
 *     sub_14051A77C @ 0x14051A77C (sub_14051A77C.c)
 *     sub_14051B2B8 @ 0x14051B2B8 (sub_14051B2B8.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14064F634(int *a1, __int64 a2)
{
  char v2; // r9
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  unsigned __int8 *v8; // rax
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  v3 = *a1;
  if ( (unsigned int)(*a1 - 1) > 5 || (unsigned int)(*(_DWORD *)a2 - 1) > 5 || v3 != *(_DWORD *)a2 )
    return 0;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      v8 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
      v9 = *(_QWORD *)(a2 + 8) - (_QWORD)v8;
      do
      {
        v10 = v8[v9];
        v11 = *v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      return v11 == 0;
    }
    if ( v5 == 4 )
      return *((_QWORD *)a1 + 1) == *(_QWORD *)(a2 + 8);
    return 0;
  }
  if ( *((_WORD *)a1 + 4) == *(_WORD *)(a2 + 8) && (*((_BYTE *)a1 + 10) & 4) == 0 && (*(_BYTE *)(a2 + 10) & 4) == 0 )
    return *((_WORD *)a1 + 6) == *(_WORD *)(a2 + 12);
  return v2;
}
