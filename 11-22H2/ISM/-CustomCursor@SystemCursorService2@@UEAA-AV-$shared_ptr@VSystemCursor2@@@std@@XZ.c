/*
 * XREFs of ?CustomCursor@SystemCursorService2@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@XZ @ 0x1801140A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180115954 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

_QWORD *__fastcall SystemCursorService2::CustomCursor(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(std::_Ref_count_base **)(a1 + 256);
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    *v2 = *(_QWORD *)(v4 + 248);
    v2[1] = *(_QWORD *)(v4 + 256);
  }
  return v2;
}
