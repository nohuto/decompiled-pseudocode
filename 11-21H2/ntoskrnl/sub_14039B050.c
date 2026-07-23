/*
 * XREFs of sub_14039B050 @ 0x14039B050
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039B0E0 @ 0x14039B0E0 (sub_14039B0E0.c)
 */

__int64 __fastcall sub_14039B050(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  _BOOL8 v7; // rdx
  unsigned __int64 v8; // rdx

  if ( a2 == 3 )
  {
    v3 = sub_14039B0E0();
    a3 += v3;
  }
  LODWORD(v3) = HIDWORD(KeGetPcr()[1].LockArray);
  v7 = a2 == 2;
  if ( v7 != ((*(_QWORD *)(a1 + 24 * v3) >> 1) & 1LL) )
  {
    v8 = *(_QWORD *)(a1 + 24 * v3) & 0xFFFFFFFFFFFFFFFCuLL | (2 * v7);
    *(_QWORD *)(a1 + 24 * v3) = v8;
    __writemsr(0x400000B0u, v8);
  }
  __writemsr(0x400000B1u, a3);
  return 0LL;
}
