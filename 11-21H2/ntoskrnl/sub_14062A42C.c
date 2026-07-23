/*
 * XREFs of sub_14062A42C @ 0x14062A42C
 * Callers:
 *     sub_1409D8E00 @ 0x1409D8E00 (sub_1409D8E00.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062A42C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  int v12; // r11d
  int v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-90h] BYREF
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  if ( *(_DWORD *)qword_140C18EA0 > 5u )
  {
    if ( sub_1402A2000(qword_140C18EA0, 8LL) )
    {
      v15 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v23 = &v15;
      v25 = &v16;
      v27 = &v17;
      v29 = &v18;
      v20 = a5;
      v31 = &v20;
      v21 = a6;
      v33 = &v21;
      v19 = a7;
      v35 = &v19;
      v18 = v10;
      v32 = v8;
      v34 = v8;
      v24 = 4LL;
      v16 = a2;
      v26 = 4LL;
      v17 = v12;
      v28 = 4LL;
      v30 = 4LL;
      v36 = 4LL;
      sub_14024A9B0(v11, (unsigned __int8 *)&word_1400346B6, v9, 0, v13, v14, 9u, &v22);
    }
  }
}
