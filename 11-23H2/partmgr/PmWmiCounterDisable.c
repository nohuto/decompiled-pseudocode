/*
 * XREFs of PmWmiCounterDisable @ 0x1C0022550
 * Callers:
 *     ?PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00047F4 (-PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmWmiFunctionControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KW4_WMIENABLEDISABLECONTROL@@E@Z @ 0x1C0022340 (-PmWmiFunctionControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KW4_WMIENABLEDISABLECONTROL@@E@Z.c)
 *     PmIoctlPerformanceOff @ 0x1C0023DC4 (PmIoctlPerformanceOff.c)
 * Callees:
 *     <none>
 */

char __fastcall PmWmiCounterDisable(PVOID *a1, char a2, char a3)
{
  char v3; // bl
  volatile __int32 *v5; // r9
  signed __int32 v6; // ecx
  bool v7; // cc
  int v8; // ecx
  bool v9; // zf

  v3 = 0;
  if ( !a1 )
    return v3;
  v5 = (volatile __int32 *)*a1;
  if ( !*a1 )
    return v3;
  if ( a2 )
  {
    _InterlockedExchange(v5 + 14, 0);
LABEL_8:
    if ( a3 )
    {
      ExFreePoolWithTag(*a1, 0);
      *a1 = 0LL;
    }
    return v3;
  }
  v6 = _InterlockedExchangeAdd(v5 + 14, 0xFFFFFFFF);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( !v7 )
    return 1;
  v9 = v8 == 0;
  if ( v8 < 0 )
    v9 = _InterlockedIncrement((volatile signed __int32 *)*a1 + 14) == 0;
  if ( v9 )
    goto LABEL_8;
  return v3;
}
