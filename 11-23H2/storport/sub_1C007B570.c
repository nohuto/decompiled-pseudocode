/*
 * XREFs of sub_1C007B570 @ 0x1C007B570
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C0055EEC @ 0x1C0055EEC (sub_1C0055EEC.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C007FC70 @ 0x1C007FC70 (sub_1C007FC70.c)
 */

__int64 __fastcall sub_1C007B570(int **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v8; // rcx
  const void *v9; // rax
  size_t v10; // r8
  const char *v11; // rdx
  char v12; // r8
  __int64 v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a3;
  if ( *(_QWORD *)(a3 + 8) != 0x200000005LL )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v15 = *(_DWORD *)(a3 + 12);
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xAu, (__int64)&unk_1C008B470, *(_DWORD *)(a3 + 8), v15);
    }
    v11 = "ErrInvalidAssignNamespaceResult";
    v12 = 1;
    v14 = *(unsigned int *)(v6 + 12);
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(v6 + 8) != 0x80000000FLL )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C008B470, *(_DWORD *)(v6 + 8));
    v11 = "ErrInvalidBandMetadata";
    v14 = 0LL;
    v12 = 2;
LABEL_12:
    v5 = -1073741435;
    sub_1C0055EEC(*a1, v11, v12, *(_DWORD *)(v6 + 8), v14, 0LL);
    return v5;
  }
  v8 = *(_QWORD *)(a3 + 16);
  *a4 = 0LL;
  v9 = (const void *)sub_1C007FC70(v8, a2, *(unsigned int *)(v6 + 12));
  memmove(a4, v9, v10);
  sub_1C007A4E8((char *)a4, 8u);
  return v5;
}
