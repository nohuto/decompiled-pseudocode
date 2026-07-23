/*
 * XREFs of sub_140A5179C @ 0x140A5179C
 * Callers:
 *     sub_1408080F0 @ 0x1408080F0 (sub_1408080F0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1403965EC @ 0x1403965EC (sub_1403965EC.c)
 *     sub_140396620 @ 0x140396620 (sub_140396620.c)
 */

char sub_140A5179C()
{
  char v0; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  sub_140396620(&LockHandle);
  if ( dword_140C23768 )
    v0 = *(_BYTE *)(qword_140C23758 + 80);
  sub_1403965EC(&LockHandle);
  return v0;
}
