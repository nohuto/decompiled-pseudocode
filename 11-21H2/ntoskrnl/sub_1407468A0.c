/*
 * XREFs of sub_1407468A0 @ 0x1407468A0
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     sub_1402D1DA4 @ 0x1402D1DA4 (sub_1402D1DA4.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407468A0(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int64 v4; // rax
  int v9; // ebx
  unsigned int *v10; // rdi
  _WORD *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rbx
  wchar_t *v14; // rax
  const WCHAR *v15; // rsi
  NTSTATUS v16; // ebx
  unsigned int v17; // edx
  _WORD *v18; // rcx
  unsigned int v19; // edx
  unsigned __int16 Length; // r15
  int v21; // esi
  __int64 v22; // rsi
  UNICODE_STRING v23; // xmm0
  HANDLE KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING v26; // [rsp+40h] [rbp-41h] BYREF
  __int128 v27; // [rsp+50h] [rbp-31h] BYREF
  __int128 v28; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = *a2;
  KeyHandle = 0LL;
  P = 0LL;
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  v9 = 0;
  v10 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  UnicodeString = 0LL;
  if ( (unsigned int)v4 <= 4 || (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 != 37) || v11[(v4 >> 1) - 1] != 37 )
  {
    if ( sub_1402D1DA4(a3, (__int64)a2) )
    {
      if ( a4 )
        *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_19;
    }
    goto LABEL_24;
  }
  LODWORD(v28) = 1048590;
  *((_QWORD *)&v28 + 1) = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v12 = *a2 - 4;
    v13 = v12;
    UnicodeString.Length = v12;
    UnicodeString.MaximumLength = v12 + 2;
    v14 = (wchar_t *)sub_1406BE560((unsigned __int16)(v12 + 2));
    UnicodeString.Buffer = v14;
    v15 = v14;
    if ( !v14 )
      goto LABEL_24;
    memmove(v14, (const void *)(*((_QWORD *)a2 + 1) + 2LL), (unsigned int)v13);
    v15[v13 >> 1] = 0;
    v16 = sub_14067B838(KeyHandle, v15, 0, &P);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v16 >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( sub_1402D199C(P) )
      {
        v17 = v10[3];
        v18 = (_WORD *)((char *)v10 + v10[2]);
        LODWORD(P) = 0;
        sub_14067AB94(v18, v17, (int *)&P);
        LOWORD(v27) = (_WORD)P;
        WORD1(v27) = *((_WORD *)v10 + 6);
        *((_QWORD *)&v27 + 1) = (char *)v10 + v10[2];
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
      }
    }
  }
  v19 = *(unsigned __int16 *)(a1 + 40) + *a2 + 4;
  if ( *((_QWORD *)&v27 + 1) )
    v19 += (unsigned __int16)v27 + 2;
  if ( (unsigned __int64)v19 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_19;
  }
  v26.Length = v19;
  v26.MaximumLength = v19 + 2;
  v26.Buffer = (wchar_t *)sub_1406BE560((unsigned __int16)(v19 + 2));
  if ( !v26.Buffer )
  {
LABEL_24:
    v9 = -1073741670;
    goto LABEL_19;
  }
  v9 = sub_1402D1840((__int64)&v26, (__int64)&v28, 2048, L"@%wZ,%wZ", a1 + 40, a2);
  if ( v9 < 0 )
    goto LABEL_19;
  Length = v26.Length;
  v21 = v26.Length >> 1;
  if ( *((_QWORD *)&v27 + 1) )
  {
    v9 = sub_1402D17BC(&v28, L";%wZ", &v27);
    if ( v9 < 0 )
      goto LABEL_19;
    v26.Length = v28 + Length;
    v22 = (unsigned int)(v21 + 1);
  }
  else
  {
    v22 = v21 - (*a2 >> 1);
  }
  v23 = v26;
  v26 = 0LL;
  *(UNICODE_STRING *)a3 = v23;
  if ( a4 )
    RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v22));
LABEL_19:
  RtlFreeUnicodeString(&v26);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
