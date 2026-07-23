/*
 * XREFs of sub_140A9C668 @ 0x140A9C668
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140A89C30 @ 0x140A89C30 (sub_140A89C30.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 */

__int64 __fastcall sub_140A9C668(const void **String2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *v7; // rbx
  __int64 v8; // rax
  void *v9; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  DestinationString = 0LL;
  if ( (_DWORD)InitSafeBootMode )
  {
    v2 = -1073738742;
LABEL_13:
    if ( qword_140C1ACB0 )
    {
      ExFreePoolWithTag(qword_140C1ACB0, 0x6D4D7644u);
      qword_140C1ACB0 = 0LL;
    }
    return v2;
  }
  if ( qword_140C1ACB0 )
    return 3221228555LL;
  sub_140A89D58();
  sub_140A82328(v4, 0, v5, v6);
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  qword_140C1ACB0 = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)dword_140C1ACB8, 0x6D4D7644u);
  if ( qword_140C1ACB0 )
  {
    RtlInitUnicodeString(&DestinationString, &word_140A7DDB0);
    if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
    {
      v7 = sub_1406F5B50();
      v2 = sub_140A89C30();
      sub_1406F5AF0((__int64)v7);
    }
    else
    {
      v8 = sub_140A9A588(String2);
      v9 = (void *)v8;
      if ( v8 )
      {
        v2 = sub_140A812D0(v8, &v11, 1);
        if ( !v11 )
          ExFreePoolWithTag(v9, 0);
      }
      else
      {
        v2 = -1073741670;
      }
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741801;
}
