/*
 * XREFs of MiInitializeHotPatches @ 0x140B0838C
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int MinimalProcess; // eax
  NTSTATUS v8; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( (dword_140C533E4 & 1) == 0 )
      return 1;
    MinimalProcess = PsCreateMinimalProcess(
                       PsInitialSystemProcess,
                       (__int64)&unk_140C08EA8,
                       0LL,
                       BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       &xmmword_140C533C8 + 1);
    if ( MinimalProcess >= 0 )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle((HANDLE)*(&xmmword_140C533C8 + 1), 0, 0LL, 0, &Object, 0LL);
      xmmword_140C533C8 = (ULONG_PTR)Object;
      if ( v8 >= 0 )
        return 1;
    }
  }
  else
  {
    *(_QWORD *)&qword_140C533B0 = 0LL;
    qword_140C533D8 = 0LL;
    *(_OWORD *)&xmmword_140C533C8 = 0LL;
    qword_140C533A8 = 0LL;
    qword_140C533B8 = 0LL;
    qword_140C533C0 = 0LL;
    v3 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
    dword_140C4F478 = v3;
    v4 = v3;
    if ( (v3 & 0x1FFF) == 0 )
    {
      dword_140C533A0 = v3;
      v5 = dword_140C533E4 | 2;
      dword_140C533E4 |= 2u;
      if ( v4 && ((MiFlags & 0x4000) != 0 || dword_140D05220 == 1) )
        dword_140C533E4 = v5 | 1;
      return 1;
    }
  }
  return v2;
}
