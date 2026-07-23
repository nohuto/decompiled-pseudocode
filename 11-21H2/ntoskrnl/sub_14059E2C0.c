/*
 * XREFs of sub_14059E2C0 @ 0x14059E2C0
 * Callers:
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 *     sub_1405A1AE8 @ 0x1405A1AE8 (sub_1405A1AE8.c)
 *     sub_1405A1C08 @ 0x1405A1C08 (sub_1405A1C08.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 */

__int64 __fastcall sub_14059E2C0(__int64 a1)
{
  __int64 v2; // rax
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  if ( a1 )
  {
    v2 = sub_140347C10((__int64)&qword_140C4F2C8, 0LL);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
  }
  do
  {
    while ( qword_140C4F2A0 )
      sub_140969850(0LL);
    v3 = ExAcquireSpinLockExclusive(&dword_140C56920);
    v6 = qword_140C4F2A0;
    v7 = v3;
    if ( a1 )
    {
      if ( !qword_140C4F2A0 )
      {
        LOBYTE(v4) = v3;
        sub_1405A1C08(v5, v4);
        sub_1405A032C();
        return sub_1402AFC00((ULONG_PTR)&qword_140C4F2C8);
      }
    }
    else if ( qword_140C4F2A0 || byte_140C4F2E9 )
    {
      LOBYTE(v4) = v3;
      return sub_1405A1AE8(v5, v4);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= result;
          if ( v11 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  while ( v6 );
  if ( !a1 )
    return result;
  return sub_1402AFC00((ULONG_PTR)&qword_140C4F2C8);
}
