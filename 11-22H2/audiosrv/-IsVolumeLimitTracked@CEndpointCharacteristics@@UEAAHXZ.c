/*
 * XREFs of ?IsVolumeLimitTracked@CEndpointCharacteristics@@UEAAHXZ @ 0x18014E520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEndpointCharacteristics::IsVolumeLimitTracked(CEndpointCharacteristics *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1 - *((_QWORD *)this + 48);
  if ( *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1 == *((_QWORD *)this + 48) )
    v1 = *(_QWORD *)GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data4 - *((_QWORD *)this + 49);
  if ( !v1 )
    return 1LL;
  v2 = *(_QWORD *)&GUID_1ccf610b_f3db_47c1_834c_b19bc76ce5ab.Data1 - *((_QWORD *)this + 48);
  if ( *(_QWORD *)&GUID_1ccf610b_f3db_47c1_834c_b19bc76ce5ab.Data1 == *((_QWORD *)this + 48) )
    v2 = *(_QWORD *)GUID_1ccf610b_f3db_47c1_834c_b19bc76ce5ab.Data4 - *((_QWORD *)this + 49);
  if ( !v2 )
    return 1LL;
  v3 = *(_QWORD *)&GUID_a79d957d_5cd5_458a_b3f1_af8e789b1f3b.Data1 - *((_QWORD *)this + 48);
  if ( *(_QWORD *)&GUID_a79d957d_5cd5_458a_b3f1_af8e789b1f3b.Data1 == *((_QWORD *)this + 48) )
    v3 = *(_QWORD *)GUID_a79d957d_5cd5_458a_b3f1_af8e789b1f3b.Data4 - *((_QWORD *)this + 49);
  if ( !v3 )
    return 1LL;
  v4 = *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1 - *((_QWORD *)this + 48);
  if ( *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1 == *((_QWORD *)this + 48) )
    v4 = *(_QWORD *)GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data4 - *((_QWORD *)this + 49);
  return !v4;
}
