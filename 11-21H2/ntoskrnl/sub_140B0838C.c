/*
 * XREFs of sub_140B0838C @ 0x140B0838C
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 */

__int64 __fastcall sub_140B0838C(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v7; // eax
  NTSTATUS v8; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( (dword_140C533E4 & 1) == 0 )
      return 1;
    v7 = sub_140831810(
           PsInitialSystemProcess,
           (__int64)&unk_140C08EA8,
           0LL,
           *((_BYTE *)PsInitialSystemProcess + 2170),
           0LL,
           0,
           0,
           0LL,
           0LL,
           &xmmword_140C533C8 + 1);
    if ( v7 >= 0 )
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
      if ( v4 && ((dword_140D06880 & 0x4000) != 0 || dword_140D05220 == 1) )
        dword_140C533E4 = v5 | 1;
      return 1;
    }
  }
  return v2;
}
