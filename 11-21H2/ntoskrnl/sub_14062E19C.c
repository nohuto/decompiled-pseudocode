/*
 * XREFs of sub_14062E19C @ 0x14062E19C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14062E19C(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // rax
  ULONG v2; // ecx
  int v4; // [rsp+40h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  __int64 v7; // [rsp+60h] [rbp-10h]

  UserData.Ptr = 0x20000LL;
  *(_QWORD *)&UserData.Size = &word_1404370A0;
  v4 = *(_DWORD *)(a1 + 1088);
  p_UserData = *(struct _EVENT_DATA_DESCRIPTOR **)(a1 + 1472);
  if ( !p_UserData || !LOWORD(p_UserData->Ptr) )
    p_UserData = &UserData;
  v2 = WORD1(p_UserData->Ptr);
  UserData.Ptr = *(_QWORD *)&p_UserData->Size;
  v6 = &v4;
  UserData.Size = v2;
  UserData.Reserved = 0;
  v7 = 4LL;
  return EtwWriteEx(qword_140C15FF8, &stru_1400386A0, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
