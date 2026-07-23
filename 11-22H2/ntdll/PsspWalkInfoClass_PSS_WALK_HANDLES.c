/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x18012A598
 * Callers:
 *     PssNtWalkSnapshot @ 0x1801280E0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_HANDLES(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v5; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // ecx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(void **)(a1 + 976);
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*(_QWORD *)a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(
               v5,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)a2,
               0LL,
               0LL,
               0LL,
               &ViewSize,
               ViewShare,
               0,
               2u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 >= *(_QWORD *)(a1 + 968) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v9 = v8 + *(_QWORD *)a2;
  memset_thunk_772440563353939046(a3, 0, 0x48uLL);
  v10 = 16;
  *a3 = *(_DWORD *)v9;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v9 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v9 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v9 + 8);
  if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
  {
    v11 = *(unsigned __int16 *)(v9 + 16);
    *((_WORD *)a3 + 8) = v11;
    *((_QWORD *)a3 + 3) = v9 + 18;
    v10 = v11 + 18;
  }
  if ( (*(_BYTE *)(v9 + 4) & 2) != 0 )
  {
    v12 = v10;
    v13 = v10 + 2;
    v14 = *(unsigned __int16 *)(v12 + v9);
    *((_WORD *)a3 + 16) = v14;
    *((_QWORD *)a3 + 5) = v9 + v13;
    v10 = v14 + v13;
  }
  if ( (*(_BYTE *)(v9 + 4) & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v9 + v10;
    v10 += 56;
  }
  if ( (*(_BYTE *)(v9 + 4) & 8) != 0 )
  {
    v15 = v10;
    v16 = v10 + 2;
    v17 = *(unsigned __int16 *)(v15 + v9);
    *((_WORD *)a3 + 28) = v17;
    *((_QWORD *)a3 + 8) = v9 + v16;
    v10 = v17 + v16;
  }
  *(_QWORD *)(a2 + 8) = v8 + v10;
  return 0;
}
