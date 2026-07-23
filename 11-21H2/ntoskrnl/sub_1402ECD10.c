/*
 * XREFs of sub_1402ECD10 @ 0x1402ECD10
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 *     sub_140961390 @ 0x140961390 (sub_140961390.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     sub_1402EE784 @ 0x1402EE784 (sub_1402EE784.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_1402EF5FC @ 0x1402EF5FC (sub_1402EF5FC.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1402ECD10(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rcx
  struct _KPRCB *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  _DWORD v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[14]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v1 + 992) & 1) != 0 )
  {
    memset(v16, 0, 0x68uLL);
    v16[1] = *(unsigned int *)(a1 + 796);
    v16[2] = a1;
    LOBYTE(v11) = 2;
    LOBYTE(v1) = sub_140358A20(v11, 9LL, 0LL, v16);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v15[0] = 0;
    while ( 1 )
    {
      v6 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v6 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v12 = *(_DWORD *)(v6 + 24);
          *(_DWORD *)(v6 + 24) = v12 + 1;
          if ( v12 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v10 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v10 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v13 = *(_DWORD *)(v10 + 24) - 1;
          *(_DWORD *)(v10 + 24) = v13;
          if ( !v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(v15);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        sub_1402EE784(a1 + 648);
        LOBYTE(v8) = CurrentIrql;
        sub_1402EE894(v7, a1 + 648, v8);
      }
    }
    sub_140224100(a1);
    LOBYTE(v1) = sub_1402B0820((__int64)v7, 0, 1, 0, CurrentIrql);
    if ( v3 )
    {
      KeAlertThread(a1, 0);
      LOBYTE(v1) = sub_1402EF5FC(a1);
    }
  }
  return v1;
}
