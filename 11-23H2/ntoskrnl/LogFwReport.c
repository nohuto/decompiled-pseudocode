/*
 * XREFs of LogFwReport @ 0x140AEC0F4
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AEC1EC (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x14036EAC8 (BgpGetResolution.c)
 *     BgpFwQueryPerformanceCounter @ 0x140385150 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x1403856E0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C0E4B0 & 0x80u) != 0 )
  {
    dword_140C0E4B0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C0C9C0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CF7B30 = v1;
    dword_140CF7B38 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140D16A18.Parameter = 0LL;
    stru_140D16A18.List.Flink = 0LL;
    dword_140CF7B00 = BitsPerPixel;
    dword_140CF7B18 = dword_140C0E4B0;
    dword_140CF7B70 = 1000000 * qword_140CF7B48 / qword_140C0C9C0;
    dword_140CF7B20 = 1000000 * qword_140CF7B88 / qword_140C0C9C0;
    dword_140CF7B04 = 1000000 * qword_140CF7B80 / qword_140C0C9C0;
    stru_140D16A18.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140D16A18, DelayedWorkQueue);
    if ( (dword_140C0E4B0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CF7B30,
        HIDWORD(qword_140CF7B30),
        dword_140CF7B00);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CF7B68 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CF7B1C);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C0E4D0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C0B708 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CF7AF8 / qword_140C0C9C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140D18050 / qword_140C0C9C0,
        1000000 * qword_140CF7B60 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CF7B28 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CF7B08);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C0E4CC,
        dword_140CF7B20,
        dword_140CF7B04);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C0B710 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CF7B40 / qword_140C0C9C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CF7B70,
        1000000 * qword_140CF7B10 / qword_140C0C9C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CF7B50 / qword_140C0C9C0);
      if ( qword_140C0E4E0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C0E4E0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140D18058 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
