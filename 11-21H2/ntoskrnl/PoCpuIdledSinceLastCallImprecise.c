/*
 * XREFs of PoCpuIdledSinceLastCallImprecise @ 0x140248350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PoCpuIdledSinceLastCallImprecise(int a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = qword_140D088C0[a1];
  if ( !v2 )
  {
    *a2 = 0LL;
    return 1;
  }
  v3 = *(_QWORD *)(v2 + 33632);
  v4 = *a2;
  *a2 = v3;
  return (v3 & 1) != 0 || (unsigned __int64)(v3 - v4) >= 2;
}
