/*
 * XREFs of sub_14024B768 @ 0x14024B768
 * Callers:
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 * Callees:
 *     sub_140256EAC @ 0x140256EAC (sub_140256EAC.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

_BOOL8 __fastcall sub_14024B768(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // r14d
  __int64 i; // rbx
  unsigned __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx

  v4 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  for ( i = a1 + 128; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    v6 = *(_QWORD *)(i + 8);
    v7 = *(unsigned __int16 *)(i + 32) >> 1;
    if ( a2 >= v6 && a2 < v6 + 8LL * *(unsigned int *)(i + 44) )
      break;
    if ( (*(_BYTE *)(i + 34) & 2) != 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
    {
      v10 = sub_140256EAC(a1, v4, i);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 72);
        if ( a2 >= v11 && a2 < v11 + 8LL * *(unsigned int *)(i + 44) )
          break;
      }
    }
    else
    {
      v8 = sub_14027B234(i);
      if ( v8 )
      {
        v12 = *(_QWORD *)(v8 + 72);
        if ( a2 >= v12 && a2 < v12 + 8LL * *(unsigned int *)(i + 44) )
          return 1LL;
      }
    }
  }
  return (v7 & 0x1Fu) >= 4;
}
