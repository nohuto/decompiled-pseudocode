/*
 * XREFs of sub_140461B20 @ 0x140461B20
 * Callers:
 *     sub_140214C50 @ 0x140214C50 (sub_140214C50.c)
 *     sub_14026AB70 @ 0x14026AB70 (sub_14026AB70.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 * Callees:
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

__int64 __fastcall sub_140461B20(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // esi
  int v6; // r15d
  char v7; // r12
  char v9; // bp
  unsigned __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  signed __int32 v15; // ett
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v9 = 1;
    v10 = __rdtsc();
    v11 = *((_DWORD *)CurrentPrcb + 8272);
    a2 = (unsigned __int64)HIDWORD(v10) << 32;
    v6 = v10;
  }
  else
  {
    v9 = 0;
    v11 = 0;
  }
  ++*((_DWORD *)CurrentPrcb + 8752);
  v12 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v13 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = v13 + 1;
      if ( v13 == -1 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  _m_prefetchw(a1);
  v15 = *a1 & 0x7FFFFFFF;
  result = (unsigned int)_InterlockedCompareExchange(a1, v15 + 1, v15);
  if ( v15 != (_DWORD)result )
  {
    v16 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v16 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v17 = *(_DWORD *)(v16 + 24) - 1;
        *(_DWORD *)(v16 + 24) = v17;
        if ( !v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    LOBYTE(a2) = v7;
    result = sub_140366A20(a1, a2, a3, a4);
    ++*((_DWORD *)CurrentPrcb + 8753);
    v5 = result;
    *((_DWORD *)CurrentPrcb + 8754) += result;
  }
  if ( v9 )
  {
    v18 = __rdtsc();
    return sub_140632C48((_DWORD)a1, v18, (int)v18 - v6, v5, v11, 2);
  }
  return result;
}
