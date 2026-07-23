/*
 * XREFs of sub_140507644 @ 0x140507644
 * Callers:
 *     sub_1405079C8 @ 0x1405079C8 (sub_1405079C8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140507644(_DWORD *a1, int a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax

  if ( !a3 || byte_140D0158C )
  {
    while ( *a1 < a2 )
      _mm_pause();
  }
  else
  {
    v3 = a3 * *(_QWORD *)KeGetPcr()->HalReserved / 0x3E8uLL;
    v4 = __rdtsc();
    v5 = v4;
    while ( *a1 < a2 )
    {
      v6 = __rdtsc();
      if ( v6 - v5 <= v3 >> 1 )
      {
        if ( v6 - v4 > v3 )
          return 0;
      }
      else
      {
        v4 = v6;
      }
      v5 = v6;
      _mm_pause();
    }
  }
  return 1;
}
