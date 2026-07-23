/*
 * XREFs of sub_140305670 @ 0x140305670
 * Callers:
 *     <none>
 * Callees:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050BAC8 @ 0x14050BAC8 (sub_14050BAC8.c)
 *     sub_14050EB80 @ 0x14050EB80 (sub_14050EB80.c)
 */

char __fastcall sub_140305670(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v5; // rbx

  KeClockInterruptNotify(*(_QWORD *)(a1 + 136), *(unsigned __int8 *)(*(_QWORD *)(a1 + 136) + 41LL));
  if ( *((_BYTE *)KeGetCurrentPrcb() + 33) && qword_140C4E3E8 )
  {
    if ( MEMORY[0xFFFFF78000000008] - qword_140C4C6B0 > (unsigned __int64)qword_140C4C6A0 )
      sub_14042A5E0(v3, v2);
    if ( qword_140C4C6A0 == -1 )
      sub_14050EB80(0LL);
  }
  if ( *((int *)KeGetCurrentPrcb() + 22) <= 0 || (*((_BYTE *)KeGetCurrentPrcb() + 88) & 1) != 0 )
    return 1;
  LODWORD(v1) = HIDWORD(KeGetPcr()[1].LockArray);
  v5 = (_QWORD *)(qword_140C4D0B8 + 24 * v1);
  if ( MEMORY[0xFFFFF78000000008] - v5[2] >= 0x4C4B40uLL )
  {
    if ( (_QWORD *)*v5 != v5 )
      sub_14042A5E0(0LL, 0LL);
    sub_14050BAC8((unsigned int)v1);
    v5[2] = MEMORY[0xFFFFF78000000008];
  }
  return 1;
}
