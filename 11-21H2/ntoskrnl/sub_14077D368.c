/*
 * XREFs of sub_14077D368 @ 0x14077D368
 * Callers:
 *     sub_14077D2F8 @ 0x14077D2F8 (sub_14077D2F8.c)
 * Callees:
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_14077D368(int a1, int a2, int a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // rbx
  void *v9; // rcx
  NTSTATUS v10; // ecx
  int v11; // eax
  int v13; // [rsp+60h] [rbp-10h] BYREF
  ULONG SessionId; // [rsp+64h] [rbp-Ch] BYREF
  int v15; // [rsp+68h] [rbp-8h] BYREF
  int v16; // [rsp+6Ch] [rbp-4h] BYREF
  BOOLEAN IsServiceSession; // [rsp+A8h] [rbp+38h] BYREF

  v5 = a5;
  v15 = 0;
  SessionId = 0;
  v16 = 0;
  v13 = 0;
  *a5 = 0;
  v9 = *(void **)a4;
  IsServiceSession = 0;
  if ( !v9 )
    v9 = *(void **)(a4 + 16);
  v10 = SeQuerySessionIdTokenEx(v9, &SessionId, &IsServiceSession);
  if ( v10 >= 0 )
  {
    if ( IsServiceSession )
    {
LABEL_7:
      *v5 = 1;
      return (unsigned int)v10;
    }
    v11 = sub_14077DA5C(a1, a2, 1, a3, 0LL, (__int64)&stru_140010AF0, (__int64)&v13, (__int64)&v15, 4, (__int64)&v16, 0);
    v10 = v11;
    if ( v11 == -1073741275 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    if ( v11 >= 0 && (v13 != 7 || v15 == SessionId) )
      goto LABEL_7;
  }
  return (unsigned int)v10;
}
