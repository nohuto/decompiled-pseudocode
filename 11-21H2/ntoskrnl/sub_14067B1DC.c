/*
 * XREFs of sub_14067B1DC @ 0x14067B1DC
 * Callers:
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14075EA10 @ 0x14075EA10 (sub_14075EA10.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14067AFB0 @ 0x14067AFB0 (sub_14067AFB0.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14067B1DC(UNICODE_STRING *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS appended; // ebx
  __int64 v7; // r14
  unsigned __int16 Length; // bx
  unsigned int v9; // edx
  __int64 Pool2; // rax
  UNICODE_STRING v12; // xmm0
  UNICODE_STRING String2; // [rsp+28h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING v17; // [rsp+68h] [rbp+17h]
  UNICODE_STRING v18; // [rsp+78h] [rbp+27h] BYREF
  UNICODE_STRING v19; // [rsp+88h] [rbp+37h] BYREF

  *(_QWORD *)&String1.Length = 1703960LL;
  *(_QWORD *)&v17.Length = 2359330LL;
  String1.Buffer = L"\\SystemRoot\\";
  v17.Buffer = L"System32\\Drivers\\";
  DestinationString = 0LL;
  Source = 0LL;
  v18 = 0LL;
  String2 = 0LL;
  v19 = 0LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  RtlInitUnicodeString(&String2, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  appended = sub_14067AFB0(a2, &DestinationString);
  if ( appended < 0 )
    goto LABEL_14;
  if ( (int)sub_14067B838(a2) < 0 || MEMORY[0xC] < 2u )
  {
    Source = DestinationString;
    v12 = *a1;
    v18 = v17;
    String2 = v12;
    RtlInitUnicodeString(&v19, L".SYS");
    Length = String2.Length;
  }
  else
  {
    if ( MEMORY[0xC] > 0xFFFFu )
    {
LABEL_19:
      appended = -2147483643;
      goto LABEL_14;
    }
    v7 = MEMORY[8];
    String2.MaximumLength = MEMORY[0xC];
    Length = MEMORY[0xC] - 2;
    String2.Buffer = (wchar_t *)MEMORY[8];
    String2.Length = MEMORY[0xC] - 2;
    if ( *(_WORD *)MEMORY[8] == 92 )
    {
      if ( RtlPrefixUnicodeString(&String1, &String2, 1u) )
      {
        Length -= 24;
        Source = DestinationString;
        String2.Length = Length;
        String2.Buffer = (wchar_t *)(v7 + 24);
      }
      else
      {
        RtlInitUnicodeString(&Source, 0LL);
      }
    }
    else
    {
      Source = DestinationString;
    }
  }
  v9 = Source.Length + 2 + v18.Length + v19.Length + Length;
  if ( v9 > 0xFFFF )
    goto LABEL_19;
  a3->MaximumLength = v9;
  a3->Length = 0;
  Pool2 = ExAllocatePool2(256LL, (unsigned __int16)v9, 538996553LL);
  a3->Buffer = (wchar_t *)Pool2;
  if ( Pool2 )
  {
    appended = RtlAppendUnicodeStringToString(a3, &Source);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(a3, &v18);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(a3, &String2);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(a3, &v19);
          if ( appended >= 0 )
            a3->Buffer[(unsigned __int64)a3->Length >> 1] = 0;
        }
      }
    }
  }
  else
  {
    appended = -1073741670;
  }
LABEL_14:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)appended;
}
