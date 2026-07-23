/*
 * XREFs of sub_1403536F0 @ 0x1403536F0
 * Callers:
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_140280308 @ 0x140280308 (sub_140280308.c)
 *     sub_1402803FC @ 0x1402803FC (sub_1402803FC.c)
 *     sub_1402804F0 @ 0x1402804F0 (sub_1402804F0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140353858 @ 0x140353858 (sub_140353858.c)
 */

__int64 __fastcall sub_1403536F0(unsigned __int64 a1, _DWORD *a2, __int64 ***a3)
{
  __int64 v6; // rax
  __int64 **v7; // rax
  __int64 v8; // r8
  __int64 **v9; // rsi
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 24;
      return 0LL;
    }
    else
    {
      *a2 = 4;
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) != 0 )
      goto LABEL_5;
    v6 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140C50668;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_140C50678 && v6 )
    {
      result = qword_140C50670;
      *a2 = 1;
    }
    else
    {
LABEL_5:
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                      + 284LL));
      v7 = sub_1403126F0(a1);
      v9 = v7;
      if ( v7 )
      {
        result = sub_140353858(a1, v7, v8, a2);
        *a3 = v9;
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                          + 284LL));
        result = 0LL;
        *a2 = 24;
      }
    }
  }
  return result;
}
