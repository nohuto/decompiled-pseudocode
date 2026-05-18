/*
 * XREFs of sub_18004AD8C @ 0x18004AD8C
 * Callers:
 *     sub_18004ABBC @ 0x18004ABBC (sub_18004ABBC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18004AD8C(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  a1[1] = a2;
  *a1 = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
  result = a1;
  a1[2] = a3;
  return result;
}
