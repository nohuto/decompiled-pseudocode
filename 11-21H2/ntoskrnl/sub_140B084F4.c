/*
 * XREFs of sub_140B084F4 @ 0x140B084F4
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *sub_140B084F4()
{
  struct _KTHREAD *v0; // rdi
  const CHAR **v1; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-C8h]
  int v7; // [rsp+28h] [rbp-C0h]
  int v8; // [rsp+40h] [rbp-A8h] BYREF
  int v9; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v10; // [rsp+48h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-98h] BYREF
  char v12[16]; // [rsp+70h] [rbp-78h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp-68h]
  int v14; // [rsp+88h] [rbp-60h]
  int v15; // [rsp+8Ch] [rbp-5Ch]
  const CHAR *v16; // [rsp+90h] [rbp-58h]
  _DWORD v17[2]; // [rsp+98h] [rbp-50h] BYREF
  int *v18; // [rsp+A0h] [rbp-48h]
  int v19; // [rsp+A8h] [rbp-40h]
  int v20; // [rsp+ACh] [rbp-3Ch]
  int *v21; // [rsp+B0h] [rbp-38h]
  int v22; // [rsp+B8h] [rbp-30h]
  int v23; // [rsp+BCh] [rbp-2Ch]
  __int64 *v24; // [rsp+C0h] [rbp-28h]
  int v25; // [rsp+C8h] [rbp-20h]
  int v26; // [rsp+CCh] [rbp-1Ch]

  v0 = sub_1406F5B50();
  while ( 1 )
  {
    v1 = (const CHAR **)qword_140C4F4C0;
    if ( qword_140C4F4C0 == &qword_140C4F4C0 )
      break;
    if ( *((PVOID **)qword_140C4F4C0 + 1) != &qword_140C4F4C0
      || (v3 = *(_QWORD *)qword_140C4F4C0, *(PVOID *)(*(_QWORD *)qword_140C4F4C0 + 8LL) != qword_140C4F4C0) )
    {
      __fastfail(3u);
    }
    qword_140C4F4C0 = *(PVOID *)qword_140C4F4C0;
    *(_QWORD *)(v3 + 8) = &qword_140C4F4C0;
    if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000000LL) )
    {
      sub_1403699D0((__int64)v12, v1[2]);
      v15 = 0;
      v17[1] = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v13 = v17;
      v16 = v1[4];
      v17[0] = *((unsigned __int16 *)v1 + 12);
      v8 = *((_DWORD *)v1 + 10);
      v18 = &v8;
      v9 = *((_DWORD *)v1 + 11);
      v21 = &v9;
      v24 = &v10;
      v14 = 2;
      v19 = 4;
      v22 = 4;
      v10 = 0x1000000LL;
      v25 = 8;
      sub_14024A9B0(v5, (unsigned __int8 *)&word_14002CBC6, v4, 1u, v6, v7, 8u, &v11);
    }
    ExFreePoolWithTag(v1, 0);
  }
  return sub_1406F5AF0((__int64)v0);
}
