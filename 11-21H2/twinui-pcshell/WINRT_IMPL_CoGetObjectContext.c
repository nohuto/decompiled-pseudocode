/*
 * XREFs of WINRT_IMPL_CoGetObjectContext @ 0x18018F6F7
 * Callers:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801019D4 (--$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA-AU-$com_ptr@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_IMPL_CoGetObjectContext(const IID *const riid, LPVOID *ppv)
{
  return CoGetObjectContext(riid, ppv);
}
