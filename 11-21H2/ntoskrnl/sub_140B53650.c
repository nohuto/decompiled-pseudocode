/*
 * XREFs of sub_140B53650 @ 0x140B53650
 * Callers:
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 *     sub_140B53940 @ 0x140B53940 (sub_140B53940.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_140B53650(void *Src, unsigned int a2)
{
  unsigned int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140D6C0DE = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(qword_140D6A8E0, Src, a2);
  dword_140C1AA7C &= ~1u;
  LODWORD(dword_140D68150) = v2;
  return result;
}
