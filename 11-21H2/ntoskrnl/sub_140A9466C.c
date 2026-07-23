/*
 * XREFs of sub_140A9466C @ 0x140A9466C
 * Callers:
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_1409853FC @ 0x1409853FC (sub_1409853FC.c)
 *     sub_140A81DB4 @ 0x140A81DB4 (sub_140A81DB4.c)
 *     sub_140A89D2C @ 0x140A89D2C (sub_140A89D2C.c)
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int16 __fastcall sub_140A9466C(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned int v4; // r15d
  __int64 v5; // rbp
  unsigned __int64 *i; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // rsi
  char v11; // di
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v14; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  v2 = (struct _KPROCESS *)*((_QWORD *)KeGetCurrentThread() + 23);
  LOWORD(v3) = (_WORD)PsInitialSystemProcess;
  if ( !PsInitialSystemProcess )
    return v3;
  if ( v2 == PsInitialSystemProcess )
    return v3;
  if ( v2 == qword_140D06940 )
    return v3;
  if ( !BugCheckParameter2 )
    return v3;
  LOWORD(v3) = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v4 = (unsigned __int16)v3;
  v5 = 0LL;
  if ( !(_WORD)v3 )
    return v3;
  for ( i = (unsigned __int64 *)BackTrace; ; ++i )
  {
    v7 = *i;
    LODWORD(v3) = sub_140A89D2C(*i);
    if ( !(_DWORD)v3 )
      break;
    if ( dword_140C1ACA4 )
      goto LABEL_9;
LABEL_24:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      return v3;
  }
  LODWORD(v3) = sub_140A8ACE8(v8);
  if ( !(_DWORD)v3 )
  {
    if ( !qword_140C1AD20 )
      return v3;
    LOWORD(v3) = dword_140C1AD18;
    if ( !dword_140C1AD18 )
      return v3;
    if ( v7 < qword_140C1AD20 )
      return v3;
    v3 = qword_140C1AD20 + (unsigned int)dword_140C1AD18;
    if ( v7 >= v3 )
      return v3;
    goto LABEL_24;
  }
LABEL_9:
  LODWORD(v3) = sub_140A81DB4(v2);
  if ( !(_DWORD)v3 )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL);
    v10 = Object;
    if ( v9 < 0 )
      goto LABEL_16;
    v11 = 0;
    if ( (int)sub_1409853FC((__int64)Object, (__int64)&String1, 0x40u, &v14) >= 0
      && (RtlEqualUnicodeString(&String1, &stru_140A75148, 0) || RtlEqualUnicodeString(&String1, &stru_140A75158, 0)) )
    {
      v11 = 1;
    }
    LOWORD(v3) = ObfDereferenceObject(v10);
    if ( !v11 )
    {
LABEL_16:
      LOWORD(v3) = dword_140D4E094;
      if ( dword_140D4E094 )
        LOWORD(v3) = sub_140A8C924(0xC4u, 0xF6uLL, BugCheckParameter2, (ULONG_PTR)v2, (__int64)BackTrace[v5]);
    }
  }
  return v3;
}
