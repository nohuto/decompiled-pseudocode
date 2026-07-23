/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_THREADS @ 0x18012A714
 * Callers:
 *     PssNtWalkSnapshot @ 0x1801280E0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_THREADS(__int64 a1, PVOID *a2, _OWORD *a3)
{
  void *v5; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v8; // rdi
  char *v9; // rbp
  unsigned int v10; // ecx
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(void **)(a1 + 1008);
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(v5, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
    if ( result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v8 = (unsigned __int64)a2[1];
  if ( v8 >= *(_QWORD *)(a1 + 1000) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v9 = (char *)*a2;
  memset_thunk_772440563353939046(a3, 0, 0x88uLL);
  v10 = 128;
  *a3 = *(_OWORD *)&v9[v8];
  a3[1] = *(_OWORD *)&v9[v8 + 16];
  a3[2] = *(_OWORD *)&v9[v8 + 32];
  a3[3] = *(_OWORD *)&v9[v8 + 48];
  *((_QWORD *)a3 + 8) = *(_QWORD *)&v9[v8 + 64];
  *(_OWORD *)((char *)a3 + 72) = *(_OWORD *)&v9[v8 + 72];
  *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)&v9[v8 + 88];
  *((_QWORD *)a3 + 13) = *(_QWORD *)&v9[v8 + 104];
  *((_QWORD *)a3 + 14) = *(_QWORD *)&v9[v8 + 112];
  *((_WORD *)a3 + 60) = *(_WORD *)&v9[v8 + 120];
  *((_WORD *)a3 + 61) = *(_WORD *)&v9[v8 + 122];
  if ( *(_WORD *)&v9[v8 + 122] >= 2u )
  {
    *((_QWORD *)a3 + 16) = &v9[v8 + 128];
    v10 = (((*(unsigned __int16 *)&v9[v8 + 122] >> 1) + 15) & 0xFFFFFFF0) + 128;
  }
  a2[1] = (PVOID)(v8 + v10);
  return 0;
}
