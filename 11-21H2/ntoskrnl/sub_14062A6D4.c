/*
 * XREFs of sub_14062A6D4 @ 0x14062A6D4
 * Callers:
 *     sub_140628D00 @ 0x140628D00 (sub_140628D00.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062A6D4(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+20h] [rbp-59h]
  int v9; // [rsp+28h] [rbp-51h]
  int v10; // [rsp+40h] [rbp-39h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-19h] BYREF
  int *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  __int64 *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int64 *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)qword_140C18EA0 > 5u )
  {
    if ( sub_1402A2000(qword_140C18EA0, 4LL) )
    {
      v10 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v15 = &v10;
      v17 = &v11;
      v19 = &v12;
      v21 = &v13;
      v16 = v3;
      v13 = v5;
      v11 = a2;
      v18 = 8LL;
      v12 = v7;
      v20 = 8LL;
      v22 = 8LL;
      sub_14024A9B0(v6, (unsigned __int8 *)&byte_14003478B, v4, 0, v8, v9, 6u, &v14);
    }
  }
}
