/*
 * XREFs of sub_140551D58 @ 0x140551D58
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1409335E0 @ 0x1409335E0 (sub_1409335E0.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403CF960 @ 0x1403CF960 (sub_1403CF960.c)
 *     sub_1403CF9A0 @ 0x1403CF9A0 (sub_1403CF9A0.c)
 *     sub_1403DD52C @ 0x1403DD52C (sub_1403DD52C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140554344 @ 0x140554344 (sub_140554344.c)
 *     ntoskrnl_17 @ 0x1406EB3B0 (ntoskrnl_17.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 *     sub_14096F688 @ 0x14096F688 (sub_14096F688.c)
 */

__int64 __fastcall sub_140551D58(__int64 a1, char a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  WCHAR SourceString[16]; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v2 = a1;
  String2 = 0LL;
  wcscpy(SourceString, (const wchar_t *)&xmmword_1404378E0);
  if ( !a2 )
    sub_1403CF9A0(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( !v2 )
  {
    if ( !ExAcquireResourceExclusiveLite(&stru_140C48520, 1u) )
    {
      v4 = -1073741823;
      goto LABEL_24;
    }
    v4 = sub_140554344();
    sub_1403CF960();
    goto LABEL_22;
  }
  if ( v2 == 1 )
  {
    if ( byte_140D00A88 || !byte_140C0C6B9 )
    {
      v4 = -1073741637;
      goto LABEL_24;
    }
    v5 = sub_14096F688(&String2);
    if ( v5 && RtlPrefixUnicodeString(&stru_14000A5D0, &String2, 1u) )
    {
      DestinationString.Buffer = String2.Buffer + 4;
      DestinationString.Length = String2.Length - 8;
      DestinationString.MaximumLength = String2.MaximumLength - 8;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = ntoskrnl_17();
      if ( *(_WORD *)v6 )
        *DestinationString.Buffer = **(_WORD **)(v6 + 8);
    }
    ExAcquireResourceExclusiveLite(&stru_140C48520, 1u);
    v4 = sub_140554344();
    if ( v4 >= 0 )
    {
      String2 = DestinationString;
      if ( (unsigned __int8)sub_14084BE78(v5, &String2) )
      {
        sub_1403CF960();
        v4 = 0;
      }
      else
      {
        if ( byte_140C097BF )
          sub_1403DD52C();
        v4 = -1073741823;
      }
    }
LABEL_22:
    ExReleaseResourceLite(&stru_140C48520);
    goto LABEL_24;
  }
  v4 = -1073741808;
LABEL_24:
  sub_1402F9540((__int64)CurrentThread);
  return (unsigned int)v4;
}
