/*
 * XREFs of sub_140253E78 @ 0x140253E78
 * Callers:
 *     sub_140253DB4 @ 0x140253DB4 (sub_140253DB4.c)
 *     sub_140A50D3C @ 0x140A50D3C (sub_140A50D3C.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

__int64 sub_140253E78()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf
  struct _KPRCB *v7; // r9
  __int64 v8; // r8

  while ( 1 )
  {
    sub_14077572C(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
    if ( !byte_140C44A00 )
      break;
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = *((_QWORD *)CurrentPrcb + 4375);
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
          *(_DWORD *)(v4 + 20) &= v5;
          if ( v6 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v0);
    sub_140775698(1LL);
    KeWaitForSingleObject(&stru_140C44A20, Executive, 0, 0, 0LL);
  }
  byte_140C44A00 = 1;
  KeResetEvent(&stru_140C44A20);
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v8 = *((_QWORD *)v7 + 4375);
        v6 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(v7);
      }
    }
  }
  __writecr8(v0);
  return result;
}
