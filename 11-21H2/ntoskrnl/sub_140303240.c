/*
 * XREFs of sub_140303240 @ 0x140303240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402592CC @ 0x1402592CC (sub_1402592CC.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050BAC8 @ 0x14050BAC8 (sub_14050BAC8.c)
 *     sub_14050EB80 @ 0x14050EB80 (sub_14050EB80.c)
 */

char __fastcall sub_140303240(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // si
  __int64 v3; // rax
  __int64 v4; // rdx
  char *v5; // rdi
  int v6; // eax
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // ax
  _QWORD *v10; // rbx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  v3 = sub_140303720(qword_140C4E4B0);
  sub_14042A5E0(v3, v4);
  v5 = (char *)&unk_140C4A280 + 24 * (((unsigned __int8)_InterlockedExchangeAdd(&dword_140C0B464, 1u) + 1) & 0xF);
  *(_QWORD *)v5 = KeQueryInterruptTimePrecise(&v12);
  *((_DWORD *)v5 + 2) = HIDWORD(KeGetPcr()[1].LockArray);
  v5[12] = *((_BYTE *)KeGetCurrentPrcb() + 34) & 1;
  v5[13] = BYTE2(KeGetPcr()->HalReserved[5]);
  v6 = dword_140C2B1C0;
  v5[14] = *((_BYTE *)KeGetCurrentPrcb() + 33);
  *((_DWORD *)v5 + 4) = v6;
  if ( BYTE2(KeGetPcr()->HalReserved[5]) )
  {
    BYTE2(KeGetPcr()->HalReserved[5]) = 0;
  }
  else if ( (*((_BYTE *)KeGetCurrentPrcb() + 34) & 1) != 0 )
  {
    KeClockInterruptNotify(v1, v2);
    if ( *((_BYTE *)KeGetCurrentPrcb() + 33) )
    {
      v7 = qword_140C4E4B0;
      v8 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(qword_140C4E4B0 + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(dword_140C4C808) = 1;
        *(_DWORD *)(qword_140C4E4B0 + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v9 = dword_140C4C808;
      if ( dword_140C4C808 && (_WORD)dword_140C4C808 )
      {
        LOWORD(dword_140C4C808) = 0;
        sub_1402592CC(v9, SHIBYTE(v9));
      }
      if ( *((_BYTE *)KeGetCurrentPrcb() + 33) && qword_140C4E3E8 )
      {
        if ( MEMORY[0xFFFFF78000000008] - qword_140C4C6B0 > (unsigned __int64)qword_140C4C6A0 )
          sub_14042A5E0(v7, v8);
        if ( qword_140C4C6A0 == -1 )
          sub_14050EB80(0LL);
      }
      if ( *((int *)KeGetCurrentPrcb() + 22) > 0 && (*((_BYTE *)KeGetCurrentPrcb() + 88) & 1) == 0 )
      {
        LODWORD(v5) = HIDWORD(KeGetPcr()[1].LockArray);
        v10 = (_QWORD *)(qword_140C4D0B8 + 24LL * (_QWORD)v5);
        if ( MEMORY[0xFFFFF78000000008] - v10[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v10 != v10 )
            sub_14042A5E0(0LL, 0LL);
          sub_14050BAC8((unsigned int)v5);
          v10[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
