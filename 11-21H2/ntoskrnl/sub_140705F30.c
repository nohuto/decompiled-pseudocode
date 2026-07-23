/*
 * XREFs of sub_140705F30 @ 0x140705F30
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x140705EF0 (IoBuildSynchronousFsdRequest.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_14090AD84 @ 0x14090AD84 (sub_14090AD84.c)
 *     sub_1409B54D8 @ 0x1409B54D8 (sub_1409B54D8.c)
 * Callees:
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 */

IRP *__fastcall sub_140705F30(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        LARGE_INTEGER *a5,
        struct _KEVENT *a6,
        struct _IO_STATUS_BLOCK *a7)
{
  IRP *result; // rax
  IRP *v8; // rbx

  result = sub_14029BAD0(a1, a2, a3, a4, a5, a7);
  v8 = result;
  if ( result )
  {
    result->UserEvent = a6;
    sub_1402AE1B0((__int64)result);
    return v8;
  }
  return result;
}
