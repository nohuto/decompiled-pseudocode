/*
 * XREFs of sub_14062A9C0 @ 0x14062A9C0
 * Callers:
 *     sub_14062B56C @ 0x14062B56C (sub_14062B56C.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062A9C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+40h] [rbp-39h] BYREF
  __int64 v7; // [rsp+48h] [rbp-31h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h] BYREF
  __int64 v9; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-19h] BYREF
  int *v11; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  __int64 *v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  __int64 *v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  __int64 *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)qword_140C18EA0 > 5u )
  {
    if ( sub_1402A2000(qword_140C18EA0, 2LL) )
    {
      v6 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v11 = &v6;
      v13 = &v7;
      v15 = &v8;
      v17 = &v9;
      v9 = v3;
      v12 = 4LL;
      v7 = a2;
      v14 = 8LL;
      v8 = v5;
      v16 = 8LL;
      v18 = 8LL;
      sub_14024A9B0(v4, (unsigned __int8 *)&dword_14003486C, 0LL, 0, 0, 0, 6u, &v10);
    }
  }
}
