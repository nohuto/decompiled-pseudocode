/*
 * XREFs of MiFreeSubsectionProtos @ 0x1406DDE9C
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DDB48 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(char **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(char **)v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
