/*
 * XREFs of sub_14092C610 @ 0x14092C610
 * Callers:
 *     <none>
 * Callees:
 *     sub_140540B48 @ 0x140540B48 (sub_140540B48.c)
 */

char __fastcall sub_14092C610(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // r9
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 32) && *(_DWORD *)(a1 + 40) < 0x6F9u )
  {
    if ( sub_140540B48(a1, a2, a3, &v9) )
      return 1;
  }
  else
  {
    v6 = 0;
    v7 = *(_DWORD *)(v4 + 8316);
    v8 = v4 + *(unsigned int *)(v4 + 8312);
    if ( v7 )
    {
      while ( *(_QWORD *)v8 != a2 || a3 && *(_DWORD *)(v8 + 12) != a3 )
      {
        v8 += 16LL;
        if ( ++v6 >= v7 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
