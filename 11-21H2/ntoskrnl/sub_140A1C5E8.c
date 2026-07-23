/*
 * XREFs of sub_140A1C5E8 @ 0x140A1C5E8
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140A1ACFC @ 0x140A1ACFC (sub_140A1ACFC.c)
 *     sub_140A1BF48 @ 0x140A1BF48 (sub_140A1BF48.c)
 *     sub_140A1C0F0 @ 0x140A1C0F0 (sub_140A1C0F0.c)
 *     sub_140A1C148 @ 0x140A1C148 (sub_140A1C148.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A1C5E8(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        char *a3,
        unsigned int a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6)
{
  const UNICODE_STRING *v6; // rbx
  size_t v7; // r15
  _BYTE *v9; // rdi
  __int64 v11; // r14
  int v12; // r12d
  char *v13; // rsi
  int v14; // r8d
  char v15; // di
  int v16; // ebx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-50h]
  char v21[4]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  UNICODE_STRING v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a2;
  v22 = 0;
  v7 = a4;
  v23 = 0LL;
  LOBYTE(v26) = 0;
  RtlInitUnicodeString(DestinationString, &word_140011C40);
  v9 = a6;
  *a6 = 0;
  if ( !(_DWORD)v7 )
    return 0LL;
  qsort(a3, v7, 0x18uLL, (int (__cdecl *)(const void *, const void *))sub_14064CC00);
  v11 = 0LL;
  v12 = *((_DWORD *)a3 + 5) - 1;
  v13 = a3 + 18;
  do
  {
    v14 = *(_DWORD *)(v13 + 2);
    if ( v14 != v12 )
    {
      v15 = 0;
      v12 = *(_DWORD *)(v13 + 2);
      if ( v14 )
      {
        v16 = sub_140A1C148(a1, v6, v14, 1, &v23, 0LL, 0LL, 0LL, &v26);
        if ( v16 < 0 )
          return (unsigned int)v16;
        v15 = v26;
      }
      else
      {
        RtlInitUnicodeString(&v23, L"---\r\n");
        LOBYTE(v26) = 0;
      }
      v16 = sub_140A1BF48((__int64)DestinationString, (__int64)a6, &v23, &v22);
      if ( v15 )
        ExFreePoolWithTag(v23.Buffer, 0);
      if ( v16 < 0 )
        return (unsigned int)v16;
      v9 = a6;
    }
    v17 = *(_WORD *)v13;
    if ( *(_WORD *)v13 >= 4u )
      v17 = 3;
    v16 = sub_140A1C0F0((__int64)DestinationString, (__int64)v9, off_14000AD18[v17], &v22);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v21[0] = 0;
    v16 = sub_140A1ACFC((unsigned int *)&a3[24 * v11], (__int64)&v23, v18, v19, v20, v21);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v16 = sub_140A1BF48((__int64)DestinationString, (__int64)v9, &v23, &v22);
    ExFreePoolWithTag(v23.Buffer, 0);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v16 = sub_140A1C0F0((__int64)DestinationString, (__int64)v9, L"\r\n", &v22);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v6 = a2;
    v11 = (unsigned int)(v11 + 1);
    v13 += 24;
  }
  while ( (unsigned int)v11 < (unsigned int)v7 );
  return 0;
}
