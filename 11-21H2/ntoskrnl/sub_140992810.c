/*
 * XREFs of sub_140992810 @ 0x140992810
 * Callers:
 *     sub_1405CFB5C @ 0x1405CFB5C (sub_1405CFB5C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140992810(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  REGHANDLE v5; // rbx
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  int v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v9 = a4;
  v8 = dword_140C0C800;
  v7 = dword_140C0C804;
  v6 = dword_140D06A80;
  result = sub_140369B48(
             3LL,
             (__int64)"PopCoalescing: ON notification sent (spindown timeout:%u, timer interval: %u, flush delay interval"
                      ":%u, Enforced:%u)\n",
             dword_140D06A80,
             dword_140C0C804,
             dword_140C0C800,
             a4);
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140037CB0);
    if ( result )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      v11 = &v7;
      v14 = &v8;
      v17 = &v9;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      return EtwWrite(v5, &stru_140037CB0, 0LL, 4u, &UserData);
    }
  }
  return result;
}
