/*
 * XREFs of XmHltOp @ 0x140533D20
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403D7EE0 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
