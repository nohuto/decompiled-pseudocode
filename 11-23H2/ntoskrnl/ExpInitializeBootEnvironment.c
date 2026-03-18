/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140B53330
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  dword_140C31B10 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  *(_OWORD *)&ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  qword_140C31B18 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2648LL);
  return IoAddTriageDumpDataBlock((ULONG)&ExpBootEnvironmentInformation, (PVOID)0x20);
}
