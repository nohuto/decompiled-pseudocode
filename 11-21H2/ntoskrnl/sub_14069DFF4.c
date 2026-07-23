/*
 * XREFs of sub_14069DFF4 @ 0x14069DFF4
 * Callers:
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14069DFF4(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  BOOL v5; // [rsp+30h] [rbp-40h] BYREF
  BOOL v6; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  BOOL *v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+50h] [rbp-20h]
  int v10; // [rsp+54h] [rbp-1Ch]
  int *v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  v1 = &stru_14000E980;
  v2 = (const EVENT_DESCRIPTOR *)qword_1400371C0;
  if ( !a1 )
    v2 = &stru_14000E980;
  if ( byte_140C5AE30 )
  {
    v3 = qword_140C1F580;
    LOBYTE(v1) = EtwEventEnabled(qword_140C1F580, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Size = 4;
      v9 = 4;
      v5 = byte_140D068E7 != 0;
      v12 = 4;
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v6 = byte_140D068E1 != 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = &v6;
      v11 = &dword_140D06B50;
      LOBYTE(v1) = EtwWrite(v3, v2, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
