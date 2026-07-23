/*
 * XREFs of MmCanFileBeTruncated @ 0x14027F960
 * Callers:
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 * Callees:
 *     sub_14027F9DC @ 0x14027F9DC (sub_14027F9DC.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  __int64 v2; // rax
  unsigned __int8 v3; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp+10h]

  QuadPart = 0LL;
  LOBYTE(v10) = 0;
  if ( NewFileSize )
    QuadPart = NewFileSize->QuadPart;
  v2 = sub_14027F9DC(SectionPointer, (__int64)&v10);
  v3 = v10;
  if ( (_BYTE)v10 == 17 )
    return 0;
  if ( v2 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v3 = v10;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return 1;
}
