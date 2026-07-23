/*
 * XREFs of sub_1405A1D20 @ 0x1405A1D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1405A29F8 @ 0x1405A29F8 (sub_1405A29F8.c)
 *     sub_140761F70 @ 0x140761F70 (sub_140761F70.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall sub_1405A1D20(__int64 a1, __int64 a2)
{
  char v4; // r12
  _QWORD *v5; // rdi
  char *v6; // r14
  __int64 v7; // rbp
  __int64 Pool2; // rax
  int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r9
  PMDL Mdl; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  struct _MDL *v16; // rcx
  char *v17; // rcx
  char *v18; // rcx
  _QWORD *v19; // rcx
  ULONG v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v21);
  if ( v6 && (v7 = v21, v21 >= 8) )
  {
    Pool2 = ExAllocatePool2(64LL, 144LL, 1349807944LL);
    v5 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v9 = -1073741670;
      goto LABEL_24;
    }
    v10 = Pool2 + 16;
    sub_140761F70(a1, Pool2 + 16);
    if ( (unsigned int)sub_14027B080(*(_QWORD *)(a1 + 48)) == 1 )
      v11 = sub_14027B520();
    else
      v11 = (__int64)sub_14026DFC0(1);
    v9 = sub_1409682E4(v10, v11);
    if ( v9 < 0 )
      goto LABEL_24;
    if ( (dword_140D06880 & 0x8000) != 0 )
    {
      v12 = v5[15];
      v4 = 1;
    }
    else
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), *(_DWORD *)(a1 + 64), 0, 0, 0LL);
      v5[15] = Mdl;
      v12 = (__int64)Mdl;
      if ( !Mdl )
        goto LABEL_4;
      v14 = 0;
      if ( ((Mdl->ByteCount + ((__int64)Mdl->StartVa & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v15 = 0LL;
        do
        {
          ++v14;
          *((_QWORD *)&Mdl[1].Next + v15) = qword_140C53288;
          v12 = v5[15];
          v15 = v14;
        }
        while ( v14 < (*(unsigned int *)(v12 + 40) + (*(_DWORD *)(v12 + 32) & 0xFFFuLL) + 4095) >> 12 );
      }
    }
    v9 = sub_140581D58(
           v10,
           (unsigned int)((_DWORD)v6 - *(_DWORD *)(a1 + 48)) >> 12,
           ((unsigned int)((_DWORD)v6 - *(_DWORD *)(a1 + 48)) >> 12)
         + ((v7 + 4095 + (unsigned __int64)((unsigned __int16)v6 & 0xFFF)) >> 12)
         - 1,
           v4,
           v12);
    if ( v9 >= 0 )
    {
      v16 = (struct _MDL *)v5[15];
      if ( v16 )
      {
        v17 = (char *)MmMapLockedPagesSpecifyCache(v16, 0, MmCached, 0LL, 0, 0x10u);
        if ( !v17 )
          goto LABEL_4;
        v18 = &v17[(_QWORD)v6 - *(_QWORD *)(a1 + 48)];
      }
      else
      {
        v18 = v6;
      }
      *((_DWORD *)v5 + 34) = v7;
      v5[16] = v18;
      v19 = *(_QWORD **)(a2 + 64);
      if ( *v19 != a2 + 56 )
        __fastfail(3u);
      *v5 = a2 + 56;
      v5[1] = v19;
      *v19 = v5;
      *(_QWORD *)(a2 + 64) = v5;
      v5 = 0LL;
    }
  }
  else
  {
    v9 = 0;
  }
LABEL_24:
  *(_DWORD *)(a2 + 72) = v9;
  if ( v5 )
    sub_1405A29F8(v5);
  return v9 >= 0;
}
