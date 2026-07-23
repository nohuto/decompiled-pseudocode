/*
 * XREFs of sub_14065C91C @ 0x14065C91C
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 */

void __fastcall sub_14065C91C(__int64 a1)
{
  ULONGLONG *v2; // rbx
  ULONG v3; // ecx
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG *v5; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  __int16 *v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]

  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015AA0;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
  {
    v4 = 0;
    v5 = 0LL;
    sub_1407C0690(a1, &v5);
    v2 = v5;
    if ( v5 )
    {
      v3 = *(unsigned __int16 *)v5;
      UserData.Ptr = v5[1];
      UserData.Size = v3;
      v8 = &v4;
      UserData.Reserved = 0;
      v9 = 2LL;
      EtwWrite(qword_140D3B010, &EventDescriptor, 0LL, 2u, &UserData);
      sub_140346D64(v2, 0x624E4D43u);
    }
  }
}
