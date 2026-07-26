/*
 * XREFs of KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1C00B5F78
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B635C (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 128) )
  {
    v2 = *(__int64 **)(a1 + 120);
    result = *v2;
    if ( !*v2 )
      return result;
    *(_QWORD *)(a1 + 120) = result;
    *(_QWORD *)(a1 + 128) = 7LL;
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4253444Eu);
  }
  --*(_QWORD *)(a1 + 128);
  return 16LL * *(_QWORD *)(a1 + 128) + *(_QWORD *)(a1 + 120) + 8LL;
}
