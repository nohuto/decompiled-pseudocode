/*
 * XREFs of sub_14067A98C @ 0x14067A98C
 * Callers:
 *     sub_14067ABD0 @ 0x14067ABD0 (sub_14067ABD0.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14067A98C(void *a1, const UNICODE_STRING *a2, unsigned int *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r13
  int v6; // edi
  ULONG Length; // r12d
  unsigned int v10; // r14d
  __int64 result; // rax
  PVOID v12; // rcx
  __int64 Pool2; // rbx
  _WORD *v14; // rsi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  wchar_t *v18; // rax
  UNICODE_STRING v19; // xmm0
  void *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-38h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID P; // [rsp+C8h] [rbp+60h]

  v5 = a5;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  *v5 = -1;
  *a3 = 0;
  ResultLength = 0;
  P = 0LL;
  Length = 256;
  v10 = 0;
  ValueName = 0LL;
  String1 = 0LL;
  result = sub_14067B838(a1);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
    return 0LL;
  }
  v12 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v10 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v10;
  }
  ExFreePoolWithTag(v12, 0);
  Pool2 = ExAllocatePool2(256LL, 256LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  v14 = (_WORD *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !v14 )
  {
    v20 = (void *)Pool2;
    goto LABEL_22;
  }
  if ( !v10 )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    if ( !*(_WORD *)a4 )
      ExFreePoolWithTag(v14, 0);
    return 0LL;
  }
  while ( 1 )
  {
    LODWORD(v21) = v6;
    a5 = v14;
    sub_1402DFBC4(v14, 0xAuLL, &a5, 0LL, 0, L"%u", v21);
    ValueName.MaximumLength = 20;
    v15 = ((char *)a5 - (char *)v14) >> 1;
    ValueName.Length = (_DWORD)v15 == -1 ? 20 : 2 * v15;
    ValueName.Buffer = v14;
    v16 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, (PVOID)Pool2, Length, &ResultLength);
    if ( v16 < 0 )
      break;
    if ( *(_DWORD *)(Pool2 + 4) == 1 )
    {
      v17 = *(unsigned int *)(Pool2 + 12);
      if ( (unsigned int)v17 > 2 )
      {
        LODWORD(a5) = 0;
        sub_14067AB94(Pool2 + *(unsigned int *)(Pool2 + 8), v17, &a5);
        String1.MaximumLength = *(_WORD *)(Pool2 + 12);
        v18 = (wchar_t *)(Pool2 + *(unsigned int *)(Pool2 + 8));
        String1.Length = (unsigned __int16)a5;
        String1.Buffer = v18;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v19 = ValueName;
          *v5 = v6;
          *(UNICODE_STRING *)a4 = v19;
          goto LABEL_15;
        }
      }
    }
LABEL_14:
    if ( ++v6 >= v10 )
      goto LABEL_15;
  }
  if ( v16 != -2147483643 && v16 != -1073741789 )
    goto LABEL_14;
  ExFreePoolWithTag((PVOID)Pool2, 0);
  Length = ResultLength;
  Pool2 = ExAllocatePool2(256LL, ResultLength, 538996816LL);
  if ( Pool2 )
  {
    --v6;
    goto LABEL_14;
  }
  v20 = v14;
LABEL_22:
  ExFreePoolWithTag(v20, 0);
  return 3221225626LL;
}
