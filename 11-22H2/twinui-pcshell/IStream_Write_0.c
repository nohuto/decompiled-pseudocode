/*
 * XREFs of IStream_Write_0 @ 0x1801CE22A
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180116E80 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall IStream_Write_0(IStream *pstm, const void *pv, ULONG cb)
{
  return IStream_Write(pstm, pv, cb);
}
