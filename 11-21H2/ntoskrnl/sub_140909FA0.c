/*
 * XREFs of sub_140909FA0 @ 0x140909FA0
 * Callers:
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_140510D20 @ 0x140510D20 (sub_140510D20.c)
 *     sub_14090A0D0 @ 0x14090A0D0 (sub_14090A0D0.c)
 */

__int64 __fastcall sub_140909FA0(unsigned int a1, ULONG a2, int a3)
{
  __int64 result; // rax
  ULONG v7; // edi
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( dword_140C4B058 )
  {
    v7 = a1 % dword_140C4B004;
    v8 = a1 / dword_140C4B004;
    ExAcquireFastMutex(&stru_140C4B020);
    RtlClearBits(&stru_140C4ADE0 + v8, v7, a2);
    KeReleaseGuardedMutex(&stru_140C4B020);
    if ( a3 == 3 && (dword_140C4AFE0 & 2) != 0 )
      sub_140510D20(a1);
    result = (unsigned int)dword_140C4AFE0;
    if ( (dword_140C4AFE0 & 4) != 0 )
      return sub_14090A0D0(a1 / dword_140C4B008, a2);
  }
  return result;
}
