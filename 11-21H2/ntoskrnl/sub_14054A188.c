/*
 * XREFs of sub_14054A188 @ 0x14054A188
 * Callers:
 *     sub_1403992E8 @ 0x1403992E8 (sub_1403992E8.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void sub_14054A188()
{
  ULONG_PTR v0; // r9
  __int64 (__fastcall *v1)(_DWORD *, __int64); // r8
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // esi
  __int64 v4; // rax

  if ( (dword_140D0688C & 2) != 0 )
  {
    v0 = 0LL;
    v1 = sub_14039AF70;
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, qword_140D06B28, 0x1000uLL, 0x646C7648u);
    v1 = (__int64 (__fastcall *)(_DWORD *, __int64))qword_140E01850;
    v0 = 4096LL;
  }
  PoSetHiberRange(0LL, 0x10000u, v1, v0, 0x636C7648u);
  PoSetHiberRange(0LL, 0x10000u, &dword_140D0688C, 0LL, 0x646C7648u);
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    do
    {
      v4 = sub_140348800(v2);
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v4 + 34560), 0x6000uLL, 0x646C7648u);
      ++v2;
    }
    while ( v2 < ActiveProcessorCount );
  }
}
