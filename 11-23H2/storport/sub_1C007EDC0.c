/*
 * XREFs of sub_1C007EDC0 @ 0x1C007EDC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C0055EEC @ 0x1C0055EEC (sub_1C0055EEC.c)
 *     sub_1C007FC70 @ 0x1C007FC70 (sub_1C007FC70.c)
 */

__int64 __fastcall sub_1C007EDC0(int **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r9d
  char v8; // r8
  int v9; // r9d
  __int64 v10; // rcx
  const void *v11; // rax
  size_t v12; // r8
  void *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) < 2u )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v16 = MEMORY[0xC];
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xAu, (__int64)&unk_1C008B718, MEMORY[8], v16);
    }
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v15 = MEMORY[0xC];
    goto LABEL_13;
  }
  v5 = *(__int64 **)(a3 + 16);
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 12);
  if ( v7 > 4 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C008B718, v7);
    v8 = 2;
    v15 = 0LL;
    v9 = *(_DWORD *)(v6 + 12);
LABEL_13:
    v3 = -1073741435;
    sub_1C0055EEC(*a1, "ErrInvalidSyncData", v8, v9, v15, 0LL);
    return v3;
  }
  v10 = *v5;
  *(_DWORD *)(a2 + 8) = 0;
  v11 = (const void *)sub_1C007FC70(v10, a2, *(unsigned int *)(v6 + 12));
  memmove(v13, v11, v12);
  return v3;
}
