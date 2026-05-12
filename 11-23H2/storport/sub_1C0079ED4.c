/*
 * XREFs of sub_1C0079ED4 @ 0x1C0079ED4
 * Callers:
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007BBF8 @ 0x1C007BBF8 (sub_1C007BBF8.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C0079ED4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0LL;
  v8 = sub_1C007B2F4(a1);
  if ( v8 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x23u, (__int64)&unk_1C008B3A0, v8);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x24u, (__int64)&unk_1C008B3A0);
    return (unsigned int)-2147483631;
  }
  else
  {
    v10 = &v12;
    if ( v9 )
      v10 = v9;
    v8 = sub_1C007F44C(a1, v7, 0x900010001LL, v10);
    if ( v8 < 0 || (v8 = sub_1C007BBF8(a1, a2, a4), v8 < 0) )
      v8 = sub_1C007B340(a1, a2, (unsigned int)v8);
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
  }
  return (unsigned int)v8;
}
