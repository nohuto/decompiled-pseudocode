/*
 * XREFs of DrvLogDrvChangeDisplaySettingsFailures @ 0x1C01747B0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall DrvLogDrvChangeDisplaySettingsFailures(int a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx

  v4 = 56LL * (((unsigned __int8)_InterlockedExchangeAdd(&dword_1C0294478, 1u) + 1) & 7);
  v5 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)((char *)&unk_1C029E170 + v4) = v5 * KeQueryTimeIncrement();
  *(_DWORD *)((char *)&unk_1C029E170 + v4 + 8) = a1;
  *(_DWORD *)((char *)&unk_1C029E170 + v4 + 12) = a2;
  *(_DWORD *)((char *)&unk_1C029E170 + v4 + 16) = (unsigned int)PsGetCurrentThreadId();
  RtlCaptureStackBackTrace(1u, 4u, (PVOID *)((char *)&unk_1C029E170 + v4 + 24), 0LL);
  return DrvDxgkLogCodePointPacket(119, a1, 0, 0);
}
