/*
 * XREFs of sub_18000F520 @ 0x18000F520
 * Callers:
 *     sub_18000BF70 @ 0x18000BF70 (sub_18000BF70.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 */

void __fastcall sub_18000F520(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_QWORD *)(a1 + 88);
    v6 = v2;
    while ( v3 != v4 )
    {
      _InterlockedAnd(*(volatile signed __int32 **)(v3 + 8), *(_DWORD *)v3 != 0 ? -5 : -2111);
      v3 += 16LL;
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 80);
    v5 = 1;
    if ( *(_DWORD *)(a1 + 28) != -1 )
      v5 = *(_DWORD *)(a1 + 28) + 1;
    *(_DWORD *)(a1 + 28) = v5;
    sub_18000CE58(&v6);
  }
}
