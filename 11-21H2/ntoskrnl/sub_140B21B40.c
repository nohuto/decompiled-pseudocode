/*
 * XREFs of sub_140B21B40 @ 0x140B21B40
 * Callers:
 *     sub_14084C160 @ 0x14084C160 (sub_14084C160.c)
 * Callees:
 *     sub_1403DCD34 @ 0x1403DCD34 (sub_1403DCD34.c)
 *     sub_14084C25C @ 0x14084C25C (sub_14084C25C.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 *     sub_140AA9A28 @ 0x140AA9A28 (sub_140AA9A28.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 */

char __fastcall sub_140B21B40(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !sub_140AFE7A0(a1) )
    return 0;
  WerLiveKernelInitSystem();
  if ( !(unsigned int)sub_140B110B4() )
  {
    if ( qword_140D01468 && qword_140D01468[1] )
      sub_140AA9A28(0xBu, 0LL);
    LODWORD(dword_140C474FC) = 8;
    return 0;
  }
  if ( !dword_140C0C6C4 )
    sub_1403DCD34();
  if ( dword_140C1B2A0 )
    sub_140A81780(0);
  sub_14084C25C(v2, v1);
  return 1;
}
