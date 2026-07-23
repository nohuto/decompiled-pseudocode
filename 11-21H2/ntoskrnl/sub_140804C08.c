/*
 * XREFs of sub_140804C08 @ 0x140804C08
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140804C08(_DWORD *a1)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  _DWORD *v3; // rdi
  __int64 v4; // rax
  __int16 v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v2 = (const EVENT_DESCRIPTOR *)qword_14000F910;
  if ( *a1 )
    v2 = &stru_14000F920;
  if ( byte_140C5AE14 && EtwEventEnabled(RegHandle, v2) )
  {
    v3 = a1 + 1;
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)v3 + v4) );
    v5 = v4;
    UserData.Ptr = (ULONGLONG)&v5;
    v8 = 2 * (unsigned __int16)v4;
    *(_QWORD *)&UserData.Size = 2LL;
    v7 = v3;
    v9 = 0;
    EtwWrite(RegHandle, v2, 0LL, 2u, &UserData);
  }
}
