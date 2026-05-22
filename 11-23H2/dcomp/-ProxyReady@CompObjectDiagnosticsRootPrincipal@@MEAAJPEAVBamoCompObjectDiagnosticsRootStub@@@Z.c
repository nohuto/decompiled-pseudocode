/*
 * XREFs of ?ProxyReady@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@@Z @ 0x18019F5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::ProxyReady(
        CompObjectDiagnosticsRootPrincipal *this,
        struct BamoCompObjectDiagnosticsRootStub *a2)
{
  _DWORD *v2; // rax

  v2 = (_DWORD *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    *v2 = 1;
    WakeByAddressAll(*((PVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  return 0LL;
}
