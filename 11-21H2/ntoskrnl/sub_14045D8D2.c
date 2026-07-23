/*
 * XREFs of sub_14045D8D2 @ 0x14045D8D2
 * Callers:
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045D34E @ 0x14045D34E (sub_14045D34E.c)
 *     sub_1405BC8C0 @ 0x1405BC8C0 (sub_1405BC8C0.c)
 */

void __fastcall sub_14045D8D2(__int64 a1, __int64 a2, __int64 *a3, int a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  BOOL v11; // r13d
  unsigned int i; // r12d
  _DWORD *v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned int v19; // edx
  __int64 v20; // r9
  _BYTE *v21; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  bool v26; // zf
  _BYTE v28[256]; // [rsp+40h] [rbp-158h] BYREF

  v5 = 0;
  v9 = a1;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v10 = *(_QWORD **)(a2 + 24);
    else
      v10 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v10 )
      v10 += 512 * (((__int64)a3 - a2 - 48) >> 3);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = dword_140C531D0 != 0;
  for ( i = 0; ; ++i )
  {
    if ( i < a5 )
    {
      v13 = &v28[16 * v5];
      *v13 = 0;
      if ( v11 )
        *(_QWORD *)&v28[16 * v5 + 8] = 0LL;
      v14 = *a3;
      if ( *a3 != qword_140C53278 )
      {
        v15 = (_QWORD *)(48 * v14 - 0x220000000000LL);
        v16 = v15[1];
        if ( (v15[5] & 0xFFFFFFFFFFLL) == v14 )
          v16 = 0xFFFFF6FB7DBEDF68uLL;
        v17 = (v15[2] >> 5) & 0x1FLL;
        if ( (dword_140D051C0 & 1) != 0 || (_DWORD)v17 == 31 )
          goto LABEL_19;
        if ( (unsigned int)v17 >> 3 == 3 )
        {
          if ( ((v15[2] >> 5) & 7) == 0 )
          {
LABEL_19:
            sub_14045D34E((__int64)v13, (__int64)v15, v16, v10);
            goto LABEL_20;
          }
        }
        else if ( (unsigned int)v17 >> 3 != 1 )
        {
          goto LABEL_19;
        }
        *v13 = 2;
        *(_QWORD *)&v28[16 * v5 + 8] = v16 | 1;
      }
LABEL_20:
      if ( ++v5 != 16 )
        goto LABEL_41;
      goto LABEL_25;
    }
    if ( !v5 )
      break;
LABEL_25:
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 232));
    v19 = 0;
    v20 = *(_QWORD *)(a1 + 216) + (unsigned int)(dword_140C531CC * a4);
    v21 = v28;
    do
    {
      if ( (*(_DWORD *)v20 > 1u || v11 && (*(_BYTE *)(v20 + 8) & 1) != 0) && !dword_140C52AC0 )
        sub_1405BC8C0(0x60uLL, a4 + v19, (int)&v28[16 * v19]);
      *(_DWORD *)v20 = *(_DWORD *)v21;
      if ( dword_140C531D0 )
        *(_QWORD *)(v20 + 8) = *((_QWORD *)v21 + 1);
      ++v19;
      v20 += (unsigned int)dword_140C531CC;
      v21 += 16;
    }
    while ( v19 < v5 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 232));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = *((_QWORD *)CurrentPrcb + 4375);
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v26 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    v9 = a1;
    a4 += v5;
    v5 = 0;
LABEL_41:
    if ( v10 )
      v10 += 512;
    if ( a3 )
      ++a3;
  }
}
