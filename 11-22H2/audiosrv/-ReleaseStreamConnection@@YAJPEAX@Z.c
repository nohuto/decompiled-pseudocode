/*
 * XREFs of ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x18011EE7C
 * Callers:
 *     AudioServerReleaseStreamConnection @ 0x180124AE0 (AudioServerReleaseStreamConnection.c)
 *     STREAMCONNECTION_rundown @ 0x1801262E0 (STREAMCONNECTION_rundown.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall ReleaseStreamConnection(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *a1 = 0LL;
  v2 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  operator delete(a1);
  return 0LL;
}
