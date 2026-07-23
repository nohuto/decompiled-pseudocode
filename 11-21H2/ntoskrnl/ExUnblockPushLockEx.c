/*
 * XREFs of ExUnblockPushLockEx @ 0x140208D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExUnblockPushLockEx(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 result; // rax
  signed __int32 v3[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _InterlockedOr(v3, 0);
  if ( *BugCheckParameter2 )
    return sub_140369634(BugCheckParameter2, 0LL, 0LL);
  return result;
}
