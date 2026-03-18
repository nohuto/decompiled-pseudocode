/*
 * XREFs of ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C001EC18
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C01E8020 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5EA8 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::UnpinMode(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( *((_QWORD *)this + 18) )
    {
      *((_QWORD *)this + 18) = 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(this, a2);
      return 1075708679LL;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    return 3223192352LL;
  }
  return result;
}
