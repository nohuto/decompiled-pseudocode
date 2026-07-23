/*
 * XREFs of sub_14051EFC0 @ 0x14051EFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B607C @ 0x1403B607C (sub_1403B607C.c)
 *     sub_1403D8F10 @ 0x1403D8F10 (sub_1403D8F10.c)
 */

ULONG_PTR __fastcall sub_14051EFC0(ULONG_PTR Argument)
{
  int LockArray_high; // ecx
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // edi
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v8 = 0;
  v2 = -*((_DWORD *)KeGetCurrentPrcb() + 39);
  v3 = sub_1403D8F10(LockArray_high, &v8, 0LL);
  v4 = v8;
  v5 = 0xFFFFFFFFLL;
  if ( v3 < 0 )
    v4 = 0xFFFFFFFFLL;
  v8 = v4;
  v6 = v2 & v4;
  if ( (v2 & (unsigned int)v4) == (_DWORD)v4 )
    sub_1403B607C(v4, 0xFFFFFFFFLL);
  _InterlockedDecrement(&dword_140C4AB94);
  while ( dword_140C4AB94 > 0 )
    _mm_pause();
  if ( v6 != v8 )
    sub_1403B607C(v4, v5);
  _InterlockedDecrement(&dword_140C4ABA8);
  while ( dword_140C4ABA8 > 0 )
    _mm_pause();
  return 0LL;
}
