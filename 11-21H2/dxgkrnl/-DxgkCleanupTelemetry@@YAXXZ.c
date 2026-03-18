/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C00517D0
 * Callers:
 *     DxgkUnload @ 0x1C0301B10 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C03C2338 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C012F8A8);
  v0 = qword_1C012F9A8;
  qword_1C012F9A8 = 0LL;
  dword_1C012F988 = 0;
  EtwUnregister(v0);
  v1 = qword_1C012F970;
  qword_1C012F970 = 0LL;
  dword_1C012F950 = 0;
  EtwUnregister(v1);
  v2 = qword_1C012F900;
  qword_1C012F900 = 0LL;
  dword_1C012F8E0 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C012F918);
  v3 = qword_1C012F9E0;
  qword_1C012F9E0 = 0LL;
  dword_1C012F9C0 = 0;
  EtwUnregister(v3);
}
