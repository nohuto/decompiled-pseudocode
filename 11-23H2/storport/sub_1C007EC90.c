/*
 * XREFs of sub_1C007EC90 @ 0x1C007EC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C0055EEC @ 0x1C0055EEC (sub_1C0055EEC.c)
 */

__int64 __fastcall sub_1C007EC90(int **a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  int v7; // r8d
  char v8; // r8
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) != 1 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v13 = MEMORY[0xC];
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xCu, (__int64)&unk_1C008B718, MEMORY[8], v13);
    }
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v12 = MEMORY[0xC];
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  if ( (unsigned int)(v7 - 7) > 7 || *(_DWORD *)(v6 + 12) > 1u )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v11 = *(_DWORD *)(v6 + 12);
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xDu, (__int64)&unk_1C008B718, v7, v11);
    }
    v8 = 2;
    v9 = *(_DWORD *)(v6 + 8);
    v12 = *(unsigned int *)(v6 + 12);
LABEL_14:
    v4 = -1073741435;
    sub_1C0055EEC(*a1, "ErrInvalidBoolData", v8, v9, v12, 0LL);
    return v4;
  }
  *a4 = *(_BYTE *)(v6 + 16);
  return v4;
}
