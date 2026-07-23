/*
 * XREFs of sub_1405F5E3C @ 0x1405F5E3C
 * Callers:
 *     sub_1405F5B98 @ 0x1405F5B98 (sub_1405F5B98.c)
 * Callees:
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 */

__int64 __fastcall sub_1405F5E3C(__int64 a1, PSID *a2)
{
  unsigned int v2; // ebx
  int v4; // ebp
  char *v5; // rdi
  int v6; // ecx

  v2 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)*a2;
    if ( !*a2 )
      break;
    if ( !RtlValidSid(*a2) )
      return (unsigned int)-1073741704;
    v6 = *(_DWORD *)(v5 + 2);
    if ( !v6 )
      v6 = *((unsigned __int16 *)v5 + 3) - 4352;
    if ( v6 )
      return (unsigned int)-1073741692;
    ++v4;
    ++a2;
    if ( v4 )
      return v2;
  }
  return (unsigned int)-1073741811;
}
