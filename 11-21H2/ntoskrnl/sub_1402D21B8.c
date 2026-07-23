/*
 * XREFs of sub_1402D21B8 @ 0x1402D21B8
 * Callers:
 *     sub_1402D1F98 @ 0x1402D1F98 (sub_1402D1F98.c)
 *     sub_1402D20D4 @ 0x1402D20D4 (sub_1402D20D4.c)
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 *     sub_14056294C @ 0x14056294C (sub_14056294C.c)
 *     sub_140863BE8 @ 0x140863BE8 (sub_140863BE8.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B2ABA4 @ 0x140B2ABA4 (sub_140B2ABA4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall sub_1402D21B8(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = qword_140C54EA8;
  if ( qword_140C54EA8 && EtwEventEnabled(qword_140C54EA8, EventDescriptor) )
    return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  else
    return 0;
}
