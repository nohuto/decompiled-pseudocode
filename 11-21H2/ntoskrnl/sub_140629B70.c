/*
 * XREFs of sub_140629B70 @ 0x140629B70
 * Callers:
 *     sub_14045F6DE @ 0x14045F6DE (sub_14045F6DE.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_140629D0C @ 0x140629D0C (sub_140629D0C.c)
 */

__int64 __fastcall sub_140629B70(PEX_SPIN_LOCK SpinLock, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-8h]
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = -1LL;
  v19 = -1LL;
  v18 = 0LL;
  v4 = a3;
  v17 = 0LL;
  if ( a2 )
  {
    result = a2;
    v7 = (unsigned __int64)&a3[a2];
    if ( (unsigned __int64)a3 >= v7 )
      return result;
    do
    {
      v8 = *v4;
      result = 0x7FFFFFFEFFFFLL;
      if ( *v4 <= 0x7FFFFFFEFFFFLL )
      {
        v9 = (*v4 & 0x3FF) + 1;
        v10 = (v8 >> 10) & 3;
        if ( ((v8 >> 10) & 3) != 0 )
        {
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
        if ( v3 == -1 )
          v19 = sub_14045F78C(SpinLock);
        result = sub_140629D0C(SpinLock, (__int64)&v16, (__int64)&v19);
        v3 = v19;
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v7 );
  }
  else
  {
    v19 = sub_14045F78C(SpinLock);
    result = sub_140629D0C(SpinLock, (__int64)&v16, (__int64)&v19);
    v3 = v19;
  }
  if ( v3 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
          LOBYTE(v3) = v19;
        }
      }
    }
    result = (unsigned __int8)v3;
    __writecr8((unsigned __int8)v3);
  }
  return result;
}
