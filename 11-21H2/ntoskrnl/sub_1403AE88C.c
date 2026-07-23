/*
 * XREFs of sub_1403AE88C @ 0x1403AE88C
 * Callers:
 *     sub_1403AE810 @ 0x1403AE810 (sub_1403AE810.c)
 * Callees:
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403AE88C(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int LockArray_high; // eax
  ULONG_PTR v5; // rbx
  unsigned int v6; // edx
  __int64 result; // rax
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v5 = qword_140C4E4B0;
  v8 = 0LL;
  v6 = dword_140D0E5E0[LockArray_high];
  *((_QWORD *)&v8 + 1) = (unsigned __int16)(v6 >> 6);
  *(_QWORD *)&v8 = 1LL << (v6 & 0x3F);
  result = sub_1403AEA08(qword_140C4E4B0, 209, 13, a4, -3LL, 0, (__int64)&v8, (__int64)sub_1403D3380);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v5, dword_140C4E844, (int)result);
  return result;
}
