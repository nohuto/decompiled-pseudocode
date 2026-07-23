/*
 * XREFs of sub_14080D7EC @ 0x14080D7EC
 * Callers:
 *     sub_140766E4C @ 0x140766E4C (sub_140766E4C.c)
 *     PoFxUnregisterDevice @ 0x140864C90 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403A4868 @ 0x1403A4868 (sub_1403A4868.c)
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 */

NTSTATUS __fastcall sub_14080D7EC(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = sub_1403A4868((__int64)a1, 0);
  if ( v2 )
    return sub_14082310C(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
