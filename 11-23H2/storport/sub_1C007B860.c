/*
 * XREFs of sub_1C007B860 @ 0x1C007B860
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C0055EEC @ 0x1C0055EEC (sub_1C0055EEC.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C007C758 @ 0x1C007C758 (sub_1C007C758.c)
 *     sub_1C007FC70 @ 0x1C007FC70 (sub_1C007FC70.c)
 */

__int64 __fastcall sub_1C007B860(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  int **v8; // r14
  __int64 v9; // r13
  int v10; // r9d
  __int64 v11; // rax
  char v12; // r8
  int v13; // r9d
  int v14; // r15d
  unsigned int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r12
  __int64 v21; // r14
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  const void *v25; // rax
  size_t v26; // r8
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-48h]
  _QWORD *v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v4 = a4;
  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  v8 = a1;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x14u, (__int64)&unk_1C008B470, *(_DWORD *)(a3 + 8), *v5);
    v11 = *v5;
    v12 = 1;
    v13 = *(_DWORD *)(a3 + 8);
    goto LABEL_37;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = *(_DWORD *)(v9 + 8);
  if ( v10 != 5 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x15u, (__int64)&unk_1C008B470, v10, *(_DWORD *)(v9 + 12));
    v11 = *(unsigned int *)(v9 + 12);
    v12 = 2;
    v13 = *(_DWORD *)(v9 + 8);
LABEL_37:
    v29 = v11;
    goto LABEL_38;
  }
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= *(_DWORD *)(v4 + 16) )
    {
LABEL_23:
      v8 = a1;
      goto LABEL_24;
    }
    v31 = 0LL;
    v16 = *(_QWORD *)(v4 + 8) + 32LL * v15;
    v17 = sub_1C007C758(v16, v9, &v31);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v20 = v31;
      if ( v31 )
        break;
    }
    ++v15;
    if ( v17 < 0 )
      goto LABEL_23;
LABEL_21:
    v4 = v32;
  }
  v21 = *v31;
  if ( *(_QWORD *)v16 == 9LL )
  {
    if ( *(_DWORD *)(v21 + 8) == 5 )
    {
      v22 = *(_DWORD *)(v21 + 12);
LABEL_17:
      **(_DWORD **)(v16 + 16) = v22;
LABEL_20:
      v14 |= 1 << *((_DWORD *)v20 + 4);
      ++v15;
      goto LABEL_21;
    }
  }
  else if ( *(_QWORD *)v16 == 20LL && *(_DWORD *)(v21 + 8) == 15 )
  {
    LODWORD(v31) = *(_DWORD *)sub_1C007FC70(*v31, v18, v19);
    sub_1C007A4E8((char *)&v31, 4u);
    v22 = (int)v31;
    goto LABEL_17;
  }
  v23 = *(_DWORD *)(v16 + 24);
  if ( v23 >= *(_DWORD *)(v21 + 12) )
  {
    memset_0(*(void **)(v16 + 16), 0, v23);
    v25 = (const void *)sub_1C007FC70(v21, v24, *(unsigned int *)(v21 + 12));
    memmove(*(void **)(v16 + 16), v25, v26);
    *(_DWORD *)(v16 + 24) = *(_DWORD *)(v21 + 12);
    *(_DWORD *)(v16 + 28) = *(_DWORD *)(v21 + 8);
    goto LABEL_20;
  }
  v6 = -1073741789;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    sub_1C003EEB0(
      (__int64)off_1C0093070->AttachedDevice,
      0x16u,
      (__int64)&unk_1C008B470,
      v15,
      *(_DWORD *)(v16 + 24),
      *(_DWORD *)(v21 + 12));
  v27 = *(unsigned int *)(v21 + 12);
  v8 = a1;
  sub_1C0055EEC(*a1, "ErrInvalidLockingObjectInfo", 3, *(_QWORD *)v16, *(unsigned int *)(v16 + 24), v27);
LABEL_24:
  if ( (v14 & 0x3FD) != 0x3FD )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x17u, (__int64)&unk_1C008B470);
    v12 = 4;
    v29 = 0LL;
    LOBYTE(v13) = v14;
LABEL_38:
    v6 = -1073741435;
    sub_1C0055EEC(*v8, "ErrInvalidLockingObjectInfo", v12, v13, v29, 0LL);
  }
  return v6;
}
