/*
 * XREFs of sub_140AF35B8 @ 0x140AF35B8
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140AF3770 @ 0x140AF3770 (sub_140AF3770.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 */

__int64 __fastcall sub_140AF35B8(int a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf
  _OWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v16[0] = 0LL;
  sub_140339C20(0LL, 0, (__int64)v16);
  v2 = 0xFFFFF6C000000000uLL;
  v3 = (((unsigned __int64)qword_140D069A8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  if ( v2 < v3 )
    sub_140AF3770(v2, v3 - 8, 3, a1, (__int64)v16);
  v5 = (((unsigned __int64)(qword_140D069A8 + (qword_140D06B38 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FFFFFFFFF8uLL;
  v7 = 3LL;
  do
  {
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 < v6 )
    sub_140AF3770(v5 + 8, v6, 3, a1, (__int64)v16);
  sub_140AF3FFC(v16, 0xFFFFF6FBC0000000uLL);
  v17 = sub_140317A10(0xFFFFF6FBC0000000uLL);
  v8 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = sub_1402F2700(v8);
  ++*(_WORD *)(v8 + 32);
  v10 = v9;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return result;
}
