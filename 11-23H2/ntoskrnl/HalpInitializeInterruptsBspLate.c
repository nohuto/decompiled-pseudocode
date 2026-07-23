/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403AF4DC
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A89A80 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031FD6C (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AF524 (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085E0C8 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B6F9A4 (HalpUpdatePerDeviceMsiLimitInformation.c)
 */

__int64 HalpInitializeInterruptsBspLate()
{
  __int64 result; // rax

  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  HalpUpdatePerDeviceMsiLimitInformation();
  result = (unsigned int)HalpInterruptModel() - 1;
  if ( (unsigned int)result <= 2 )
    return HalpInterruptRemapFixedLines();
  return result;
}
