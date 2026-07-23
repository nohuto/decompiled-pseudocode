/*
 * XREFs of sub_140243EC4 @ 0x140243EC4
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 * Callees:
 *     sub_1402F5EA0 @ 0x1402F5EA0 (sub_1402F5EA0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140243EC4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // r14
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v3 = *(_QWORD *)(v2 >> 16);
  result = *(unsigned int *)(v3 + 56);
  if ( (result & 0x20) == 0 )
  {
    result = sub_1402F5EA0(CurrentThread, &v14);
    if ( (int)result >= 0 )
    {
      v5 = v14;
      if ( v14 == 8LL * *(_QWORD *)(v3 + 120) )
      {
        v6 = v14;
      }
      else
      {
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        v8 = *(_QWORD *)(v3 + 120);
        v9 = v7;
        v10 = 8 * v8;
        *(_QWORD *)(v3 + 120) = (v5 >> 3) | v8 & 0xE000000000000000uLL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v12 = *((_QWORD *)CurrentPrcb + 4375);
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
              *(_DWORD *)(v12 + 20) &= result;
              if ( v13 )
                result = sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
        if ( !v10 )
          return result;
        v6 = v10;
      }
      return sub_140366814(v6);
    }
  }
  return result;
}
