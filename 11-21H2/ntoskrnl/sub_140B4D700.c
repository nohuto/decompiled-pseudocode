/*
 * XREFs of sub_140B4D700 @ 0x140B4D700
 * Callers:
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 * Callees:
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     sub_140B4D7CC @ 0x140B4D7CC (sub_140B4D7CC.c)
 *     sub_140B4D8B8 @ 0x140B4D8B8 (sub_140B4D8B8.c)
 */

__int64 __fastcall sub_140B4D700(char a1, __int64 a2, int *a3, int *a4)
{
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax

  v8 = -1073741275;
  v9 = sub_1403BE664(1380011332);
  v11 = 0;
  if ( !v9 || (LOBYTE(v10) = a1, v8 = sub_140B4D8B8(v9, v10, a2), v8 == -1073741275) )
  {
    v12 = sub_1403BE664(1397904969);
    if ( !v12 )
    {
LABEL_7:
      *(_QWORD *)(a2 + 4) = 0LL;
      *(_DWORD *)a2 = 0;
      *a3 = 0;
      goto LABEL_8;
    }
    LOBYTE(v13) = a1;
    v8 = sub_140B4D7CC(v12, v13, a2);
  }
  if ( v8 < 0 )
    goto LABEL_7;
  *a3 = *(unsigned __int8 *)(a2 + 8) | (*(_DWORD *)(a2 + 4) << 8);
  *a4 = 0;
  v14 = *(_BYTE *)(a2 + 9) & 0x1F;
  *a4 = v14;
  v11 = v14 | (32 * (*(_BYTE *)(a2 + 10) & 7));
LABEL_8:
  *a4 = v11;
  return (unsigned int)v8;
}
