/*
 * XREFs of sub_1C0078140 @ 0x1C0078140
 * Callers:
 *     sub_1C00AD11C @ 0x1C00AD11C (sub_1C00AD11C.c)
 *     sub_1C00AD268 @ 0x1C00AD268 (sub_1C00AD268.c)
 *     sub_1C00AD3A8 @ 0x1C00AD3A8 (sub_1C00AD3A8.c)
 *     sub_1C00AE090 @ 0x1C00AE090 (sub_1C00AE090.c)
 *     sub_1C00AE918 @ 0x1C00AE918 (sub_1C00AE918.c)
 *     sub_1C00AEDD0 @ 0x1C00AEDD0 (sub_1C00AEDD0.c)
 *     sub_1C00AF4CC @ 0x1C00AF4CC (sub_1C00AF4CC.c)
 *     sub_1C00AF6D8 @ 0x1C00AF6D8 (sub_1C00AF6D8.c)
 *     sub_1C00AF8D0 @ 0x1C00AF8D0 (sub_1C00AF8D0.c)
 *     sub_1C00AFB40 @ 0x1C00AFB40 (sub_1C00AFB40.c)
 *     sub_1C00AFE68 @ 0x1C00AFE68 (sub_1C00AFE68.c)
 *     sub_1C00B013C @ 0x1C00B013C (sub_1C00B013C.c)
 *     sub_1C00B0368 @ 0x1C00B0368 (sub_1C00B0368.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0078014 @ 0x1C0078014 (sub_1C0078014.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C0078140(__int64 a1, char a2)
{
  int v4; // edi
  int v5; // ecx
  _DWORD Dst[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+88h] [rbp-20h]
  unsigned int v9; // [rsp+8Ch] [rbp-1Ch]

  memset_0(Dst, 0, 0x40uLL);
  Dst[0] = 9;
  v8 = v8 & 0xFFFFFF00 | 0xD1;
  v9 = v9 & 0xFFFFFFE1 | (16 * (a2 & 1)) | 1;
  BYTE1(v9) = 0;
  v4 = sub_1C00AEFFC(a1, 0, 0, 0, (__int64)Dst);
  if ( v4 < 0 )
  {
    sub_1C0078014(a1, 0, a2, 1, 0, v4);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 5960);
    if ( a2 )
    {
      if ( v5 != 1 )
        *(_DWORD *)(a1 + 5960) = 1;
    }
    else if ( v5 )
    {
      *(_DWORD *)(a1 + 5960) = 0;
    }
  }
  return (unsigned int)v4;
}
