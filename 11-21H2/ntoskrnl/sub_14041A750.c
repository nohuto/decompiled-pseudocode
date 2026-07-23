/*
 * XREFs of sub_14041A750 @ 0x14041A750
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14041A750(__int16 a1, unsigned __int16 *a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+48h] [rbp+7h] BYREF
  int *v5; // [rsp+58h] [rbp+17h]
  __int64 v6; // [rsp+60h] [rbp+1Fh]
  __int64 v7; // [rsp+68h] [rbp+27h]
  int v8; // [rsp+70h] [rbp+2Fh]
  int v9; // [rsp+74h] [rbp+33h]
  __int64 *v10; // [rsp+78h] [rbp+37h]
  __int64 v11; // [rsp+80h] [rbp+3Fh]
  __int16 v12; // [rsp+A8h] [rbp+67h] BYREF
  int v13; // [rsp+B8h] [rbp+77h] BYREF

  v13 = a3;
  v12 = a1;
  *(_QWORD *)&v4.Size = 2LL;
  v9 = 0;
  v4.Ptr = (ULONGLONG)&v12;
  v11 = 2LL;
  v5 = &v13;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *a2;
  v10 = &qword_14000EF90;
  v6 = 4LL;
  return EtwWriteEx(qword_140C15FA8, &stru_1400149F8, 0LL, 1u, 0LL, 0LL, 4u, &v4);
}
