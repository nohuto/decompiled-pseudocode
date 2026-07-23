/*
 * XREFs of sub_14062A8C0 @ 0x14062A8C0
 * Callers:
 *     sub_140629A00 @ 0x140629A00 (sub_140629A00.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062A8C0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+20h] [rbp-59h]
  int v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+40h] [rbp-39h] BYREF
  int v9; // [rsp+44h] [rbp-35h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-29h] BYREF
  int *v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  unsigned int *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]
  unsigned int v23; // [rsp+F0h] [rbp+77h] BYREF

  v23 = a3;
  if ( *(_DWORD *)qword_140C18EA0 > 5u )
  {
    if ( sub_1402A2000(qword_140C18EA0, 1LL) )
    {
      v8 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v12 = &v8;
      v14 = &v10;
      v16 = &v23;
      v10 = v23;
      v21 = &v9;
      v19 = 16 * v23;
      v9 = v3;
      v13 = 4LL;
      v15 = 8LL;
      v17 = 4LL;
      v18 = v5;
      v20 = 0;
      v22 = 4LL;
      sub_14024A9B0(v4, (unsigned __int8 *)&byte_14003465D, 0LL, 0, v6, v7, 7u, &v11);
    }
  }
}
