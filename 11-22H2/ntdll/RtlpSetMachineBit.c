/*
 * XREFs of RtlpSetMachineBit @ 0x18008347C
 * Callers:
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpSetMachineBit(_DWORD *a1, unsigned __int16 a2)
{
  switch ( a2 )
  {
    case 0x14Cu:
      *a1 |= 1u;
      break;
    case 0x1C4u:
      *a1 |= 4u;
      break;
    case 0x8664u:
      *a1 |= 2u;
      break;
    case 0xAA64u:
      *a1 |= 8u;
      break;
  }
}
