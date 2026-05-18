/*
 * XREFs of sub_18004ABBC @ 0x18004ABBC
 * Callers:
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18004AD8C @ 0x18004AD8C (sub_18004AD8C.c)
 */

_QWORD *__fastcall sub_18004ABBC(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _QWORD *result; // rax

  v6 = sub_18001C190();
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    sub_18004AD8C(v6 + 16, *a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 16;
  result = a1;
  a1[1] = v7;
  return result;
}
