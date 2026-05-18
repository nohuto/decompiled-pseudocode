/*
 * XREFs of sub_18007C218 @ 0x18007C218
 * Callers:
 *     sub_18007C1CC @ 0x18007C1CC (sub_18007C1CC.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18007BCD0 @ 0x18007BCD0 (sub_18007BCD0.c)
 *     sub_18007BF3C @ 0x18007BF3C (sub_18007BF3C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007C218(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  if ( dword_1801D8A30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8A30);
    if ( dword_1801D8A30 == -1 )
    {
      v3 = sub_18001090C(0x38uLL);
      *(_QWORD *)v3 = v3;
      *(_QWORD *)(v3 + 8) = v3;
      *(_QWORD *)(v3 + 16) = v3;
      *(_WORD *)(v3 + 24) = 257;
      qword_1801D8A38 = v3;
      atexit(sub_1800F85B0);
      sub_18000C538(&dword_1801D8A30);
    }
  }
  v4 = sub_18007BF3C(&v10, (unsigned int *)&v12);
  sub_18007BCD0(v5, (__int64)&v9, &v12, v4);
  v6 = v9;
  *a1 = 0LL;
  a1[1] = 0LL;
  v7 = *(_QWORD *)(v6 + 48);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *a1 = *(_QWORD *)(v6 + 40);
  a1[1] = *(_QWORD *)(v6 + 48);
  if ( v11 )
    sub_180010530(v11);
  return a1;
}
