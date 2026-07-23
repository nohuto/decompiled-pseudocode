/*
 * XREFs of sub_1405A931C @ 0x1405A931C
 * Callers:
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_140A6A73C @ 0x140A6A73C (sub_140A6A73C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405AC9A0 @ 0x1405AC9A0 (sub_1405AC9A0.c)
 */

__int64 __fastcall sub_1405A931C(unsigned __int64 a1, int a2)
{
  ULONG_PTR v4; // r14
  BOOL v5; // esi
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  char v8; // dl
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = sub_140317A10(a1);
  v4 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFFLL;
  v5 = 0;
  if ( sub_140317A80(a1) )
    v5 = sub_140229550() != 0;
  *(_QWORD *)a1 = 0LL;
  if ( v5 )
    sub_1402294F0(a1, 0LL);
  if ( a2 )
    sub_1405AC9A0(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v6 = 48 * v4 - 0x220000000000LL;
  v7 = sub_1402F2700(v6);
  v8 = *(_BYTE *)(v6 + 34) & 0xEF;
  v9 = v7;
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v6 + 34) = v8;
  v10 = *(_QWORD *)(v6 + 24);
  *(_WORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 24) = v10 ^ ((v10 - 1) ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
  sub_1402C6EB0(v4, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
