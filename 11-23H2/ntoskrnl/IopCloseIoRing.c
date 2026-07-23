/*
 * XREFs of IopCloseIoRing @ 0x140949370
 * Callers:
 *     <none>
 * Callees:
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall IopCloseIoRing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  if ( a4 == 1 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    if ( v5 )
    {
      result = MiUnmapViewOfSection(a1, v5, 0, 0);
      *(_QWORD *)(a2 + 40) = 0LL;
    }
  }
  return result;
}
