/*
 * XREFs of ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x1800EF7EC
 * Callers:
 *     AudioServerReleaseStreamConnection @ 0x1800F39E0 (AudioServerReleaseStreamConnection.c)
 *     STREAMCONNECTION_rundown @ 0x1800F50D0 (STREAMCONNECTION_rundown.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall ReleaseStreamConnection(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax
  std::_Ref_count_base *v3; // rcx

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    std::_Ref_count_base::_Decref(v1);
    v3 = (std::_Ref_count_base *)a1[1];
  }
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  operator delete(a1);
  return 0LL;
}
