/*
 * XREFs of sub_140537860 @ 0x140537860
 * Callers:
 *     <none>
 * Callees:
 *     sub_140536FB4 @ 0x140536FB4 (sub_140536FB4.c)
 *     sub_1405378F4 @ 0x1405378F4 (sub_1405378F4.c)
 */

char __fastcall sub_140537860(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v6; // rbx
  char *v7; // rdx
  char *v8; // rax
  char *v9; // rsi

  v6 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 252) != *(unsigned __int16 *)(a2 + 8) )
    return 0;
  if ( !a3 || !*(_BYTE *)(a1 + 268) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = (char *)sub_1405378F4(a1, v7);
      v9 = v8;
      if ( !v8 )
        break;
      if ( sub_140536FB4(a2, v8) )
      {
        if ( a4 )
          *a4 = *(unsigned __int16 *)(a2 + 12);
        return 1;
      }
      v7 = v9;
      a1 = v6;
    }
    return 0;
  }
  return 1;
}
