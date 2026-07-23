/*
 * XREFs of _ByteArrayToHexString @ 0x1800B2146
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x18012EFCC (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ByteArrayToHexString(char *a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v7; // r9d
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  char v11; // dl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx

  v4 = *a4;
  *a4 = 66;
  if ( v4 >= 0x42 )
  {
    v7 = 0;
    v8 = v4;
    while ( 1 )
    {
      v9 = 2 * v7;
      v10 = 2LL * (unsigned int)(v9 + 1);
      if ( v8 <= v10 )
        break;
      v11 = *a1;
      ++v7;
      v12 = (unsigned __int8)*a1++;
      *(_WORD *)(a3 + 2 * v9) = a0123456789abcd[v12 >> 4];
      *(_WORD *)(v10 + a3) = a0123456789abcd[v11 & 0xF];
      if ( v7 >= 0x10 )
      {
        v13 = 4LL * v7;
        if ( v8 <= v13 )
          return 3221225507LL;
        *(_WORD *)(v13 + a3) = 0;
        return 0LL;
      }
    }
  }
  return 3221225507LL;
}
