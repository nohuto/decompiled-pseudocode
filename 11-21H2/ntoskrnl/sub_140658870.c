/*
 * XREFs of sub_140658870 @ 0x140658870
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapViewOfSection @ 0x1406CD150 (MmUnmapViewOfSection.c)
 */

__int64 __fastcall sub_140658870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a4 == 1 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    if ( v5 )
    {
      result = MmUnmapViewOfSection(a1, v5);
      *(_QWORD *)(a2 + 40) = 0LL;
    }
  }
  return result;
}
