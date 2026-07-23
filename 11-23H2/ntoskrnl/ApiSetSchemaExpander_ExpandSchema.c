/*
 * XREFs of ApiSetSchemaExpander_ExpandSchema @ 0x140418984
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_ExpandSchema(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edx

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)v4 = *(_OWORD *)v2;
  *(_OWORD *)(v4 + 16) = *(_OWORD *)(v2 + 16);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)(v2 + 32);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(v2 + 80);
  *(_QWORD *)(v4 + 96) = *(_QWORD *)(v2 + 96);
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(v2 + 104);
  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = v4 - *(unsigned __int16 *)(v4 + 6);
    v6 = v2 - *(unsigned __int16 *)(v2 + 6);
    *(_OWORD *)v5 = *(_OWORD *)v6;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v6 + 16);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v5 + 4) = a2;
  }
  *(_DWORD *)(v4 + 8) = a2;
  v7 = *(_DWORD *)(a1 + 212);
  *(_DWORD *)(v4 + 20) = v7;
  v8 = *(_DWORD *)(a1 + 216);
  v9 = *(_DWORD *)(v4 + 16) + v7;
  *(_DWORD *)(v4 + 28) = v8;
  v10 = *(_DWORD *)(a1 + 220);
  *(_DWORD *)(v4 + 36) = v10;
  *(_DWORD *)(v4 + 92) = *(_DWORD *)(a1 + 240);
  *(_WORD *)(v4 + 96) += *(_WORD *)(a1 + 196);
  result = (unsigned int)(v9 + v8);
  *(_DWORD *)(v4 + 24) = v9;
  *(_DWORD *)(v4 + 40) = result + v10;
  *(_DWORD *)(v4 + 32) = result;
  v12 = result + v10 + *(_DWORD *)(a1 + 224);
  *(_DWORD *)(v4 + 52) = v12;
  v13 = v12 + *(_DWORD *)(a1 + 228);
  *(_DWORD *)(v4 + 64) = v13;
  v14 = v13 + *(_DWORD *)(a1 + 232);
  *(_DWORD *)(v4 + 76) = v14;
  *(_DWORD *)(v4 + 88) = v14 + *(_DWORD *)(a1 + 236);
  return result;
}
