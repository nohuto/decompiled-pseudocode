/*
 * XREFs of sub_140280308 @ 0x140280308
 * Callers:
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 * Callees:
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 */

__int64 __fastcall sub_140280308(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9; // rbx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = sub_140317A10(a1);
  v5 = (v4 >> 5) & 0x1F;
  if ( (unsigned int)sub_1402806A0(v4) )
  {
    v11 = 0LL;
    v10 = 0;
    v7 = sub_1403536F0(a1 << 25 >> 16, &v10, &v11);
    if ( v11 )
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                        + 284LL));
  }
  else
  {
    v9 = v6;
    if ( qword_140C50780 )
    {
      if ( (v6 & 0x10) != 0 )
        v9 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v9 = v6 & ~qword_140C50780;
    }
    v7 = v9 >> 16;
    LODWORD(v5) = (v6 & 8) != 0 ? 1 : 256;
  }
  *a2 = v5;
  return v7;
}
