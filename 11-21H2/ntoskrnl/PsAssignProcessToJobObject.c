/*
 * XREFs of PsAssignProcessToJobObject @ 0x140688050
 * Callers:
 *     sub_1406880D0 @ 0x1406880D0 (sub_1406880D0.c)
 *     sub_1406E2E48 @ 0x1406E2E48 (sub_1406E2E48.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 * Callees:
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_140687EEC @ 0x140687EEC (sub_140687EEC.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, __int64 BugCheckParameter1, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)sub_140687EEC((__int64)Object, BugCheckParameter1, a3, &v8) < 0 )
      return 3221225506LL;
    result = sub_1406879B8(Object, BugCheckParameter1, a3, v8);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
