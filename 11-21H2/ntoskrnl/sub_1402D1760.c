/*
 * XREFs of sub_1402D1760 @ 0x1402D1760
 * Callers:
 *     sub_1402D0E98 @ 0x1402D0E98 (sub_1402D0E98.c)
 *     sub_1402D1040 @ 0x1402D1040 (sub_1402D1040.c)
 *     sub_1402D1708 @ 0x1402D1708 (sub_1402D1708.c)
 *     sub_140387B78 @ 0x140387B78 (sub_140387B78.c)
 *     sub_1403886FC @ 0x1403886FC (sub_1403886FC.c)
 *     sub_140388BFC @ 0x140388BFC (sub_140388BFC.c)
 *     sub_140389ADC @ 0x140389ADC (sub_140389ADC.c)
 *     sub_14039AE20 @ 0x14039AE20 (sub_14039AE20.c)
 *     sub_1403A0204 @ 0x1403A0204 (sub_1403A0204.c)
 *     sub_1403A6ED8 @ 0x1403A6ED8 (sub_1403A6ED8.c)
 *     sub_140542D30 @ 0x140542D30 (sub_140542D30.c)
 *     sub_140542DA0 @ 0x140542DA0 (sub_140542DA0.c)
 *     sub_140542E48 @ 0x140542E48 (sub_140542E48.c)
 *     sub_140555FAC @ 0x140555FAC (sub_140555FAC.c)
 *     sub_140555FF0 @ 0x140555FF0 (sub_140555FF0.c)
 *     sub_140558450 @ 0x140558450 (sub_140558450.c)
 *     sub_1405584D8 @ 0x1405584D8 (sub_1405584D8.c)
 *     sub_14055F1E8 @ 0x14055F1E8 (sub_14055F1E8.c)
 *     sub_1405600A8 @ 0x1405600A8 (sub_1405600A8.c)
 *     sub_140560E60 @ 0x140560E60 (sub_140560E60.c)
 *     sub_140560EC4 @ 0x140560EC4 (sub_140560EC4.c)
 *     sub_140560F74 @ 0x140560F74 (sub_140560F74.c)
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_1405613C4 @ 0x1405613C4 (sub_1405613C4.c)
 *     sub_140561484 @ 0x140561484 (sub_140561484.c)
 *     sub_140561730 @ 0x140561730 (sub_140561730.c)
 *     sub_140561EBC @ 0x140561EBC (sub_140561EBC.c)
 *     sub_140561F5C @ 0x140561F5C (sub_140561F5C.c)
 *     sub_1405622A4 @ 0x1405622A4 (sub_1405622A4.c)
 *     sub_140562860 @ 0x140562860 (sub_140562860.c)
 *     sub_1405636A4 @ 0x1405636A4 (sub_1405636A4.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_1405638C4 @ 0x1405638C4 (sub_1405638C4.c)
 *     sub_1405639AC @ 0x1405639AC (sub_1405639AC.c)
 *     sub_140563A9C @ 0x140563A9C (sub_140563A9C.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_140563CAC @ 0x140563CAC (sub_140563CAC.c)
 *     sub_140563DCC @ 0x140563DCC (sub_140563DCC.c)
 *     sub_140563F5C @ 0x140563F5C (sub_140563F5C.c)
 *     sub_140564074 @ 0x140564074 (sub_140564074.c)
 *     sub_1405641AC @ 0x1405641AC (sub_1405641AC.c)
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_140564468 @ 0x140564468 (sub_140564468.c)
 *     sub_140564528 @ 0x140564528 (sub_140564528.c)
 *     sub_14056471C @ 0x14056471C (sub_14056471C.c)
 *     sub_140603294 @ 0x140603294 (sub_140603294.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_1402D1760(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *ActivityId,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v7; // r11d
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EtwWriteEx(*a1, a2, 0LL, 0, ActivityId, 0LL, a4, UserData);
}
