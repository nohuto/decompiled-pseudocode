/*
 * XREFs of sub_140A687F0 @ 0x140A687F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022E848 @ 0x14022E848 (sub_14022E848.c)
 *     sub_1402421DC @ 0x1402421DC (sub_1402421DC.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     sub_14038C0C8 @ 0x14038C0C8 (sub_14038C0C8.c)
 *     sub_14038D050 @ 0x14038D050 (sub_14038D050.c)
 *     sub_14038D068 @ 0x14038D068 (sub_14038D068.c)
 *     sub_14038D0F4 @ 0x14038D0F4 (sub_14038D0F4.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140562EBC @ 0x140562EBC (sub_140562EBC.c)
 *     sub_14056CB60 @ 0x14056CB60 (sub_14056CB60.c)
 *     sub_14056CC3C @ 0x14056CC3C (sub_14056CC3C.c)
 *     sub_140A6849C @ 0x140A6849C (sub_140A6849C.c)
 */

void __fastcall sub_140A687F0(struct _KDPC *Dpc, _BYTE *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  ULONG v4; // r14d
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rax
  __int64 Group; // r15
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v20[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+90h] [rbp-8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v24 = 0;
  v5 = (int)SystemArgument1;
  v19 = 0LL;
  v25 = 0LL;
  memset(v20, 0, sizeof(v20));
  v6 = 1;
  v21 = 0LL;
  v7 = qword_140C448A8;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(qword_140C448A8 + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
  {
    _disable();
    v6 = (v22 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(qword_140C448A8 + 192), 1u);
    while ( *(_DWORD *)(qword_140C448A8 + 192) < (int)SystemArgument1 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber) < 0 )
    goto LABEL_53;
  Group = ProcNumber.Group;
  v9 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(qword_140C448A8 + 16) + 8LL * ProcNumber.Group)) == 0 )
    goto LABEL_26;
  while ( *(int *)(qword_140C448A8 + 200) < 1 )
    _mm_pause();
  sub_14056CC3C();
  sub_14038D068();
  v10 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v10 = (int)sub_1402421DC(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (__int64)v20) >= 0;
  sub_14038D050();
  if ( HalGetProcessorIdByNtNumber(v4, &v24) < 0 )
LABEL_53:
    __fastfail(5u);
  if ( (*(_DWORD *)(qword_140C448A8 + 33184) & 2) != 0 )
    sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), v24);
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
    sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33160), &v19);
  sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33160), v11);
  if ( (*(_DWORD *)(qword_140C448A8 + 33184) & 2) != 0 )
    sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), v24);
  sub_14056CB60();
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 && v6 )
    _enable();
  sub_14038D0F4((__int64)&v25);
  if ( v10 )
    sub_14022E848((__int64)v20);
  sub_14038C0C8(v13, v12, v14);
  _InterlockedAdd((volatile signed __int32 *)(qword_140C448A8 + 204), 1u);
LABEL_26:
  if ( *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) && (*(_DWORD *)(qword_140C448A8 + 64) & 8) == 0 )
  {
    while ( *(int *)(qword_140C448A8 + 200) < 2 )
      _mm_pause();
    if ( (int)sub_140A6849C() < 0 )
    {
      v15 = qword_140C448A8;
      v16 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v16 )
        v16 = 2266;
      *(_DWORD *)(qword_140C448A8 + 33272) = v16;
      v17 = *(_DWORD *)(v15 + 33276);
      if ( !v17 )
        v17 = 1;
      *(_DWORD *)(v15 + 33276) = v17;
    }
    _InterlockedAdd((volatile signed __int32 *)(qword_140C448A8 + 204), 1u);
  }
  while ( *(int *)(qword_140C448A8 + 200) < 4 )
    _mm_pause();
  sub_140562EBC((char **)(qword_140C448A8 + 216 + 8LL * v4), qword_140C448A8 + 16600 + 8LL * v4);
  _InterlockedAdd((volatile signed __int32 *)(qword_140C448A8 + 204), 1u);
  while ( *(int *)(qword_140C448A8 + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
  {
    while ( *(int *)(qword_140C448A8 + 200) < 6 )
      _mm_pause();
    if ( (v9 & *(_QWORD *)(**(_QWORD **)(qword_140C448A8 + 16) + 8 * Group)) != 0 )
    {
      sub_14042A5E0(v19, v18);
    }
    else if ( v6 )
    {
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(qword_140C448A8 + 188), 1u);
  while ( *(_DWORD *)(qword_140C448A8 + 188) < v5 )
    _mm_pause();
}
