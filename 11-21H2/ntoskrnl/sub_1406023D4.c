/*
 * XREFs of sub_1406023D4 @ 0x1406023D4
 * Callers:
 *     sub_140602CF4 @ 0x140602CF4 (sub_140602CF4.c)
 *     sub_140602F2C @ 0x140602F2C (sub_140602F2C.c)
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1406023D4(_WORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  unsigned int v8; // r8d

  if ( a1 )
  {
    memset(a1, 0, 0x40uLL);
    if ( a2 && (v4 = *((_QWORD *)a2 + 1)) != 0 )
    {
      v5 = *a2 >> 1;
      if ( v5 >= 0x20 )
      {
        v6 = 31;
      }
      else
      {
        v6 = *a2 >> 1;
        if ( !v5 )
          return;
      }
      v7 = 0LL;
      v8 = 0;
      do
      {
        a1[v7] = *(_WORD *)(v7 * 2 + v4);
        v4 = *((_QWORD *)a2 + 1);
        if ( !*(_WORD *)(v7 * 2 + v4) )
          break;
        ++v8;
        ++v7;
      }
      while ( v8 < v6 );
      if ( v5 >= 0x20 )
        a1[30] = 126;
    }
    else
    {
      *(_DWORD *)a1 = 4259918;
    }
  }
}
