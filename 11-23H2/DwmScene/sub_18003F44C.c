/*
 * XREFs of sub_18003F44C @ 0x18003F44C
 * Callers:
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 * Callees:
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 */

__int64 __fastcall sub_18003F44C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18003F4EC(a1, v7);
  v5 = (unsigned __int8)sub_18003F614(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
