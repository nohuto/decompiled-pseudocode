/*
 * XREFs of sub_14094F4CC @ 0x14094F4CC
 * Callers:
 *     sub_1409477A4 @ 0x1409477A4 (sub_1409477A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_1406E5528 @ 0x1406E5528 (sub_1406E5528.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_1407476FC @ 0x1407476FC (sub_1407476FC.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14094D930 @ 0x14094D930 (sub_14094D930.c)
 */

__int64 __fastcall sub_14094F4CC(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v17; // [rsp+48h] [rbp-79h] BYREF
  int v18; // [rsp+4Ch] [rbp-75h] BYREF
  int v19; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-51h] BYREF
  int v24; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+8Ch] [rbp-35h]
  int v26; // [rsp+94h] [rbp-2Dh]
  __int64 v27[10]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v28; // [rsp+E8h] [rbp+27h] BYREF

  memset(v27, 0, 0x48uLL);
  Handle = 0LL;
  v28 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v20 = 1;
  UnicodeString.Buffer = 0LL;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  if ( !dword_140D3B050 )
  {
    v2 = 0;
    goto LABEL_28;
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    v2 = -1073741808;
    goto LABEL_28;
  }
  v2 = sub_1407448BC(v3, 0LL, v27);
  if ( v2 >= 0 )
  {
    v5 = v27[2];
    v6 = *(_QWORD *)(a1 + 48);
    v23[0] = &stru_140010A18;
    v23[2] = &v28;
    v23[1] = 13LL;
    v25 = 0LL;
    v26 = 0;
    v24 = 16;
    v2 = sub_140746CCC(v4, v6, 1, v27[2], (__int64)v23, 1u);
    if ( v2 >= 0 )
    {
      if ( v25 >= 0 )
      {
        v2 = sub_1407454A8((unsigned int *)&v28, (__int64)&UnicodeString, 1);
        if ( v2 < 0 )
          goto LABEL_28;
        if ( (int)sub_14077C924(
                    *(__int64 *)&qword_140D00AC0,
                    (__int64)UnicodeString.Buffer,
                    2,
                    131097,
                    0,
                    (__int64)&Handle) >= 0 )
          goto LABEL_12;
        RtlFreeUnicodeString(&UnicodeString);
      }
      v28 = 0LL;
LABEL_12:
      v7 = sub_1406E2EEC(
             a1,
             (__int64)v27,
             (unsigned __int16 *)((unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL)),
             0LL,
             &v19,
             0LL);
      v8 = v19;
      if ( v7 < 0 )
        v8 = 0;
      sub_14094D930(
        a1,
        (__int64)v27,
        (_QWORD *)((unsigned __int64)&v28 & -(__int64)(UnicodeString.Buffer != 0LL)),
        (__int64)Handle,
        0LL);
      if ( *(_QWORD *)&qword_140D00AC0 && (v9 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
        v10 = *(_QWORD *)(v9 + 8);
      else
        v10 = 0LL;
      sub_1406CB238(v5, (__int64)L"Devices", v10, 0);
      if ( *(_QWORD *)&qword_140D00AC0 && (v11 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
        v12 = *(_QWORD *)(v11 + 8);
      else
        v12 = 0LL;
      sub_1406CB238(v5, (__int64)L"Filters", v12, 0);
      if ( v8 )
      {
        v13 = *(_QWORD *)(a1 + 48);
        v18 = 4;
        if ( (int)sub_14077CD90(
                    *(__int64 *)&qword_140D00AC0,
                    v13,
                    v5,
                    11,
                    (__int64)&v20,
                    (__int64)&v17,
                    (__int64)&v18,
                    0) < 0
          || v20 != 4
          || (v15 = v17, v18 != 4) )
        {
          v15 = 0;
        }
        v17 = v8 | v15;
        sub_1406E5528(v14, (__int64)v27, 0xBu, 4, (__int64)&v17, 4);
      }
    }
  }
LABEL_28:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  sub_1407476FC((__int64)v27);
  return (unsigned int)v2;
}
