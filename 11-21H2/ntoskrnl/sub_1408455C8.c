/*
 * XREFs of sub_1408455C8 @ 0x1408455C8
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     ExVerifySuite @ 0x1403CCF10 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140756AD4 @ 0x140756AD4 (sub_140756AD4.c)
 *     sub_14084565C @ 0x14084565C (sub_14084565C.c)
 */

__int64 sub_1408455C8()
{
  __int64 *v0; // rbx
  __int64 v1; // rsi
  int i; // edi
  __int64 v3; // r10
  int v4; // ecx
  int v5; // eax
  __int64 v7; // rdx

  if ( !ExVerifySuite(EmbeddedNT) || (dword_140D3CD60 & 1) == 0 )
  {
    v0 = (__int64 *)off_140D3B180;
    v1 = sub_140294CC0() & 4;
    for ( i = 0; i < 6; ++i )
    {
      v3 = *v0;
      if ( *v0 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( (v4 & 0x20) != 0 )
        {
          v7 = *v0;
          *(_QWORD *)(v3 + 56) = off_140D3B180[0][7];
          if ( (int)sub_140756AD4(*((struct _KPROCESS **)KeGetCurrentThread() + 23), v7, 0, 1) < 0 )
            *v0 = 0LL;
        }
        else
        {
          v5 = sub_14084565C(*v0, (v4 & 0x10) != 0 ? (unsigned int)v1 : 0);
          if ( v5 < 0 && (*(_DWORD *)(*v0 + 8) & 1) != 0 )
            KeBugCheckEx(0x6Bu, v5, 2uLL, (unsigned int)i, 0LL);
        }
      }
      ++v0;
    }
  }
  return 0LL;
}
