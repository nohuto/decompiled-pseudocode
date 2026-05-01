/*
 * XREFs of ?GetIids@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804AB9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::EventInvocationContextProvider<1>::GetIids(__int64 a1, _DWORD *a2, GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_135f9b01_31e9_4797_9f9a_d6be38d3e800;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
