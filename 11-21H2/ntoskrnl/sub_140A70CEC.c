/*
 * XREFs of sub_140A70CEC @ 0x140A70CEC
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

void __fastcall sub_140A70CEC(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  ULONG ActiveProcessorCount; // eax
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx

  if ( *(int *)(a1 + 16) >= 0 )
  {
    v3 = *(_DWORD *)(a2 + 68) | 0x100;
    if ( !*(_DWORD *)(a1 + 20) )
      v3 = *(_DWORD *)(a2 + 68) & 0xFFFFFEFF;
    *(_DWORD *)(a2 + 68) = v3;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      v5 = qword_140D088C0;
      v6 = ActiveProcessorCount;
      do
      {
        v7 = *v5++;
        *(_QWORD *)(v7 + 320) = 0LL;
        *(_QWORD *)(v7 + 328) = *(_QWORD *)(a1 + 24);
        --v6;
      }
      while ( v6 );
    }
  }
}
