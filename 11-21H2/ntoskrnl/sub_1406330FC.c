/*
 * XREFs of sub_1406330FC @ 0x1406330FC
 * Callers:
 *     sub_140814BA0 @ 0x140814BA0 (sub_140814BA0.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_1403AB344 @ 0x1403AB344 (sub_1403AB344.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __fastcall sub_1406330FC(struct _KTHREAD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int128 Object; // [rsp+40h] [rbp-29h] BYREF
  char *v6; // [rsp+50h] [rbp-19h]
  _BYTE v7[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  memset(v7, 0, 0x58uLL);
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  v6 = 0LL;
  if ( a1 == KeGetCurrentThread() )
    return sub_1403AB344((__int64)a1, a2);
  if ( *(_BYTE *)(a2 + 67) )
    return sub_1403AB344((__int64)a1, a2);
  DWORD1(Object) = 0;
  v6 = (char *)&Object + 8;
  *((_QWORD *)&Object + 1) = (char *)&Object + 8;
  LOWORD(Object) = 1;
  BYTE2(Object) = 6;
  KeInitializeApc((__int64)v7, (__int64)a1, 0, (__int64)sub_1406330C0, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v7, (__int64)&Object, a2, 0) )
    return sub_1403AB344((__int64)a1, a2);
  Timeout.QuadPart = -10000LL * (unsigned int)dword_140C0C858;
  result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( result != 258 )
    return result;
  if ( KeRemoveQueueApc((__int64)v7) )
    return sub_1403AB344((__int64)a1, a2);
  else
    return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
}
