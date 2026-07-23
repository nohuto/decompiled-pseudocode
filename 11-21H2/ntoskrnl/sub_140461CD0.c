/*
 * XREFs of sub_140461CD0 @ 0x140461CD0
 * Callers:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402169E0 (ExTryConvertSharedSpinLockExclusive.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 *     sub_140632CBC @ 0x140632CBC (sub_140632CBC.c)
 */

__int64 __fastcall sub_140461CD0(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // r12
  char v8; // si
  unsigned __int64 v9; // rax
  int v10; // r14d
  volatile signed __int32 v11; // ecx
  int v12; // ebp
  unsigned __int64 v13; // rax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v8 = 1;
    v9 = __rdtsc();
    v10 = *((_DWORD *)CurrentPrcb + 8272);
    a2 = (unsigned __int64)HIDWORD(v9) << 32;
    v4 = v9;
  }
  else
  {
    v8 = 0;
    v10 = 0;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++*((_DWORD *)CurrentPrcb + 8752);
  v11 = *a1;
  if ( (v11 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v11 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      sub_1402F32E0(&v15, a2, a3, a4);
      v11 = *a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000001 );
  }
  v12 = v15;
  *((_DWORD *)CurrentPrcb + 8754) += v15;
  ++*((_DWORD *)CurrentPrcb + 8753);
  if ( v8 )
  {
    sub_140632CBC(a1, v6, __rdtsc());
    v13 = __rdtsc();
    sub_140632C48((_DWORD)a1, v13, v13 - v4, v12, v10, 4);
  }
  return 1LL;
}
