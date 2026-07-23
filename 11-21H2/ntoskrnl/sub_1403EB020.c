/*
 * XREFs of sub_1403EB020 @ 0x1403EB020
 * Callers:
 *     sub_14042C490 @ 0x14042C490 (sub_14042C490.c)
 *     sub_14042C4A0 @ 0x14042C4A0 (sub_14042C4A0.c)
 *     sub_14042C4B0 @ 0x14042C4B0 (sub_14042C4B0.c)
 *     sub_14042C4C0 @ 0x14042C4C0 (sub_14042C4C0.c)
 *     sub_14042C4D0 @ 0x14042C4D0 (sub_14042C4D0.c)
 *     sub_14042C4E0 @ 0x14042C4E0 (sub_14042C4E0.c)
 *     sub_14042C4F0 @ 0x14042C4F0 (sub_14042C4F0.c)
 *     sub_14042C500 @ 0x14042C500 (sub_14042C500.c)
 *     sub_14042C510 @ 0x14042C510 (sub_14042C510.c)
 *     sub_14042C520 @ 0x14042C520 (sub_14042C520.c)
 *     sub_14042C530 @ 0x14042C530 (sub_14042C530.c)
 *     sub_14042C540 @ 0x14042C540 (sub_14042C540.c)
 *     sub_14042C550 @ 0x14042C550 (sub_14042C550.c)
 *     sub_14042C560 @ 0x14042C560 (sub_14042C560.c)
 *     sub_14042C570 @ 0x14042C570 (sub_14042C570.c)
 *     sub_14042C580 @ 0x14042C580 (sub_14042C580.c)
 * Callees:
 *     KeTestSpinLock @ 0x1402E2BE0 (KeTestSpinLock.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 */

__int64 sub_1403EB020()
{
  _BYTE *v0; // rbx
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, __int64); // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rdx
  bool v12; // zf

  v0 = (_BYTE *)sub_140AB9010();
  if ( !KeTestSpinLock((PKSPIN_LOCK)v0 + 249) )
    return (*((__int64 (__fastcall **)(_BYTE *, _QWORD))v0 + 76))(v0 + 1992, 0LL);
  v2 = *((unsigned int *)v0 + 491);
  v3 = *((_QWORD *)v0 + 242);
  v4 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))*((_QWORD *)v0 + 30);
  v5 = *((unsigned int *)v0 + 486);
  if ( (unsigned int)v2 >= 8 )
  {
    v6 = (unsigned __int64)(unsigned int)v2 >> 3;
    do
    {
      v7 = __rdtsc();
      v2 = (unsigned int)(v2 - 8);
      v8 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)v0 = v8 ^ *((_QWORD *)&v8 + 1);
      v0 += 8;
      --v6;
    }
    while ( v6 );
  }
  if ( (_DWORD)v2 )
  {
    v9 = __rdtsc();
    v10 = (__ROR8__(v9, 3) ^ v9) * (unsigned __int128)0x7010008004002001uLL;
    v11 = v10 ^ *((_QWORD *)&v10 + 1);
    do
    {
      *v0++ = v11;
      v11 >>= 8;
      v12 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v12 );
  }
  return v4(v3, v5, v4, v2);
}
