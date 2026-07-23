/*
 * XREFs of sub_14020EE7C @ 0x14020EE7C
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_1403D3170 @ 0x1403D3170 (sub_1403D3170.c)
 * Callees:
 *     sub_140210C14 @ 0x140210C14 (sub_140210C14.c)
 *     sub_14028F83C @ 0x14028F83C (sub_14028F83C.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 */

__int64 __fastcall sub_14020EE7C(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v10; // r8
  unsigned int v11; // ebx

  if ( a3 == 1 )
  {
    v11 = *(char *)(a1 + 195);
    sub_140210C14(a4, a5, a1, v11);
    sub_14028F83C(a1, v11, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 && !(unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a4 + 36)) )
    {
      sub_14035C3FC(a4, a6, v10);
      sub_1402F6970(a6, a1);
    }
    return 0LL;
  }
  if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a4 + 36)) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
  if ( *(_QWORD *)(a4 + 16) )
    return 0LL;
  sub_14035C3FC(a4, a6, v8);
  return 1LL;
}
