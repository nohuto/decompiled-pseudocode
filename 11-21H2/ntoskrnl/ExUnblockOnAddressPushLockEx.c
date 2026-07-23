/*
 * XREFs of ExUnblockOnAddressPushLockEx @ 0x1403A02D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

int __fastcall ExUnblockOnAddressPushLockEx(volatile __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  int result; // eax
  signed __int32 v3[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _InterlockedOr(v3, 0);
  if ( *BugCheckParameter2 )
    return sub_140369634(BugCheckParameter2, 0LL, 0);
  return result;
}
