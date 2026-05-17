/*
 * XREFs of _ByteArrayToHexString @ 0x180128FD8
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x180128E24 (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ByteArrayToHexString(char *a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v6; // r9d
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  char v10; // dl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx

  v4 = *a4;
  *a4 = 66;
  if ( v4 >= 0x42 )
  {
    v6 = 0;
    v7 = v4;
    while ( 1 )
    {
      v8 = 2 * v6;
      v9 = 2LL * (unsigned int)(v8 + 1);
      if ( v7 <= v9 )
        break;
      v10 = *a1;
      ++v6;
      v11 = (unsigned __int8)*a1++;
      *(_WORD *)(a3 + 2 * v8) = a0123456789abcd[v11 >> 4];
      *(_WORD *)(v9 + a3) = a0123456789abcd[v10 & 0xF];
      if ( v6 >= 0x10 )
      {
        v12 = 4LL * v6;
        if ( v7 <= v12 )
          return 3221225507LL;
        *(_WORD *)(v12 + a3) = 0;
        return 0LL;
      }
    }
  }
  return 3221225507LL;
}
