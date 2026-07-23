/*
 * XREFs of sub_140845E14 @ 0x140845E14
 * Callers:
 *     sub_140845D74 @ 0x140845D74 (sub_140845D74.c)
 * Callees:
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140845E14(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r10
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  _DWORD v15[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  __int64 *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( a2 && (unsigned int)dword_140C06550 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v6 = v3;
      v10 = &v7;
      v7 = 1LL;
      v12 = v15;
      v14 = *(_QWORD *)(v4 + 48);
      v15[0] = *(unsigned __int16 *)(v4 + 40);
      v16 = &v6;
      v18 = &v8;
      v11 = 8LL;
      v13 = 2LL;
      v15[1] = v5;
      v17 = 4LL;
      v8 = 2048LL;
      v19 = 8LL;
      sub_1402A1A20((__int64)&dword_140C06550, (unsigned __int8 *)&word_14002BF62, v2, v5 + 7, &v9);
    }
  }
}
