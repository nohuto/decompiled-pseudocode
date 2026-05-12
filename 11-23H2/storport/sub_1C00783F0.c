/*
 * XREFs of sub_1C00783F0 @ 0x1C00783F0
 * Callers:
 *     sub_1C00454F4 @ 0x1C00454F4 (sub_1C00454F4.c)
 *     StorPortRegistryRead @ 0x1C0046F70 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C0047100 (StorPortRegistryWrite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0025E74 @ 0x1C0025E74 (sub_1C0025E74.c)
 */

NTSTATUS __fastcall sub_1C00783F0(PCUNICODE_STRING SourceString, PUNICODE_STRING Destination, int a3, int a4)
{
  char *v6; // rdx
  unsigned int v7; // ebx
  NTSTATUS result; // eax
  unsigned int MaximumLength; // edx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  WCHAR *Pool2; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Source; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  char SourceStringa[24]; // [rsp+40h] [rbp-20h] BYREF

  Source = 0LL;
  DestinationString = 0LL;
  if ( a4 )
  {
    v6 = "\\Parameters\\Device";
  }
  else
  {
    sub_1C0025E74(SourceStringa, 24LL, "\\Parameters\\Device%d", a3);
    v6 = SourceStringa;
  }
  RtlInitAnsiString(&DestinationString, v6);
  v7 = 1;
  result = RtlAnsiStringToUnicodeString(&Source, &DestinationString, 1u);
  if ( result >= 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    v10 = -1;
    v11 = MaximumLength + Source.MaximumLength;
    if ( v11 < MaximumLength )
    {
      v12 = -1;
    }
    else
    {
      v7 = v11 + 2;
      v12 = MaximumLength + Source.MaximumLength;
      if ( v11 + 2 >= v11 )
      {
        v10 = v11 + 2;
LABEL_11:
        if ( v10 <= 0xFFFF )
        {
          Pool2 = (WCHAR *)ExAllocatePool2(64LL, v10, 1112697936LL);
          Destination->Buffer = Pool2;
          if ( !Pool2 )
            return -1073741670;
          Destination->MaximumLength = v10;
          RtlCopyUnicodeString(Destination, SourceString);
          appended = RtlAppendUnicodeStringToString(Destination, &Source);
          RtlFreeUnicodeString(&Source);
          return appended;
        }
LABEL_15:
        RtlFreeUnicodeString(&Source);
        return -1073741675;
      }
    }
    if ( v11 < MaximumLength || v7 < v12 )
      goto LABEL_15;
    goto LABEL_11;
  }
  return result;
}
