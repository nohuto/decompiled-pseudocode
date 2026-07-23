/*
 * XREFs of sub_1406EBE78 @ 0x1406EBE78
 * Callers:
 *     sub_1406EBDB0 @ 0x1406EBDB0 (sub_1406EBDB0.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1406EBE78(PEPROCESS Process, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  unsigned int ProcessId; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v2 = qword_140C15FB0;
  result = EtwProviderEnabled(qword_140C15FB0, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v9 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Size = 4;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v7 = &v10;
    v8 = 4;
    return EtwWrite(v2, &stru_14000EE78, 0LL, 2u, &UserData);
  }
  return result;
}
