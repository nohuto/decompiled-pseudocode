/*
 * XREFs of sub_140229830 @ 0x140229830
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

struct _KPRCB *__fastcall sub_140229830(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( *((int *)result + 22) > 0 )
  {
    result = KeGetCurrentPrcb();
    if ( (*((_BYTE *)result + 88) & 1) == 0 )
    {
      result = (struct _KPRCB *)off_140C02520[10];
      if ( result )
        return (struct _KPRCB *)sub_14042A5E0(a1, a2, a3);
    }
  }
  return result;
}
