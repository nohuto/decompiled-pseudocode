/*
 * XREFs of ?get_RotationAngle@Api@Visual@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18010D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_RotationAngle(
        Windows::UI::Composition::Visual::Api *this,
        float *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  _DWORD *Reference; // rax
  int v7; // xmm0_4

  v3 = 0;
  *a2 = 0.0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    Reference = CSparseStorage::GetReference((Windows::UI::Composition::Visual::Api *)((char *)this - 56), 8);
    if ( Reference )
      v7 = Reference[68];
    else
      v7 = 0;
    *(_DWORD *)a2 = v7;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
