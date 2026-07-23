/*
 * XREFs of sub_1402D2774 @ 0x1402D2774
 * Callers:
 *     sub_1402DE5C0 @ 0x1402DE5C0 (sub_1402DE5C0.c)
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140748E80 @ 0x140748E80 (sub_140748E80.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 *     sub_140B24550 @ 0x140B24550 (sub_140B24550.c)
 *     sub_140B25270 @ 0x140B25270 (sub_140B25270.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1402D2774(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v6; // r8d
  __int16 v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = qword_140C54EA8;
  if ( !qword_140C54EA8 || !EtwEventEnabled(qword_140C54EA8, EventDescriptor) )
    return 0;
  v6 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v10 = v6;
  return EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
