/*
 * XREFs of sub_140701EB4 @ 0x140701EB4
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     DnsPrint_RpcZoneInfo_0 @ 0x140701B64 (DnsPrint_RpcZoneInfo_0.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_140701EB4(char a1, int *a2)
{
  int result; // eax

  result = 0;
  *a2 = 0;
  if ( (a1 & 1) != 0 )
  {
    *a2 = 1;
    result = 1;
  }
  if ( (a1 & 2) != 0 )
  {
    result |= 2u;
    *a2 = result;
  }
  if ( (a1 & 4) != 0 )
  {
    result |= 4u;
    *a2 = result;
  }
  if ( (a1 & 0x10) != 0 )
  {
    result |= 0x80u;
    *a2 = result;
  }
  if ( (a1 & 0x20) != 0 )
  {
    result |= 0x100u;
    *a2 = result;
  }
  if ( (a1 & 0x40) != 0 )
  {
    result |= 0x200u;
    *a2 = result;
  }
  return result;
}
