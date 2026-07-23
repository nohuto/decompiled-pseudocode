/*
 * XREFs of sub_140424CA0 @ 0x140424CA0
 * Callers:
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     sub_140424E02 @ 0x140424E02 (sub_140424E02.c)
 */

__int64 __fastcall sub_140424CA0()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !HIWORD(KeGetPcr()[5].KdVersionBlock)
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = HIWORD(KeGetPcr()[5].KdVersionBlock),
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (BYTE2(KeGetPcr()[5].KdVersionBlock) & 2) == 0 )
      JUMPOUT(0x140424E26LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_140424E02(v2, 0LL);
  return sub_140424CF4();
}
