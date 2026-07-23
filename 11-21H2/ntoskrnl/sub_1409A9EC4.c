/*
 * XREFs of sub_1409A9EC4 @ 0x1409A9EC4
 * Callers:
 *     sub_1409A49BC @ 0x1409A49BC (sub_1409A49BC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409A9EC4(char a1)
{
  int ProcessSessionId; // eax
  char v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  char *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140D3B908, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
      v8 = 0;
      v11 = 0;
      v4 = ProcessSessionId;
      v7 = 4;
      v6 = &v4;
      v3 = a1;
      v9 = &v3;
      v10 = 1;
      sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)byte_140033FDB, 0LL, 0LL, 4u, &v5);
    }
  }
}
