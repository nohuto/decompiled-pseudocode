/*
 * XREFs of sub_1800509A0 @ 0x1800509A0
 * Callers:
 *     sub_180052534 @ 0x180052534 (sub_180052534.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800509A0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // r8
  _QWORD *result; // rax

  v3 = *a3;
  a1[1] = *a2;
  *a1 = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
  result = a1;
  a1[2] = v3;
  return result;
}
