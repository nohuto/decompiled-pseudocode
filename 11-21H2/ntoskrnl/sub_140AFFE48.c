/*
 * XREFs of sub_140AFFE48 @ 0x140AFFE48
 * Callers:
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AFFE48(_DWORD *a1, _QWORD *a2)
{
  int AllErrorSources; // eax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG Size; // [rsp+50h] [rbp+20h] BYREF
  int v8; // [rsp+58h] [rbp+28h] BYREF

  v6[0] = 0LL;
  Size = 0;
  v8 = 0;
  if ( (unsigned int)PshedGetAllErrorSources(&v8, v6, &Size) == -1073741789 )
  {
    v6[0] = PshedAllocateMemory(Size);
    if ( !v6[0] )
    {
      LODWORD(qword_140C10C70) = qword_140C10C70 + 1;
      result = 3221225626LL;
      HIDWORD(qword_140C10C70) |= 1u;
      return result;
    }
    AllErrorSources = PshedGetAllErrorSources(&v8, v6, &Size);
    if ( AllErrorSources >= 0 )
    {
      *a2 = v6[0];
      *a1 = v8;
      return 0LL;
    }
    LODWORD(qword_140C10C70) = qword_140C10C70 + 1;
    HIDWORD(qword_140C10C70) |= 0x20u;
    dword_140C10C78 = AllErrorSources;
  }
  else
  {
    LODWORD(qword_140C10C70) = qword_140C10C70 + 1;
    HIDWORD(qword_140C10C70) |= 4u;
  }
  return 3221225473LL;
}
