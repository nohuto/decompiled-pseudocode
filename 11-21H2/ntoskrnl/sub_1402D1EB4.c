/*
 * XREFs of sub_1402D1EB4 @ 0x1402D1EB4
 * Callers:
 *     sub_1402D1E10 @ 0x1402D1E10 (sub_1402D1E10.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1402D1EB4(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2, int a3)
{
  REGHANDLE v3; // rbx
  int v7; // ecx
  __int16 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  int *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  int v16; // [rsp+B0h] [rbp+30h] BYREF

  v16 = a3;
  v3 = qword_140C54EA8;
  if ( !qword_140C54EA8 || !EtwEventEnabled(qword_140C54EA8, EventDescriptor) )
    return 0;
  v7 = *a2;
  UserData.Reserved = 0;
  v12 = 0;
  v15 = 0;
  v8 = (unsigned __int16)v7 >> 1;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v16;
  v11 = v7;
  UserData.Size = 2;
  v14 = 4;
  return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
