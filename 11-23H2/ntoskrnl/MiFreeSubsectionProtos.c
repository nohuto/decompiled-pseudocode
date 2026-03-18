/*
 * XREFs of MiFreeSubsectionProtos @ 0x1407B6074
 * Callers:
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5BB8 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B5D00 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x14033EBC4 (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(_QWORD **a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = (_QWORD *)*v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
