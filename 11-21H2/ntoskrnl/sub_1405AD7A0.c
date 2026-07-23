/*
 * XREFs of sub_1405AD7A0 @ 0x1405AD7A0
 * Callers:
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_1405AD7A0(unsigned __int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  volatile signed __int32 *v7; // r8
  int v8; // esi
  unsigned __int64 v9; // rcx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * a1) >> 4)) + 2);
  v4 = 88LL
     * (((unsigned int)sub_1402E8990(v2) << byte_140C506CD) | dword_140C50738 & (unsigned int)a1 | (v3 << byte_140C506CC))
     + *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL)) + 2440LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
  if ( dword_140C529CC == 1 )
  {
    v5 = a1 & 0x1F;
    LOBYTE(v6) = 1;
    v7 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (a1 >> 5));
    if ( (unsigned __int64)(v5 + 1) > 0x20 )
    {
      if ( (a1 & 0x1F) == 0 )
        goto LABEL_9;
      v8 = a1 & 0x1F;
      _InterlockedOr(v7++, ((1 << (32 - v8)) - 1) << v5);
      v6 = 1LL - (unsigned int)(32 - v8);
      if ( v6 >= 0x20 )
      {
        v9 = v6 >> 5;
        v6 += -32LL * (v6 >> 5);
        do
        {
          *v7++ = -1;
          --v9;
        }
        while ( v9 );
      }
      if ( v6 )
LABEL_9:
        _InterlockedOr(v7, (1 << v6) - 1);
    }
    else
    {
      _InterlockedOr(v7, 1 << v5);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
}
