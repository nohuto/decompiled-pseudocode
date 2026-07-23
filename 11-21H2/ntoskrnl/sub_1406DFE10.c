/*
 * XREFs of sub_1406DFE10 @ 0x1406DFE10
 * Callers:
 *     sub_1406DFDF0 @ 0x1406DFDF0 (sub_1406DFDF0.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1406DFE10(char a1, ULONGLONG a2, int a3, __int64 a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  REGHANDLE v9; // rdi
  int v11; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+58h] [rbp+7h]
  int v14; // [rsp+60h] [rbp+Fh]
  int v15; // [rsp+64h] [rbp+13h]
  __int64 v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  int *v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  int v22; // [rsp+C8h] [rbp+77h] BYREF

  v22 = a3;
  v4 = &stru_14000EC70;
  v5 = (const EVENT_DESCRIPTOR *)qword_1400371E0;
  if ( !a1 )
    v5 = &stru_14000EC70;
  if ( byte_140C5AE14 )
  {
    v9 = RegHandle;
    LOBYTE(v4) = EtwEventEnabled(RegHandle, v5);
    if ( (_BYTE)v4 )
    {
      v11 = 0;
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v22;
      v19 = &v11;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v14 = 4;
      v16 = a4;
      v17 = a3;
      v20 = 4;
      LOBYTE(v4) = EtwWrite(v9, v5, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
