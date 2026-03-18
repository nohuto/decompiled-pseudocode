/*
 * XREFs of RtlInitializeBitMap @ 0x14034EDA0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140A990C8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
