/*
 * XREFs of sub_1407D73D0 @ 0x1407D73D0
 * Callers:
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1407D73D0(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ch] [rbp+23h]
  __int64 v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  __int64 v10; // [rsp+70h] [rbp+37h]
  __int64 v11; // [rsp+78h] [rbp+3Fh]

  if ( a1 && qword_140C54788 && EtwEventEnabled(qword_140C54788, &stru_140010EB8) )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(a1 + 16 + 2 * v2) );
    v3 = v2;
    UserData.Ptr = (ULONGLONG)&v3;
    v6 = 2 * (unsigned __int16)v2;
    v5 = a1 + 16;
    v8 = a1 + 76;
    v10 = a1 + 80;
    *(_QWORD *)&UserData.Size = 2LL;
    v7 = 0;
    v9 = 4LL;
    v11 = 4LL;
    EtwWrite(qword_140C54788, &stru_140010EB8, 0LL, 4u, &UserData);
  }
}
