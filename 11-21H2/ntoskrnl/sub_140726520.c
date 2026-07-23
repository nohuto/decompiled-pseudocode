/*
 * XREFs of sub_140726520 @ 0x140726520
 * Callers:
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     sub_140724418 @ 0x140724418 (sub_140724418.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1406BC1E4 @ 0x1406BC1E4 (sub_1406BC1E4.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 */

void __fastcall sub_140726520(unsigned __int16 *a1, __int64 *a2, int *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  PSE_EXPORTS v11; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  if ( !RtlEqualSid(Group, v10) )
  {
    if ( (v11 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v10))
      && !RtlEqualSid(v11->SeLocalServiceSid, v10)
      || sub_1406BC1E4(1, (unsigned int *)a3) )
    {
      sub_1407240A0((int)a2, &qword_140001B08, a1, v4, a2[2], a3, a4);
    }
  }
}
