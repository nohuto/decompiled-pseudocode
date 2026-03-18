/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x1408737FC
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x1408737C8 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1403486A0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x1403C6458 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C3D068; qword_140C3D068 + 50000000 <= v3; i = qword_140C3D068 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock(&qword_140C3D070, &qword_140C3D068, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
