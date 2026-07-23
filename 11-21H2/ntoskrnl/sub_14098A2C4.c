/*
 * XREFs of sub_14098A2C4 @ 0x14098A2C4
 * Callers:
 *     sub_1405CDB50 @ 0x1405CDB50 (sub_1405CDB50.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405C8024 @ 0x1405C8024 (sub_1405C8024.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098A2C4(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  void *v4; // r12
  unsigned int v5; // esi
  char *v6; // rax
  char *v7; // r14
  unsigned int v8; // r13d
  __int64 v9; // rbp
  WCHAR *v10; // rax
  char *v11; // rax
  signed __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned int v15; // ebp
  char *v17; // [rsp+68h] [rbp+10h]
  const WCHAR *SourceString; // [rsp+70h] [rbp+18h]
  __int64 Pool2; // [rsp+78h] [rbp+20h]

  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  v2 = 0;
  if ( !qword_140D01518
    || (v3 = *((unsigned int *)qword_140D01518 + 1), !(_DWORD)v3)
    || !qword_140D068A8
    || (v4 = *(void **)(qword_140D068A8 + 112)) == 0LL )
  {
    v2 = -1073741637;
    goto LABEL_20;
  }
  v5 = v3 + a1[1];
  if ( v5 < (unsigned int)v3 )
  {
    v2 = -1073741675;
    goto LABEL_20;
  }
  Pool2 = ExAllocatePool2(64LL, (v5 * *(_DWORD *)qword_140D068A8) << 6, 1766674512LL);
  if ( !Pool2 || (v6 = (char *)ExAllocatePool2(64LL, 24 * v5 + 8, 1766674512LL), (v7 = v6) == 0LL) )
  {
LABEL_8:
    v2 = -1073741670;
    goto LABEL_20;
  }
  *((_DWORD *)v6 + 1) = v5;
  v8 = v3;
  *(_DWORD *)v6 = *(_DWORD *)qword_140D01518;
  if ( (unsigned int)v3 < v5 )
  {
    v17 = &v6[16 * v3 + 8 + 8 * v3];
    do
    {
      v9 = 2LL * (v8 - (unsigned int)v3);
      v10 = (WCHAR *)ExAllocatePool2(64LL, 2LL * LOWORD(a1[4 * (v8 - (unsigned int)v3) + 3]) + 2, 1766674512LL);
      SourceString = v10;
      if ( !v10 )
        goto LABEL_8;
      memmove(
        v10,
        *(const void **)&a1[4 * (v8 - (unsigned int)v3) + 4],
        2LL * LOWORD(a1[4 * (v8 - (unsigned int)v3) + 3]));
      RtlInitUnicodeString((PUNICODE_STRING)&v7[16 * v8 + 16 + 8 * v8], SourceString);
      ++v8;
      *(_DWORD *)v17 = a1[2 * v9 + 2];
      v17 += 24;
    }
    while ( v8 < v5 );
  }
  v11 = v7 + 8;
  v12 = (_BYTE *)qword_140D01518 - v7;
  v13 = v3;
  do
  {
    *(_OWORD *)v11 = *(_OWORD *)&v11[v12];
    *((_QWORD *)v11 + 2) = *(_QWORD *)&v11[v12 + 16];
    v11 += 24;
    --v13;
  }
  while ( v13 );
  ExFreePoolWithTag(qword_140D01518, 0x694D5050u);
  v14 = qword_140D068A8;
  v15 = 0;
  for ( qword_140D01518 = v7; v15 < *(_DWORD *)qword_140D068A8; ++v15 )
  {
    sub_1405C8024(448LL * v15 + v14 + 64, v5, (char *)(Pool2 + ((unsigned __int64)(v15 * v5) << 6)));
    v14 = qword_140D068A8;
  }
  ExFreePoolWithTag(v4, 0x694D5050u);
  *a1 = v3 + 1;
LABEL_20:
  sub_1402935D0((ULONG_PTR)&qword_140C23010);
  return v2;
}
