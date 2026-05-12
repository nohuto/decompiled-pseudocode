/*
 * XREFs of sub_1C0014A1C @ 0x1C0014A1C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 */

__int64 __fastcall sub_1C0014A1C(__int64 a1, signed __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v9; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rsi
  struct _IO_WORKITEM *v11; // rcx

  v4 = 0;
  if ( !a1 || !a2 || !a3 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F194(off_1C0093070->AttachedDevice, 61LL, &unk_1C0083380, a1, a2, a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 62LL, &unk_1C0083380);
    }
    return (unsigned int)-1056964596;
  }
  else
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      v9 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_1C000E2EC(a1);
      v10 = v9;
      if ( v9 )
      {
        if ( (int)sub_1C00076F4((__int64)v9) < 0 )
        {
          return (unsigned int)-1056964599;
        }
        else if ( _InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
        {
          v4 = -1056964596;
          ExReleaseRundownProtectionCacheAware(v10[37]);
        }
        else
        {
          v11 = (struct _IO_WORKITEM *)*a3;
          a3[2] = a4;
          IoQueueWorkItem(v11, sub_1C0014E30, DelayedWorkQueue, a3);
        }
        return v4;
      }
      return (unsigned int)-1056964602;
    }
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 63LL, &unk_1C0083380);
    }
    return (unsigned int)-1056964600;
  }
}
