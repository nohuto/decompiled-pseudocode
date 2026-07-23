/*
 * XREFs of sub_14095B55C @ 0x14095B55C
 * Callers:
 *     sub_14095B48C @ 0x14095B48C (sub_14095B48C.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 */

__int64 __fastcall sub_14095B55C(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  _OWORD v6[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-98h]
  _QWORD v8[14]; // [rsp+60h] [rbp-88h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  result = sub_14074C6C0(v1, (ULONG_PTR)qword_14003A3F0, 1u, 0x28u, 0LL, (USHORT *)v6);
  if ( (int)result >= 0 )
  {
    v4 = sub_14042A5E0(*((_QWORD *)&v6[0] + 1), v3);
    sub_14042A5E0(*((_QWORD *)&v6[0] + 1), v5);
    memset(v8, 0, 0x68uLL);
    v8[1] = v4;
    return sub_140358A20(2u, 68, 0, (__int64)v8);
  }
  return result;
}
