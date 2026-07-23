/*
 * XREFs of sub_14096DD80 @ 0x14096DD80
 * Callers:
 *     IoGetContainerInformation @ 0x1409371A0 (IoGetContainerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14096DD80(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
    *a2 = *(_DWORD *)(v2 + 8);
  return *(unsigned int *)(v2 + 848);
}
