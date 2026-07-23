/*
 * XREFs of ApiSetSchemaExpander_Initialize @ 0x140418BE0
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_Initialize(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rcx
  char v5; // al
  __int64 result; // rax

  if ( *a1 == 6 && (a1[2] & 4) != 0 && (v4 = a1 + 7, *(_BYTE *)v4 == 7) )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v4 = a1 + 7;
  }
  *(_BYTE *)(a3 + 16) = v5;
  if ( *a1 != 6 || (a1[2] & 4) == 0 || *(_BYTE *)v4 != 7 )
    v4 = a1;
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 8) = v4;
  *(_QWORD *)(a3 + 24) = a2;
  *(_DWORD *)(a3 + 156) = v4[11];
  *(_DWORD *)(a3 + 168) = v4[14];
  *(_DWORD *)(a3 + 180) = v4[20];
  *(_DWORD *)(a3 + 192) = v4[17];
  *(_OWORD *)(a3 + 48) = *(_OWORD *)v4;
  *(_OWORD *)(a3 + 64) = *((_OWORD *)v4 + 1);
  *(_OWORD *)(a3 + 80) = *((_OWORD *)v4 + 2);
  *(_OWORD *)(a3 + 96) = *((_OWORD *)v4 + 3);
  *(_OWORD *)(a3 + 112) = *((_OWORD *)v4 + 4);
  *(_OWORD *)(a3 + 128) = *((_OWORD *)v4 + 5);
  result = (unsigned int)v4[24];
  *(_DWORD *)(a3 + 144) = result;
  return result;
}
