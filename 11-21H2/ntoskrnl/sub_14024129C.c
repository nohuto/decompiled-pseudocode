/*
 * XREFs of sub_14024129C @ 0x14024129C
 * Callers:
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 * Callees:
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

__int64 __fastcall sub_14024129C(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  unsigned int v9; // eax

  v2 = *(__int64 **)(a1 + 72);
  v3 = 0;
  v6 = 0LL;
  while ( v2 )
  {
    if ( (*((_BYTE *)v2 + 34) & 2) != 0 && (v8 = *v2, (*(_DWORD *)(*v2 + 56) & 0x8000000) != 0) )
    {
      v9 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
      v6 = *(_QWORD *)(sub_140256DF8(v8, v9, v2) + 72);
    }
    else
    {
      v6 = v2[1];
    }
    if ( a2 >= v6 && a2 < v6 + 8LL * *((unsigned int *)v2 + 11) )
      break;
    v2 = (__int64 *)v2[2];
  }
  if ( (__int64)(a2 - v6) >> 3 < (unsigned __int64)(*((_DWORD *)v2 + 11) - (*((_DWORD *)v2 + 13) & 0x3FFFFFFFu)) )
  {
    v3 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
    if ( v3 == 7 )
      return (*((unsigned __int16 *)v2 + 16) >> 1) & 0x1F;
  }
  return v3;
}
