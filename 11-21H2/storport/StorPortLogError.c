/*
 * XREFs of StorPortLogError @ 0x1C00436F0
 * Callers:
 *     StorPortLogErrorVrfy @ 0x1C0095410 (StorPortLogErrorVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterLogIoError @ 0x1C0035378 (RaidAdapterLogIoError.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0035424 (RaidAdapterLogIoErrorDeferred.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5, unsigned int a6, int a7)
{
  _DWORD *Adapter; // rbx
  int v10; // [rsp+30h] [rbp-18h]

  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      RaidAdapterLogIoErrorDeferred((__int64)Adapter, a3, a4, a5, a6, a7);
    }
    else
    {
      v10 = a3;
      BYTE1(v10) = a4;
      RaidAdapterLogIoError((__int64)Adapter, v10, a6, a7);
    }
  }
}
