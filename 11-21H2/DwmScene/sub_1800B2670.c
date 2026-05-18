/*
 * XREFs of sub_1800B2670 @ 0x1800B2670
 * Callers:
 *     sub_1800B2670 @ 0x1800B2670 (sub_1800B2670.c)
 *     sub_1800B2B18 @ 0x1800B2B18 (sub_1800B2B18.c)
 *     sub_1800B2C10 @ 0x1800B2C10 (sub_1800B2C10.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800B2670 @ 0x1800B2670 (sub_1800B2670.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 */

__int64 __fastcall sub_1800B2670(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x1D0uLL) )
  {
    sub_1800B2670(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800B3DDC(v6 + 280);
    sub_1800B3DDC(v6 + 96);
    sub_1800FC250(v6 + 72);
    *((_QWORD *)v6 + 8) = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
    v7 = *((_QWORD *)v6 + 7);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v7 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
