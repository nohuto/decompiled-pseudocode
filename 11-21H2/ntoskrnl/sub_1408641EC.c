/*
 * XREFs of sub_1408641EC @ 0x1408641EC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

__int64 sub_1408641EC()
{
  unsigned int v0; // eax
  __int64 result; // rax

  v0 = dword_140C0C80C;
  if ( (unsigned int)dword_140C0C80C < 0x78 )
  {
    v0 = 120;
    dword_140C0C80C = 120;
  }
  if ( v0 > 0xE10 )
  {
    v0 = 3600;
    dword_140C0C80C = 3600;
  }
  dword_140C1F244 = v0;
  result = (unsigned int)_InterlockedExchange(&dword_140C1F280, 0);
  qword_140C1F278 = 0LL;
  qword_140C1F260 = 0LL;
  qword_140C1F270 = (__int64)sub_14099D0B0;
  return result;
}
