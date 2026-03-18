/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1406E9124
 * Callers:
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A0070 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140208AD8 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x140208C24 (RtlUnicodeStringCat.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406E137C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpLogTransactionAbortedByName @ 0x14091B86C (CmpLogTransactionAbortedByName.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  wchar_t *Buffer; // rbx
  int v9; // eax
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  UNICODE_STRING *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v16; // r8
  __int16 v17; // r10
  unsigned __int64 v18; // r11
  char *v19; // r9
  PCUNICODE_STRING p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+68h] [rbp+38h] BYREF

  DestinationString = 0LL;
  SourceString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || (unsigned int)dword_140C03868 <= 4 || !tlgKeywordOn((__int64)&dword_140C03868, 1LL) )
  {
    Buffer = DestinationString.Buffer;
    goto LABEL_3;
  }
  v9 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v12 = (UNICODE_STRING *)SourceString;
  if ( v9 < 0 )
    goto LABEL_27;
  if ( !a2 )
  {
    p_DestinationString = SourceString;
LABEL_26:
    CmpLogTransactionAbortedByName(p_DestinationString, a3, v10, a5);
    goto LABEL_27;
  }
  v13 = SourceString->Length + 2LL + a2->Length;
  if ( v13 <= 0xFFFF )
  {
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)CmpAllocateTransientPoolWithTag(
                                            PagedPool,
                                            (unsigned __int16)v13,
                                            0x624E4D43u,
                                            v11);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      goto LABEL_28;
    RtlUnicodeStringCopy(&DestinationString, v12);
    if ( (DestinationString.Length & 1) == 0
      && (DestinationString.MaximumLength & 1) == 0
      && DestinationString.Length <= DestinationString.MaximumLength
      && DestinationString.MaximumLength != 0xFFFF
      && (DestinationString.Buffer || !DestinationString.Length && !DestinationString.MaximumLength) )
    {
      v14 = (unsigned __int64)DestinationString.Length >> 1;
      v15 = L"\\";
      v16 = 0x7FFFLL;
      v17 = 0;
      v18 = ((unsigned __int64)DestinationString.MaximumLength >> 1) - v14;
      if ( (unsigned __int64)DestinationString.MaximumLength >> 1 != v14 )
      {
        v19 = (char *)DestinationString.Buffer + 2 * v14 - (_QWORD)L"\\";
        do
        {
          if ( !v16 )
            break;
          if ( !*v15 )
            break;
          *(const WCHAR *)((char *)v15 + (_QWORD)v19) = *v15;
          --v16;
          ++v15;
          ++v17;
        }
        while ( v16 + v18 - 0x7FFF );
      }
      DestinationString.Length = 2 * (v17 + v14);
    }
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
    goto LABEL_26;
  }
LABEL_27:
  Buffer = DestinationString.Buffer;
LABEL_28:
  if ( v12 )
    CmpFreeTransientPoolWithTag(v12, 0x624E4D43u);
LABEL_3:
  if ( Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)Buffer);
}
