/*
 * XREFs of sub_1C0016130 @ 0x1C0016130
 * Callers:
 *     sub_1C0019218 @ 0x1C0019218 (sub_1C0019218.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C005D530 @ 0x1C005D530 (sub_1C005D530.c)
 * Callees:
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 *     sub_1C0016900 @ 0x1C0016900 (sub_1C0016900.c)
 *     sub_1C0035B6C @ 0x1C0035B6C (sub_1C0035B6C.c)
 *     sub_1C0073F38 @ 0x1C0073F38 (sub_1C0073F38.c)
 */

void __fastcall sub_1C0016130(__int64 a1)
{
  __int64 v2; // rcx

  sub_1C0016900(a1);
  if ( (*(_BYTE *)(a1 + 450) & 1) != 0 && qword_1C0093BE0 == a1 )
    sub_1C0073F38();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 4952) )
    *(_QWORD *)(v2 + 4952) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 3280)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3312), 0, 1) == 1 )
  {
    sub_1C0035B6C(*(_QWORD *)(a1 + 24));
  }
  sub_1C0015DDC(a1);
  if ( *(_QWORD *)(a1 + 1888) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1880));
  if ( *(_QWORD *)(a1 + 3456) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 3448));
  if ( *(_QWORD *)(a1 + 2008) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2000));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
