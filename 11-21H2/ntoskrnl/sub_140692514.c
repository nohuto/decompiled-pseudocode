/*
 * XREFs of sub_140692514 @ 0x140692514
 * Callers:
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069295C @ 0x14069295C (sub_14069295C.c)
 *     sub_14077E5C0 @ 0x14077E5C0 (sub_14077E5C0.c)
 *     sub_14077EBE0 @ 0x14077EBE0 (sub_14077EBE0.c)
 *     sub_14077ECD0 @ 0x14077ECD0 (sub_14077ECD0.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140692514(__int64 a1, const void **a2, void *a3, const void **a4, int a5, int a6, _QWORD *a7)
{
  int v11; // ebx
  __int64 v12; // r9
  char *PoolWithTag; // rax
  char *v14; // rdi
  int v15; // eax
  int v16; // ecx
  PVOID v17; // rax
  void *v18; // rcx
  __int16 v19; // ax
  PVOID v20; // rax
  void *v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int16 v28; // ax
  int v29; // ebx
  _QWORD *v30; // rax
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v38; // [rsp+80h] [rbp+30h] BYREF

  v38 = 0LL;
  Source = 0LL;
  v35 = 0LL;
  String1 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  v11 = a5;
  if ( (a5 & 0xE0000007) != a5 )
    return (unsigned int)-1073741811;
  sub_14077ECD0(a2);
  sub_14077ECD0(v12);
  sub_14077EBE0(a2, &v38, &String1);
  if ( !RtlEqualUnicodeString(&String1, &String2, 1u) )
    return (unsigned int)-1073741811;
  sub_14077EBE0(a2, &v38, &String1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x48uLL);
  v15 = a6;
  v16 = -1;
  *((_DWORD *)v14 + 14) = v11;
  if ( v15 )
    v16 = v15;
  *((_DWORD *)v14 + 15) = v16;
  v17 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a2 + 1), 0x67655256u);
  *((_QWORD *)v14 + 1) = v17;
  v18 = v17;
  if ( v17
    && (v19 = *(_WORD *)a2,
        *((_WORD *)v14 + 1) = *(_WORD *)a2,
        *(_WORD *)v14 = v19,
        memmove(v18, a2[1], *(unsigned __int16 *)a2),
        v20 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a4 + 1), 0x67655256u),
        *((_QWORD *)v14 + 4) = v20,
        (v21 = v20) != 0LL) )
  {
    v22 = *(_WORD *)a4;
    *((_WORD *)v14 + 12) = *(_WORD *)a4;
    *((_WORD *)v14 + 13) = v22;
    memmove(v21, a4[1], *(unsigned __int16 *)a4);
    *((_WORD *)v14 + 32) = sub_14077E5C0(v14);
    *((_WORD *)v14 + 33) = sub_14077E5C0(v14 + 24);
    sub_14077EBE0(a2, &v38, &String1);
    if ( !String1.Length )
    {
LABEL_16:
      if ( a3 )
        ObfReferenceObjectWithTag(a3, 0x67655256u);
      else
        a3 = 0LL;
      v30 = a7;
      v29 = 0;
      *((_QWORD *)v14 + 2) = a3;
      *v30 = v14;
      return (unsigned int)v29;
    }
    v23 = sub_14069295C(a1, v14, &v35);
    v24 = v23;
    if ( !v23 || (v25 = *(_DWORD *)(v23 + 56), (v25 & 4) != 0) )
    {
      v29 = -1073741811;
    }
    else
    {
      v26 = v35;
      *((_DWORD *)v14 + 14) |= v25 & 2;
      v27 = 0LL;
      v38 = 0LL;
      if ( v26 )
      {
        do
        {
          sub_14077EBE0(v14, &v38, &String1);
          --v26;
        }
        while ( v26 );
        v27 = v38;
      }
      v28 = *(_WORD *)v14;
      Source.Buffer = (wchar_t *)(*((_QWORD *)v14 + 1) + 2 * v27);
      Source.Length = v28 - 2 * v27;
      Source.MaximumLength = Source.Length;
      v29 = sub_14077FB68((PCUNICODE_STRING)(v24 + 24), &Source, (PUNICODE_STRING)(v14 + 40));
      if ( v29 >= 0 )
        goto LABEL_16;
    }
  }
  else
  {
    v29 = -1073741670;
  }
  v32 = (void *)*((_QWORD *)v14 + 1);
  if ( v32 )
    ExFreePoolWithTag(v32, 0x67655256u);
  v33 = (void *)*((_QWORD *)v14 + 4);
  if ( v33 )
    ExFreePoolWithTag(v33, 0x67655256u);
  v34 = (void *)*((_QWORD *)v14 + 6);
  if ( v34 )
    ExFreePoolWithTag(v34, 0x67655256u);
  ExFreePoolWithTag(v14, 0x67655256u);
  return (unsigned int)v29;
}
