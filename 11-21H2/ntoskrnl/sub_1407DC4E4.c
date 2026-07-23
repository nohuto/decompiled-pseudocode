/*
 * XREFs of sub_1407DC4E4 @ 0x1407DC4E4
 * Callers:
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1407DC4E4(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  __int64 v4; // rax
  __int16 v5; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  __int64 v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  __int64 v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]

  if ( a1 )
  {
    v2 = (const EVENT_DESCRIPTOR *)qword_140010F08;
    if ( !a2 )
      v2 = &stru_140010F18;
    if ( qword_140C54788 && EtwEventEnabled(qword_140C54788, v2) )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(a1 + 16 + 2 * v4) );
      v5 = v4;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = 2 * (unsigned __int16)v4;
      v7 = a1 + 16;
      v10 = a1 + 76;
      v12 = a1 + 80;
      *(_QWORD *)&UserData.Size = 2LL;
      v9 = 0;
      v11 = 4LL;
      v13 = 4LL;
      EtwWrite(qword_140C54788, v2, 0LL, 4u, &UserData);
    }
  }
}
