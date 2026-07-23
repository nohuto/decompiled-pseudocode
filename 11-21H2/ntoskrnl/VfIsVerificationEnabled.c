/*
 * XREFs of VfIsVerificationEnabled @ 0x1403B64C0
 * Callers:
 *     VfFailDeviceNode @ 0x1403B6480 (VfFailDeviceNode.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140A811AC @ 0x140A811AC (sub_140A811AC.c)
 */

LOGICAL __fastcall VfIsVerificationEnabled(int a1, struct _DRIVER_OBJECT *a2)
{
  int v3; // ecx

  if ( !dword_140C1ADA8 )
    return 0;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return ((unsigned int)dword_140C29FC0 >> 30) & 1;
      return 0;
    }
  }
  else if ( (dword_140C29FC0 & 0x800) != 0 )
  {
    return MmIsDriverVerifying(a2);
  }
  if ( dword_140C29FC0 < 0 )
    return 0;
  return (unsigned __int8)sub_140A811AC(a2);
}
