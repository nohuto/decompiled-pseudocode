/*
 * XREFs of sub_140936D60 @ 0x140936D60
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 */

__int64 __fastcall sub_140936D60(_QWORD *a1, int a2, __int64 a3)
{
  char v6; // di
  __int64 v7; // rdx
  int v8; // edx
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  v10[0] = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(a3, (__int64)IoCompletionObjectType, v6, 0LL, a2, 0LL, (__int64)v10);
  if ( v8 >= 0 )
    *a1 = v10[0];
  return (unsigned int)v8;
}
