/*
 * XREFs of sub_14062A7C8 @ 0x14062A7C8
 * Callers:
 *     sub_140629A00 @ 0x140629A00 (sub_140629A00.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062A7C8(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  int v9; // [rsp+40h] [rbp-39h] BYREF
  int v10; // [rsp+44h] [rbp-35h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-19h] BYREF
  int *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  int *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)qword_140C18EA0 > 5u )
  {
    if ( sub_1402A2000(qword_140C18EA0, 1LL) )
    {
      v9 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v14 = &v9;
      v16 = &v11;
      v18 = &v12;
      v20 = &v10;
      v10 = v4;
      v15 = 4LL;
      v11 = a2;
      v17 = 8LL;
      v12 = v6;
      v19 = 8LL;
      v21 = 4LL;
      sub_14024A9B0(v5, (unsigned __int8 *)&byte_140034741, v3, 0, v7, v8, 6u, &v13);
    }
  }
}
