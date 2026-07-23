/*
 * XREFs of sub_14064FC7C @ 0x14064FC7C
 * Callers:
 *     sub_14064FD74 @ 0x14064FD74 (sub_14064FD74.c)
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     sub_140651394 @ 0x140651394 (sub_140651394.c)
 */

__int64 __fastcall sub_14064FC7C(__int64 *a1, int a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  int v7; // esi
  int v8; // ebp
  int v9; // ebx
  ULONG32 v10; // eax

  v4 = *a1;
  if ( a2 )
    v6 = *(_QWORD *)(v4 + 248) - 1LL;
  else
    v6 = 1LL;
  v7 = sub_140651394(v4, 1LL, v6, a3);
  if ( v7 >= 0 )
  {
    v7 = -1073741774;
    if ( *a3 == 0x5452415020494645LL
      && *((_DWORD *)a3 + 2) == 0x10000
      && *((_DWORD *)a3 + 3) == 92
      && *((_DWORD *)a3 + 21) == 128 )
    {
      v8 = *((_DWORD *)a3 + 20);
      if ( (unsigned int)(v8 - 1) <= 0x3FF && a3[3] == v6 )
      {
        v9 = *((_DWORD *)a3 + 4);
        *((_DWORD *)a3 + 4) = 0;
        v10 = RtlComputeCrc32(0, a3, 0x5Cu);
        *((_DWORD *)a3 + 4) = v9;
        if ( v10 == v9 )
          return a3[5] < (unsigned __int64)(((((v8 << 7) + *(_DWORD *)(*a1 + 236) - 1) & (unsigned int)-*(_DWORD *)(*a1 + 236)) >> *(_DWORD *)(*a1 + 240))
                                          + 2)
               ? 0xC0000032
               : 0;
      }
    }
  }
  return (unsigned int)v7;
}
