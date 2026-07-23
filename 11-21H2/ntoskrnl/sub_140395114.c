/*
 * XREFs of sub_140395114 @ 0x140395114
 * Callers:
 *     sub_140802640 @ 0x140802640 (sub_140802640.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

NTSTATUS sub_140395114()
{
  __int128 *v0; // rbx
  unsigned __int64 v1; // rdi
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  bool v5; // zf
  __int128 v6; // [rsp+30h] [rbp-20h] BYREF
  char *v7; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C23068);
  byte_140C547FC = 1;
  if ( dword_140C547F8 )
  {
    DWORD1(v6) = 0;
    v7 = (char *)&v6 + 8;
    v0 = &v6;
    LOWORD(v6) = 1;
    *((_QWORD *)&v6 + 1) = (char *)&v6 + 8;
    qword_140C547F0 = (PRKEVENT)&v6;
    BYTE2(v6) = 6;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C23068);
  result = dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v5 = (result & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= result;
        if ( v5 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  if ( v0 )
    return KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
  return result;
}
