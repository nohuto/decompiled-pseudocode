/*
 * XREFs of KdReleaseDebuggerLock @ 0x1403DE370
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall KdReleaseDebuggerLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  bool v5; // zf

  v1 = a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
  result = (unsigned int)dword_140D06B08;
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
        v5 = ((unsigned int)result & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= result;
        if ( v5 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  return result;
}
