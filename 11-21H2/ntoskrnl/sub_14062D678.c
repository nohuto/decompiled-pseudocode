/*
 * XREFs of sub_14062D678 @ 0x14062D678
 * Callers:
 *     sub_1402221F4 @ 0x1402221F4 (sub_1402221F4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14062D678(__int64 a1, __int64 a2, int a3, int a4)
{
  NTSTATUS result; // eax
  int v5; // [rsp+48h] [rbp-9h] BYREF
  int v6; // [rsp+4Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+58h] [rbp+7h] BYREF
  int *v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  int *v10; // [rsp+78h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+2Fh]
  int *v12; // [rsp+88h] [rbp+37h]
  __int64 v13; // [rsp+90h] [rbp+3Fh]
  int v14; // [rsp+C8h] [rbp+77h] BYREF
  int v15; // [rsp+D0h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a3;
  if ( qword_140C15FD0 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    v5 = *(_DWORD *)(a1 + 1232);
    v7.Ptr = (ULONGLONG)&v5;
    v8 = &v6;
    v10 = &v14;
    v12 = &v15;
    *(_QWORD *)&v7.Size = 4LL;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    return EtwWriteEx(qword_140C15FD0, &stru_140037B18, 0LL, 0, 0LL, 0LL, 4u, &v7);
  }
  return result;
}
