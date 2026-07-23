/*
 * XREFs of sub_140AABB9C @ 0x140AABB9C
 * Callers:
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 * Callees:
 *     sub_14025E2BC @ 0x14025E2BC (sub_14025E2BC.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403A7BD8 @ 0x1403A7BD8 (sub_1403A7BD8.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 */

void sub_140AABB9C()
{
  _DWORD *v0; // rax
  __int64 v1; // xmm0_8
  int v2; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C0DF90 & 0x80u) != 0 )
  {
    dword_140C0DF90 &= ~0x80u;
    sub_1403A7BD8((LARGE_INTEGER *)&qword_140C0B450);
    v0 = sub_14025E2BC(v3);
    v1 = *(_QWORD *)v0;
    LODWORD(v0) = v0[2];
    qword_140CE1B68 = v1;
    dword_140CE1B70 = (int)v0;
    v2 = sub_1403A8368();
    stru_140D009D8.Parameter = 0LL;
    stru_140D009D8.List.Flink = 0LL;
    dword_140CE1AF0 = v2;
    dword_140CE1B48 = dword_140C0DF90;
    dword_140CE1B80 = 1000000 * qword_140CE1B18 / qword_140C0B450;
    dword_140CE1B24 = 1000000 * qword_140CE1B60 / qword_140C0B450;
    dword_140CE1AF4 = 1000000 * qword_140CE1B58 / qword_140C0B450;
    stru_140D009D8.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140AADDA0;
    ExQueueWorkItem(&stru_140D009D8, DelayedWorkQueue);
    if ( (dword_140C0DF90 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CE1B68,
        HIDWORD(qword_140CE1B68),
        dword_140CE1AF0);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", dword_140C0DFE8);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CE1B78 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CE1B20);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C0DFB0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C0B448 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CE1AE8 / qword_140C0B450);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CE1B40 / qword_140C0B450,
        1000000 * qword_140CE1B30 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CE1B28 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CE1B08);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C0DFAC,
        dword_140CE1B24,
        dword_140CE1AF4);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C0B458 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CE1B10 / qword_140C0B450);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CE1B80,
        1000000 * qword_140CE1B38 / qword_140C0B450);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CE1AF8 / qword_140C0B450);
      if ( qword_140C0DFC0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C0DFC0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140D01578 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
