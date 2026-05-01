/*
 * XREFs of sub_18000FC54 @ 0x18000FC54
 * Callers:
 *     sub_18000DCE0 @ 0x18000DCE0 (sub_18000DCE0.c)
 *     sub_18000FA24 @ 0x18000FA24 (sub_18000FA24.c)
 * Callees:
 *     sub_18000CC5C @ 0x18000CC5C (sub_18000CC5C.c)
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000D110 @ 0x18000D110 (sub_18000D110.c)
 *     sub_18000F864 @ 0x18000F864 (sub_18000F864.c)
 *     sub_18001036C @ 0x18001036C (sub_18001036C.c)
 */

__int64 __fastcall sub_18000FC54(PSRWLOCK SRWLock)
{
  _QWORD v3[25]; // [rsp+20h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v4; // [rsp+F0h] [rbp+8h] BYREF

  sub_18000CC5C((__int64)v3);
  AcquireSRWLockExclusive(SRWLock);
  v4 = SRWLock;
  sub_18001036C(SRWLock, v3);
  sub_18000CE58(&v4);
  sub_18000F864(v3);
  return sub_18000D110(v3);
}
