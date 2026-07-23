/*
 * XREFs of sub_140A34148 @ 0x140A34148
 * Callers:
 *     sub_140780D40 @ 0x140780D40 (sub_140780D40.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExGetPreviousMode @ 0x1402DFD50 (ExGetPreviousMode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140964B50 @ 0x140964B50 (sub_140964B50.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A34148(unsigned __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rdx
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r14
  unsigned __int64 v8; // rcx
  bool v9; // cl
  __int64 v10; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-1B8h] BYREF
  char v13; // [rsp+30h] [rbp-1A8h] BYREF
  UNICODE_STRING SourceString; // [rsp+178h] [rbp-60h] BYREF

  DestinationString = 0LL;
  if ( ExGetPreviousMode() == 1 )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v3 = a1;
    v4 = &v13;
    v5 = 3LL;
    do
    {
      *(_OWORD *)v4 = *(_OWORD *)v3;
      *((_OWORD *)v4 + 1) = *(_OWORD *)(v3 + 16);
      *((_OWORD *)v4 + 2) = *(_OWORD *)(v3 + 32);
      *((_OWORD *)v4 + 3) = *(_OWORD *)(v3 + 48);
      *((_OWORD *)v4 + 4) = *(_OWORD *)(v3 + 64);
      *((_OWORD *)v4 + 5) = *(_OWORD *)(v3 + 80);
      *((_OWORD *)v4 + 6) = *(_OWORD *)(v3 + 96);
      v4 += 128;
      *((_OWORD *)v4 - 1) = *(_OWORD *)(v3 + 112);
      v3 += 128LL;
      --v5;
    }
    while ( v5 );
    *(_QWORD *)v4 = *(_QWORD *)v3;
    if ( SourceString.MaximumLength
      && (Length = SourceString.Length) != 0
      && (Buffer = SourceString.Buffer) != 0LL
      && ((SourceString.MaximumLength | SourceString.Length) & 1) == 0
      && SourceString.Length <= SourceString.MaximumLength
      && SourceString.Length <= 0xFFFCu )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString.Length + 2LL, 0x6F637061u);
      if ( DestinationString.Buffer )
      {
        DestinationString.MaximumLength = Length + 2;
        DestinationString.Length = 0;
        memset(DestinationString.Buffer, 0, (unsigned __int16)(Length + 2));
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = (unsigned __int64)Buffer + SourceString.MaximumLength;
        if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v9 = (unsigned int)sub_140964B50(DestinationString.Buffer) == 0;
        v10 = a1 + 320;
        if ( a1 + 320 >= 0x7FFFFFFF0000LL )
          v10 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v10 = v9;
        v2 = 0;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741822;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x6F637061u);
  return v2;
}
