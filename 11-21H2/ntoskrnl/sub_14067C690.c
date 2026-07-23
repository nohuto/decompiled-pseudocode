/*
 * XREFs of sub_14067C690 @ 0x14067C690
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 */

__int64 __fastcall sub_14067C690(_QWORD *a1, int a2, int a3)
{
  int v3; // esi
  char v6; // di
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v11[0] = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  LOBYTE(a3) = v6;
  v8 = ObOpenObjectByName(v3, (_DWORD)qword_140D05288, a3, 0, a2, 0LL, (__int64)v11);
  if ( v8 == -1073741788 && qword_140C10D30 )
  {
    LOBYTE(v9) = v6;
    v8 = ObOpenObjectByName(v3, (_DWORD)qword_140C10D30, v9, 0, a2, 0LL, (__int64)v11);
  }
  if ( v8 >= 0 )
    *a1 = v11[0];
  return (unsigned int)v8;
}
