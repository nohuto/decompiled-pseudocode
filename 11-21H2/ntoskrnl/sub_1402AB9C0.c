/*
 * XREFs of sub_1402AB9C0 @ 0x1402AB9C0
 * Callers:
 *     sub_140236890 @ 0x140236890 (sub_140236890.c)
 *     sub_140294D50 @ 0x140294D50 (sub_140294D50.c)
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_1402AA9B0 @ 0x1402AA9B0 (sub_1402AA9B0.c)
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_1402F4850 @ 0x1402F4850 (sub_1402F4850.c)
 *     WheaIsAltContextAllocPossible @ 0x140644C80 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     sub_14024EF40 @ 0x14024EF40 (sub_14024EF40.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 */

bool __fastcall sub_1402AB9C0(unsigned __int64 a1, _DWORD *a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  bool result; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  ULONG64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx

  if ( !byte_140C2A950 && (dword_140C31E20 & 3) != 0 )
  {
    *a2 = 0;
    result = 1;
    *a4 = -1LL;
    *a3 = 0xFFFF800000000000uLL;
    return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    v14 = *(_QWORD *)&KeGetPcr()[94].PcrAlign1[12];
    v15 = v14 - 24576;
    if ( a1 < v14 && v15 <= a1 )
    {
      *a2 = 6;
      *a4 = v14;
      result = 1;
      *a3 = v15;
      return result;
    }
    v16 = *(_QWORD *)&KeGetPcr()[89].PcrAlign1[6] + 80LL;
    v17 = v16 - 24576;
    if ( a1 < v16 && v17 <= a1 )
    {
      *a2 = 10;
      *a4 = v16;
      result = 1;
      *a3 = v17;
      return result;
    }
  }
  else if ( (unsigned __int8)sub_1402ABBD0() )
  {
    goto LABEL_5;
  }
  v18 = *(_QWORD *)&KeGetPcr()[89].PcrAlign1[6] + 80LL;
  v19 = v18 - 24576;
  if ( a1 < v18 && v19 <= a1 )
  {
    *a2 = 10;
    *a4 = v18;
    result = 1;
    *a3 = v19;
    return result;
  }
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  if ( (_NT_TIB *)*((_QWORD *)CurrentThread + 5) != KeGetPcr()[1].NtTib.Self )
  {
    *a2 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = 0xFFFF800000000000uLL;
    return result;
  }
  if ( CurrentIrql >= 2u )
  {
    v20 = KeGetPcr()[36].Unused[0] + 80;
    v21 = v20 - (unsigned int)dword_140D05050;
    if ( v21 <= a1 && a1 < v20 )
    {
      *a2 = 1;
      result = 1;
      *a4 = v20;
      *a3 = v21;
      return result;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)qword_140C2AD88 )
    {
      *a2 = 7;
      result = 1;
      *a4 = -1LL;
      *a3 = 0xFFFF800000000000uLL;
      return result;
    }
  }
  if ( !(unsigned __int8)sub_1402ABBD0() || KeGetCurrentIrql() >= 0xFu )
  {
    if ( sub_14024EF40(3u, a1) )
    {
      *a2 = 8;
      result = 1;
      *a4 = -1LL;
      *a3 = 0xFFFF800000000000uLL;
      return result;
    }
    if ( sub_14024EF40(2u, v22) )
    {
      *a2 = 9;
      *a4 = -1LL;
      *a3 = 0xFFFF800000000000uLL;
      return 1;
    }
  }
  if ( (*((_DWORD *)CurrentThread + 29) & 0x1000) != 0 )
  {
    *a2 = 2;
  }
  else if ( *((_BYTE *)CurrentThread + 731) )
  {
    *a2 = 4;
  }
  else
  {
    *a2 = 3;
  }
  v10 = *((_QWORD *)CurrentThread + 6);
  v11 = v10;
  v12 = *((_QWORD *)CurrentThread + 7);
  *a4 = v12;
  if ( v10 >= v12 )
    v11 = v10;
  *a3 = v10;
  return v11 <= a1 && a1 < *a4;
}
