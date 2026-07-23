/*
 * XREFs of sub_14067C760 @ 0x14067C760
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 */

__int64 __fastcall sub_14067C760(_QWORD *a1, int a2, int a3)
{
  char v6; // di
  __int64 v7; // rdx
  int v8; // edx
  int v10; // [rsp+20h] [rbp-38h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v10 = a2;
  LOBYTE(a2) = v6;
  v8 = ObOpenObjectByName(a3, (_DWORD)ExSemaphoreObjectType, a2, 0, v10, 0LL, (__int64)v11);
  if ( v8 >= 0 )
    *a1 = v11[0];
  return (unsigned int)v8;
}
