/*
 * XREFs of sub_140A9B158 @ 0x140A9B158
 * Callers:
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 * Callees:
 *     sub_140A7FD04 @ 0x140A7FD04 (sub_140A7FD04.c)
 *     sub_140A9CF88 @ 0x140A9CF88 (sub_140A9CF88.c)
 */

void __fastcall sub_140A9B158(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx

  v1 = a1;
  if ( !dword_140C1ADEC )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !dword_140D4E000 )
      _InterlockedExchange(&dword_140C1B300, 1);
  }
  dword_140D4E000 = v2;
  sub_140A7FD04(v1);
  if ( (qword_140D01450 & 0x400000) == 0 )
    sub_140A9CF88(v1);
}
