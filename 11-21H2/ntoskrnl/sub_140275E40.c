/*
 * XREFs of sub_140275E40 @ 0x140275E40
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 * Callees:
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_140538E2C @ 0x140538E2C (sub_140538E2C.c)
 */

char __fastcall sub_140275E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r10
  char v7; // al
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // r9

  v6 = a1;
  if ( a3 )
    v7 = sub_140538E2C(a3, a1);
  else
    v7 = a1 == a2 + 488 || a1 == a2 + 512;
  if ( v7 )
    return 0;
  v8 = *(_DWORD *)(v6 + 152);
  if ( (v8 & 0x400020) != 0 )
    return 0;
  if ( (v8 & 0x10000) == 0 )
  {
    if ( *(_DWORD *)(v6 + 516) )
      return 0;
    v9 = *(_DWORD *)(v6 + 4);
    if ( (v9 || *(_DWORD *)(v6 + 112) && *(_QWORD *)(v6 + 8)) && (v8 & 0x40000000) == 0 )
    {
      v10 = *(_DWORD *)(v6 + 112);
      if ( !v10 || !a4 )
        return 0;
      v11 = *(_DWORD *)(v6 + 268) + 1;
      *(_DWORD *)(v6 + 268) = v11;
      if ( (v8 & 0x1000000) != 0 )
      {
        v12 = *(_QWORD *)(v6 + 240);
        if ( !*(_DWORD *)(v12 + 104)
          && MEMORY[0xFFFFF78000000320] <= (__int64)(*(_QWORD *)(v12 + 136) + 0x9896800uLL / DesiredTime)
          && *(_DWORD *)(v6 + 112) < 0x40u )
        {
          return 0;
        }
      }
      else if ( (v8 & 0x200) != 0 )
      {
        if ( (v11 & 0xF) != 0 && v10 < 0x40 && a6 != 16 )
          return 0;
      }
      else if ( (*(_DWORD *)(a5 + 80) & 0x8000) != 0
             && v9
             && (unsigned __int8)sub_1402844A0(*(_QWORD *)(v6 + 528), *(_QWORD *)(v6 + 592), a5, 0x1000000, 0, 8, 0LL) )
      {
        return 0;
      }
    }
  }
  return 1;
}
