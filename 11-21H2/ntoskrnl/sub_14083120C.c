/*
 * XREFs of sub_14083120C @ 0x14083120C
 * Callers:
 *     sub_14083113C @ 0x14083113C (sub_14083113C.c)
 *     sub_14099D66C @ 0x14099D66C (sub_14099D66C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14083120C(char a1, char a2)
{
  IRecordInfo **p_pRecInfo; // rax
  IRecordInfo **v3; // rbx
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  p_pRecInfo = &stru_1400372D0.pRecInfo;
  v3 = (IRecordInfo **)qword_140012078;
  if ( !a2 )
    v3 = &stru_1400372D0.pRecInfo;
  if ( byte_140C5AE30 )
  {
    v4 = qword_140C1F580;
    LOBYTE(p_pRecInfo) = EtwEventEnabled(qword_140C1F580, (PCEVENT_DESCRIPTOR)v3);
    if ( (_BYTE)p_pRecInfo )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 1;
      LOBYTE(p_pRecInfo) = EtwWrite(v4, (PCEVENT_DESCRIPTOR)v3, 0LL, 1u, &UserData);
    }
  }
  return (char)p_pRecInfo;
}
