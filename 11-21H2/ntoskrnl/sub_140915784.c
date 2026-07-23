/*
 * XREFs of sub_140915784 @ 0x140915784
 * Callers:
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 */

__int64 __fastcall sub_140915784(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 104);
  MmUnlockPages((PMDL)(v1 + 64));
  MmUnlockPages((PMDL)v1);
  SeFreePrivileges((PPRIVILEGE_SET)v1);
  *(_QWORD *)(a1 + 104) = 0LL;
  result = 65503LL;
  *(_WORD *)(a1 + 48) &= ~0x20u;
  return result;
}
