/*
 * XREFs of sub_1405BC69C @ 0x1405BC69C
 * Callers:
 *     sub_1405BC2C4 @ 0x1405BC2C4 (sub_1405BC2C4.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405BC90C @ 0x1405BC90C (sub_1405BC90C.c)
 */

__int64 __fastcall sub_1405BC69C(__int64 a1, int a2, __int64 a3, int *a4)
{
  volatile LONG *v4; // r13
  unsigned int v6; // esi
  int v10; // ebp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  int v19; // edi
  __int64 v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r8
  int v24; // eax
  __int64 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = (volatile LONG *)(a1 + 232);
  v26 = 0LL;
  v6 = 0;
  LODWORD(v27) = 0;
  v10 = 0;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v12 = *(_QWORD *)(a1 + 216) + (unsigned int)(dword_140C531CC * a2);
  v28 = sub_140317A10(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v28 & 1) != 0 )
  {
    sub_1405BC90C(v12, &v26, v13);
    v19 = *a4;
    if ( (_DWORD)v26 == *a4 )
    {
      *(_DWORD *)a3 = v26;
      if ( dword_140C531D0 )
      {
        v20 = v27;
        *(_QWORD *)(a3 + 8) = v27;
        if ( dword_140C531D0 )
        {
          if ( v20 != *((_QWORD *)a4 + 1) )
            v10 = 59;
        }
      }
    }
    else if ( (*(_BYTE *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL
                        + 34) & 0x10) != 0 )
    {
      if ( !byte_140C52BC0 )
        v10 = 58;
    }
    else
    {
      *(_DWORD *)v12 = v19;
      if ( dword_140C531D0 )
        *(_QWORD *)(v12 + 8) = *((_QWORD *)a4 + 1);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    v6 = v10;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C((__int64)v15);
        }
      }
    }
  }
  __writecr8(v11);
  return v6;
}
