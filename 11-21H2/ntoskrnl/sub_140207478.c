/*
 * XREFs of sub_140207478 @ 0x140207478
 * Callers:
 *     sub_140678A28 @ 0x140678A28 (sub_140678A28.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405E0DEC @ 0x1405E0DEC (sub_1405E0DEC.c)
 */

__int64 __fastcall sub_140207478(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  char v8; // al
  int v9; // esi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v2 = (volatile LONG *)(a1 + 1648);
  v4 = a1 + 1656;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1648));
  v6 = *(_QWORD *)v4;
  v7 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
    v6 ^= v4;
  v8 = *(_BYTE *)(v4 + 8);
  v9 = v8 & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v10 = (_QWORD *)v6;
          if ( v9 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v10 = 0LL;
        }
        v11 = *(_QWORD *)(v6 + 8);
        if ( !v11 )
          break;
        v12 = v6;
        if ( v9 )
          v6 ^= v11;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      v13 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= v6;
      sub_1405E0DEC(v6, a2);
      if ( !v13 )
        break;
      v6 = v13;
    }
    v8 = *(_BYTE *)(v4 + 8);
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
