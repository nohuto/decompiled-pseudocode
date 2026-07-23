/*
 * XREFs of sub_1409E0584 @ 0x1409E0584
 * Callers:
 *     sub_140790B38 @ 0x140790B38 (sub_140790B38.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1409E0584(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  bool v6; // zf
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp-9h]
  int v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+5Ch] [rbp+3h]
  __int64 *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  char *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]

  v6 = (*(_BYTE *)(a4 + 98) & 2) == 0;
  v9 = 0;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a4 + 80);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 1088);
  }
  UserData.Ptr = *(_QWORD *)(a4 + 32) + 40LL;
  v13 = 0;
  *(_QWORD *)&UserData.Size = 16LL;
  v15 = 2LL;
  v11 = a5 + 144;
  v12 = *(unsigned __int16 *)(a5 + 136);
  v14 = &qword_14000EF90;
  v16 = &v9;
  v18 = &a6;
  v17 = 4LL;
  v19 = 4LL;
  return EtwWrite(qword_140C15FA8, &stru_14000E3C8, 0LL, 5u, &UserData);
}
