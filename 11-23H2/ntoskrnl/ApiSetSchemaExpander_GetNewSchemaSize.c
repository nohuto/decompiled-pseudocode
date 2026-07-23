/*
 * XREFs of ApiSetSchemaExpander_GetNewSchemaSize @ 0x140418AA4
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_GetNewSchemaSize(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r14d
  int v3; // r8d
  char v4; // r15
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // r11d
  int v9; // r10d
  int v10; // r9d
  int v11; // r8d
  int v12; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 204) + *(_DWORD *)(v1 + 20);
  v4 = *(_BYTE *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 208) + 3;
  *(_DWORD *)(a1 + 212) = v3;
  v6 = (v3 + 3) & 0xFFFFFFFC;
  v7 = (v5 + *(_DWORD *)(v1 + 28)) & 0xFFFFFFFC;
  *(_DWORD *)(a1 + 212) = v6;
  *(_DWORD *)(a1 + 216) = v7;
  if ( v4 )
    v2 = 44 * (*(_DWORD *)(a1 + 160) + *(_DWORD *)(a1 + 168));
  *(_DWORD *)(a1 + 220) = v2;
  v8 = *(_DWORD *)(a1 + 152) + *(_DWORD *)(v1 + 44) * (*(unsigned __int8 *)(v1 + 50) + 8);
  *(_DWORD *)(a1 + 224) = v8;
  v9 = *(_DWORD *)(a1 + 164) + *(_DWORD *)(v1 + 56) * (*(unsigned __int8 *)(v1 + 62) + 8);
  *(_DWORD *)(a1 + 228) = v9;
  v10 = *(_DWORD *)(a1 + 188) + *(_DWORD *)(v1 + 68) * (*(unsigned __int8 *)(v1 + 74) + 8);
  *(_DWORD *)(a1 + 232) = v10;
  v11 = *(_DWORD *)(a1 + 176) + *(_DWORD *)(v1 + 80) * (*(unsigned __int8 *)(v1 + 86) + 8);
  *(_DWORD *)(a1 + 236) = v11;
  v12 = *(_DWORD *)(a1 + 200) + *(_DWORD *)(v1 + 92);
  *(_DWORD *)(a1 + 240) = v12;
  return v2 + v6 + v7 + v8 + v9 + v10 + v11 + v12 + (v4 != 0 ? 136 : 108);
}
