/*
 * XREFs of ?PmFreeTelemetry@@YAXPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C00200A0
 * Callers:
 *     PmSendTelemetry @ 0x1C0020134 (PmSendTelemetry.c)
 * Callees:
 *     <none>
 */

void __fastcall PmFreeTelemetry(PVOID *P)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  PVOID v4; // rcx
  PVOID v5; // rcx

  v2 = P + 51;
  v3 = 4LL;
  do
  {
    if ( *v2 )
      ExFreePoolWithTag(*v2, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = P[49];
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = P[48];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(P, 0);
}
