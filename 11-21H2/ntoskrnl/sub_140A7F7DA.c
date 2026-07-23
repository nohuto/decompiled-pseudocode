/*
 * XREFs of sub_140A7F7DA @ 0x140A7F7DA
 * Callers:
 *     sub_140A7F480 @ 0x140A7F480 (sub_140A7F480.c)
 *     sub_140A7F4E0 @ 0x140A7F4E0 (sub_140A7F4E0.c)
 *     sub_140A7F570 @ 0x140A7F570 (sub_140A7F570.c)
 *     sub_140A8EF40 @ 0x140A8EF40 (sub_140A8EF40.c)
 *     sub_140A966F0 @ 0x140A966F0 (sub_140A966F0.c)
 *     sub_140A96730 @ 0x140A96730 (sub_140A96730.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 *     sub_140A9C1E0 @ 0x140A9C1E0 (sub_140A9C1E0.c)
 *     sub_140A9C2E0 @ 0x140A9C2E0 (sub_140A9C2E0.c)
 *     sub_140A9C3A0 @ 0x140A9C3A0 (sub_140A9C3A0.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall sub_140A7F7DA(__int64 a1, ULONG a2)
{
  PVOID *v2; // r8
  USHORT v4; // ax

  if ( a1 )
  {
    v2 = (PVOID *)(a1 + 16);
    *(_QWORD *)a1 = KeGetCurrentThread();
    *(_DWORD *)(a1 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (dword_140C1AA7C & 0x40) != 0 )
    {
      *v2 = 0LL;
    }
    else
    {
      v4 = RtlCaptureStackBackTrace(a2, 5u, v2, 0LL);
      if ( v4 < 5u )
        *(_QWORD *)(a1 + 8LL * v4 + 16) = 0LL;
    }
  }
}
