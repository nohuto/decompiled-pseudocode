/*
 * XREFs of sub_14094B7C0 @ 0x14094B7C0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

bool __fastcall sub_14094B7C0(_QWORD *Buf2, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 *v4; // r9
  unsigned int v5; // r8d
  _QWORD *v6; // r10
  __int64 v7; // rdx

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
    goto LABEL_11;
  v3 = *Buf2 - *(_QWORD *)off_140D3B790;
  if ( *Buf2 == *(_QWORD *)off_140D3B790 )
    v3 = Buf2[1] - *(_QWORD *)(off_140D3B790 + 8);
  if ( v3 )
  {
LABEL_11:
    if ( *((_DWORD *)off_140D3B2C8 + 4) == *((_DWORD *)Buf2 + 4) )
      return memcmp(off_140D3B2C8, Buf2, 0x10uLL) != 0;
  }
  else
  {
    v4 = &off_140D3B790;
    v5 = 0;
    while ( 1 )
    {
      v6 = (_QWORD *)*v4;
      if ( *(_DWORD *)(*v4 + 16) == *((_DWORD *)Buf2 + 4) )
      {
        v7 = *v6 - *Buf2;
        if ( *v6 == *Buf2 )
          v7 = v6[1] - Buf2[1];
        if ( !v7 )
          return 0;
      }
      ++v5;
      ++v4;
      if ( v5 >= 0xA )
        goto LABEL_11;
    }
  }
  return v2;
}
