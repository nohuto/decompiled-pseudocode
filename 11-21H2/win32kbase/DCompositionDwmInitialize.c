/*
 * XREFs of DCompositionDwmInitialize @ 0x1C0080360
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00803A0 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DCompositionDwmInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  unsigned int v7; // edx

  v4 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  v6 = DefaultConnection;
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CConnection::OnDwmInitializeInternal(DefaultConnection);
    DirectComposition::CConnection::Release(v6, v7);
  }
  return v4;
}
