/*
 * XREFs of MiInitializeHotPatches @ 0x140B44AF8
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int MinimalProcess; // eax
  NTSTATUS v6; // eax
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( (qword_140C69880 & 1) == 0 )
      return 1;
    MinimalProcess = PsCreateMinimalProcess(
                       (__int64)PsInitialSystemProcess,
                       (__int64)&unk_140C09488,
                       0LL,
                       BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       &xmmword_140C69858);
    if ( MinimalProcess >= 0 )
    {
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(xmmword_140C69858, 0, 0LL, 0, &Object, 0LL);
      *(&xmmword_140C69848 + 1) = (ULONG_PTR)Object;
      if ( v6 >= 0 )
        return 1;
    }
  }
  else
  {
    qword_140C69828 = 0LL;
    *(_OWORD *)&xmmword_140C69830 = 0LL;
    *(_OWORD *)&xmmword_140C69848 = 0LL;
    qword_140C69840 = 0LL;
    *(_OWORD *)&xmmword_140C69858 = 0LL;
    dword_140C6987C = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
    if ( (dword_140C6987C & 0x1FFF) == 0 )
    {
      v3 = qword_140C69880 | 2;
      LODWORD(qword_140C69880) = qword_140C69880 | 2;
      if ( dword_140C6987C && ((MiFlags & 0x4000) != 0 || dword_140D1D230 == 1) )
        LODWORD(qword_140C69880) = v3 | 1;
      return 1;
    }
  }
  return v2;
}
