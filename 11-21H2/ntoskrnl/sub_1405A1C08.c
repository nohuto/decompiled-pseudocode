/*
 * XREFs of sub_1405A1C08 @ 0x1405A1C08
 * Callers:
 *     sub_14059E2C0 @ 0x14059E2C0 (sub_14059E2C0.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405A1C08(__int64 a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf
  ULONG_PTR v8; // rbx

  v2 = qword_140C4F2C8;
  qword_140C4F2C8 = 0LL;
  v3 = a2;
  byte_140C4F2E9 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    do
    {
      v8 = *(_QWORD *)v2;
      result = sub_14024B0B4((_DWORD *)(v2 + 8), 1);
      v2 = v8;
    }
    while ( v8 );
  }
  return result;
}
