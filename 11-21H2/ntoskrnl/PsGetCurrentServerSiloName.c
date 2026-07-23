/*
 * XREFs of PsGetCurrentServerSiloName @ 0x1409AB760
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 *PsGetCurrentServerSiloName()
{
  _WORD *v0; // rax
  __int64 *v1; // rcx

  v0 = (char *)sub_140347DB0() + 1280;
  v1 = &qword_140A38B70;
  if ( *v0 )
    return (__int64 *)v0;
  return v1;
}
