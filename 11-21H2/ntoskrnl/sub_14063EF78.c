/*
 * XREFs of sub_14063EF78 @ 0x14063EF78
 * Callers:
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14063EF78(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+40h] [rbp-10h]

  v8 = 0LL;
  v9 = 0;
  *a5 = 0LL;
  v5 = sub_14042A5E0(*(_QWORD *)(a3 + 8), 0LL);
  v6 = v5;
  if ( v5 == -1073741789 || v5 >= 0 )
    return (unsigned int)-1073741823;
  return v6;
}
