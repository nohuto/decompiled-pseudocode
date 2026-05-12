/*
 * XREFs of sub_1C007B6C0 @ 0x1C007B6C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C0055EEC @ 0x1C0055EEC (sub_1C0055EEC.c)
 *     sub_1C007FC70 @ 0x1C007FC70 (sub_1C007FC70.c)
 */

__int64 __fastcall sub_1C007B6C0(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v8; // r9d
  size_t v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // rdx
  const void *v12; // rax
  size_t v13; // r8
  char v14; // r8
  __int64 v16; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a3;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60(
        (__int64)off_1C0093070->AttachedDevice,
        0xCu,
        (__int64)&unk_1C008B470,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12));
    v14 = 1;
    v16 = *(unsigned int *)(v6 + 12);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v8 = *(_DWORD *)(v6 + 8);
  if ( (unsigned int)(v8 - 15) > 2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xDu, (__int64)&unk_1C008B470, v8);
    v14 = 2;
    v16 = 0LL;
LABEL_17:
    v5 = -1073741435;
    sub_1C0055EEC(*a1, "ErrInvalidBandMetadata", v14, *(_DWORD *)(v6 + 8), v16, 0LL);
    return v5;
  }
  v9 = *(unsigned int *)(a4 + 24);
  v10 = *(_DWORD *)(v6 + 12);
  if ( v10 <= (unsigned int)v9 )
  {
    memset_0(*(void **)(a4 + 16), 0, v9);
    v12 = (const void *)sub_1C007FC70(v6, v11, *(unsigned int *)(v6 + 12));
    memmove(*(void **)(a4 + 16), v12, v13);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(v6 + 12);
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xEu, (__int64)&unk_1C008B470, v10, *(_DWORD *)(a4 + 24));
    v5 = -1073741789;
    sub_1C0055EEC(*a1, "ErrInvalidBandMetadata", 3, *(_DWORD *)(v6 + 12), *(unsigned int *)(a4 + 24), 0LL);
  }
  return v5;
}
