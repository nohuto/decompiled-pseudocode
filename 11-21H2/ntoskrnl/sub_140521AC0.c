/*
 * XREFs of sub_140521AC0 @ 0x140521AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402592CC @ 0x1402592CC (sub_1402592CC.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050BAC8 @ 0x14050BAC8 (sub_14050BAC8.c)
 *     sub_14050C138 @ 0x14050C138 (sub_14050C138.c)
 *     sub_14050EB80 @ 0x14050EB80 (sub_14050EB80.c)
 */

char __fastcall sub_140521AC0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  _QWORD *v12; // rbx

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_BYTE *)(v2 + 41);
  v4 = sub_140303720(qword_140C4E4C8);
  sub_14042A5E0(v4, v5);
  if ( (*((_BYTE *)KeGetCurrentPrcb() + 34) & 2) != 0 )
  {
    sub_14050C138(1);
    LOBYTE(v6) = v3;
    KeClockInterruptNotify(v2, v6, v7, v8);
    if ( *((_BYTE *)KeGetCurrentPrcb() + 33) )
    {
      v9 = qword_140C4E4B0;
      v10 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(qword_140C4E4B0 + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(dword_140C4C808) = 1;
        *(_DWORD *)(qword_140C4E4B0 + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v11 = dword_140C4C808;
      if ( dword_140C4C808 && (_WORD)dword_140C4C808 )
      {
        LOWORD(dword_140C4C808) = 0;
        sub_1402592CC(v11, SHIBYTE(v11));
      }
      if ( *((_BYTE *)KeGetCurrentPrcb() + 33) && qword_140C4E3E8 )
      {
        if ( MEMORY[0xFFFFF78000000008] - qword_140C4C6B0 > (unsigned __int64)qword_140C4C6A0 )
          sub_14042A5E0(v9, v10);
        if ( qword_140C4C6A0 == -1 )
          sub_14050EB80(0);
      }
      if ( *((int *)KeGetCurrentPrcb() + 22) > 0 && (*((_BYTE *)KeGetCurrentPrcb() + 88) & 1) == 0 )
      {
        LODWORD(v1) = HIDWORD(KeGetPcr()[1].LockArray);
        v12 = (_QWORD *)(qword_140C4D0B8 + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v12[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v12 != v12 )
            sub_14042A5E0(0LL, 0LL);
          sub_14050BAC8(v1);
          v12[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
