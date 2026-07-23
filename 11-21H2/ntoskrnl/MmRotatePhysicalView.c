/*
 * XREFs of MmRotatePhysicalView @ 0x140660170
 * Callers:
 *     <none>
 * Callees:
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_140200D20 @ 0x140200D20 (sub_140200D20.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_14096D0B8 @ 0x14096D0B8 (sub_14096D0B8.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // rdi
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // rbp
  int v15; // eax
  NTSTATUS v16; // ebx
  PVOID v18; // r14
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h]

  LODWORD(v19) = 0;
  v6 = 0LL;
  v7 = *NumberOfBytes;
  v11 = (char *)VirtualAddress;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v16 = -1073741585;
LABEL_35:
    *NumberOfBytes = v6;
    return v16;
  }
  if ( (v7 & 0xFFF) != 0 )
    goto LABEL_18;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v16 = -1073741583;
    goto LABEL_35;
  }
  v12 = (unsigned __int64)VirtualAddress + v7 - 1;
  if ( v12 <= (unsigned __int64)VirtualAddress )
  {
LABEL_18:
    v16 = -1073741584;
    goto LABEL_35;
  }
  v20 = sub_14032A72C(*((_QWORD *)KeGetCurrentThread() + 23));
  v13 = sub_14030E7C0((unsigned __int64)v11, 0, (int *)&v19);
  v14 = (char *)v13;
  if ( !v13 )
  {
    v16 = v19;
    if ( (_DWORD)v19 == -1073741664 )
      v16 = -1073741819;
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v13 + 48) & 0x70) != 0x40
    || (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) < v12 >> 12 )
  {
    v16 = -1073741800;
    goto LABEL_34;
  }
  sub_140200CF0(v13);
  if ( Direction > MmToFrameBufferNoCopy )
  {
    if ( Direction == MmToRegularMemoryNoCopy )
    {
      v16 = sub_140200D20((unsigned __int64)v11, v12);
      sub_14032E700(v14);
      *NumberOfBytes = v7;
      if ( (WORD2(xmmword_140D06900) & 0x8000) != 0 && v7 )
        sub_14096D0B8(v11, v7, 3LL);
      return v16;
    }
    if ( v7 )
    {
      v18 = Context;
      do
      {
        v19 = 0LL;
        v16 = sub_14096D10C(v14, v11, v7, CopyFunction, v18, &v19);
        v6 += v19;
        if ( v16 == 1073741849 )
          break;
        v11 += v19;
        v7 -= v19;
      }
      while ( v7 );
    }
    else
    {
      v16 = v19;
    }
    goto LABEL_34;
  }
  if ( Direction )
    v15 = sub_14065FFA0((__int64)v14, (unsigned __int64)v11, (__int64)NewMdl, v7 >> 12);
  else
    v15 = sub_14096D3A4(v20, v14, v11, NewMdl, v7 >> 12, CopyFunction, Context);
  v16 = v15;
  if ( v15 < 0 )
  {
LABEL_34:
    sub_14032E700(v14);
    goto LABEL_35;
  }
  sub_14032E700(v14);
  *NumberOfBytes = v7;
  if ( (WORD2(xmmword_140D06900) & 0x8000) != 0 )
  {
    if ( v7 )
      sub_14096D0B8(v11, v7, (unsigned int)Direction);
  }
  return 0;
}
