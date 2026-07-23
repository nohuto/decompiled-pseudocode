/*
 * XREFs of sub_140849DF0 @ 0x140849DF0
 * Callers:
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140849DF0()
{
  __int64 v0; // rax
  __int16 v1; // cx
  __int16 v2; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v3; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int16 *v4[2]; // [rsp+38h] [rbp-21h] BYREF
  __int16 v5; // [rsp+48h] [rbp-11h]
  int v6; // [rsp+4Ah] [rbp-Fh]
  __int16 v7; // [rsp+4Eh] [rbp-Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  __int64 v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  __int64 v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  v6 = 0;
  v7 = 0;
  v2 = 0;
  v3 = 0;
  if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140012A60) )
  {
    v4[1] = (unsigned __int16 *)qword_140C0B8E8[0];
    v4[0] = (unsigned __int16 *)word_140C0B8E0;
    v5 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v3, v4) )
    {
      v0 = sub_140348800(v3);
      v1 = *(unsigned __int8 *)(v0 + 208);
      UserData.Ptr = (ULONGLONG)&v2;
      v2 = v1;
      v13 = v0 + 34057;
      v9 = v0 + 209;
      v15 = v0 + 34058;
      v11 = v0 + 34056;
      *(_QWORD *)&UserData.Size = 2LL;
      v10 = 1LL;
      v12 = 1LL;
      v14 = 1LL;
      v16 = 1LL;
      EtwWrite(qword_140C1F580, &stru_140012A60, 0LL, 5u, &UserData);
    }
  }
}
