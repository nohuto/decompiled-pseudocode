/*
 * XREFs of sub_14067AE50 @ 0x14067AE50
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     sub_1409E21EC @ 0x1409E21EC (sub_1409E21EC.c)
 */

__int64 __fastcall sub_14067AE50(_QWORD *a1, int a2, int a3)
{
  int v3; // r10d
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v9 = 0LL;
  LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (_BYTE)a3 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = ObOpenObjectByName(v3, (_DWORD)PsJobType, a3, 0, a2, 0LL, (__int64)&v9);
  if ( v7 >= 0 )
    *a1 = v9;
  if ( (xmmword_140D06900 & 0x80000) != 0 )
    sub_1409E21EC(0LL, 0LL, (unsigned int)v7, 1826LL);
  return (unsigned int)v7;
}
