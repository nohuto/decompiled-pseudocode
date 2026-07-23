/*
 * XREFs of sub_1406F0080 @ 0x1406F0080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140261AC0 @ 0x140261AC0 (sub_140261AC0.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406F0080(__int64 a1, __int64 a2, int a3, char a4)
{
  _QWORD *v5; // rbx
  char v6; // di
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v5 = (_QWORD *)a1;
  v10 = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = v6;
  v8 = sub_14072B3B0(a1, (_DWORD)qword_140D05288, a3, v6);
  if ( v8 >= 0 )
  {
    LOBYTE(v7) = a4;
    sub_140261AC0(0LL, v7, dword_140C11368 != 0);
    v8 = sub_140729C30(0LL, 0LL, 0, 0LL, (__int64)&v10);
    if ( v8 >= 0 )
      *v5 = v10;
  }
  return (unsigned int)v8;
}
