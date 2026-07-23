/*
 * XREFs of sub_140A9CF68 @ 0x140A9CF68
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A9CF68(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = a1[2];
  if ( !v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)a1 + 20LL));
    v1 = a1[2];
  }
  result = (unsigned int)(v1 + 1);
  a1[2] = result;
  return result;
}
