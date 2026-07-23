/*
 * XREFs of sub_140B0A4A8 @ 0x140B0A4A8
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_1405EEE8C @ 0x1405EEE8C (sub_1405EEE8C.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 *     sub_140B51F9C @ 0x140B51F9C (sub_140B51F9C.c)
 *     sub_140B52090 @ 0x140B52090 (sub_140B52090.c)
 */

__int64 sub_140B0A4A8()
{
  struct _KTHREAD *CurrentThread; // rdi
  int v1; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v1 = dword_140C4F444;
  qword_140C4F438 = (__int64)&qword_140C4F430;
  qword_140C4F430 = &qword_140C4F430;
  if ( dword_140C4F444 < 0 )
    return (unsigned int)v1;
  if ( (xmmword_140D06920 & 0x20000000000LL) == 0 )
    return 0;
  v1 = sub_140B52090();
  if ( v1 < 0 )
    return (unsigned int)v1;
  qword_140C4F428 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
  if ( qword_140C4F428 )
  {
    v1 = sub_140B51F9C(&v3);
    if ( v1 < 0 )
      return (unsigned int)v1;
    sub_1406F5B50();
    v1 = sub_140970C6C((__int64)qword_140D068F0);
    if ( v1 < 0
      || (unsigned int)sub_1402D9A20(qword_140D06988) && (v1 = sub_140970C6C((__int64)qword_140D06988), v1 < 0) )
    {
      sub_1406F5AF0((__int64)CurrentThread);
      return (unsigned int)v1;
    }
    sub_1406F5AF0((__int64)CurrentThread);
    qword_140D07220 = v3 - 0x1FFFF0000000LL;
    v1 = sub_1405EEE8C(v3 - 0x1FFFF0000000LL, qword_140C4F420, dword_140C4F440 << 12);
    if ( v1 < 0 )
      return (unsigned int)v1;
    dword_140C02504 = dword_140C4F478;
    dword_140C02508 = dword_140C4F440 << 12;
    return 0;
  }
  return 3221225626LL;
}
