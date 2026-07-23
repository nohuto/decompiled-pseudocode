/*
 * XREFs of sub_140976880 @ 0x140976880
 * Callers:
 *     sub_140976DFC @ 0x140976DFC (sub_140976DFC.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A3418 @ 0x1405A3418 (sub_1405A3418.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_1405EF908 @ 0x1405EF908 (sub_1405EF908.c)
 *     sub_140972BD4 @ 0x140972BD4 (sub_140972BD4.c)
 *     sub_140976140 @ 0x140976140 (sub_140976140.c)
 *     sub_140976EAC @ 0x140976EAC (sub_140976EAC.c)
 *     sub_1409C025C @ 0x1409C025C (sub_1409C025C.c)
 *     sub_1409C02BC @ 0x1409C02BC (sub_1409C02BC.c)
 *     sub_1409C04B8 @ 0x1409C04B8 (sub_1409C04B8.c)
 *     sub_1409C0550 @ 0x1409C0550 (sub_1409C0550.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140976880(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r14
  unsigned __int8 v6; // r15
  _RTL_BITMAP *v7; // rax
  _RTL_BITMAP *v8; // rdx
  int v9; // edi
  ULONG *v10; // r13
  _RTL_BITMAP *v11; // rdx
  int v12; // edx
  _DWORD *v13; // rdi
  _DWORD *v14; // r12
  int v15; // r8d
  ULONG v16; // r12d
  _RTL_BITMAP *v17; // rax
  _RTL_BITMAP *v18; // rcx
  int v19; // r9d
  ULONG i; // edx
  int v21; // r15d
  ULONG NextForwardRunClear; // eax
  ULONG v23; // r14d
  __int64 v24; // rcx
  int v26; // [rsp+20h] [rbp-108h]
  int v27; // [rsp+40h] [rbp-E8h]
  int v28; // [rsp+48h] [rbp-E0h]
  int v29; // [rsp+50h] [rbp-D8h]
  int v30; // [rsp+58h] [rbp-D0h]
  __int64 v31; // [rsp+78h] [rbp-B0h]
  __int128 v32; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE *v33; // [rsp+90h] [rbp-98h]
  _BYTE v34[136]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE *StartingRunIndex; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int8 v37; // [rsp+148h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v32 = 0LL;
  memset(v34, 0, 0x48uLL);
  if ( v3 )
  {
    v6 = 0;
  }
  else
  {
    v3 = v34;
    StartingRunIndex = v34;
    v6 = 1;
  }
  v37 = v6;
  v7 = (_RTL_BITMAP *)sub_1402828F0(
                        256,
                        8 * ((unsigned int)((*(_DWORD *)(a1 + 32) & 0x3F000) != 0) + 2 + (*(_DWORD *)(a1 + 32) >> 18)),
                        0x20206D4Du);
  v8 = v7;
  *(_QWORD *)(a1 + 48) = v7;
  if ( v7 )
  {
    v7->SizeOfBitMap = *(_DWORD *)(a1 + 32) >> 12;
    v7->Buffer = &v7[1].SizeOfBitMap;
    v8 = *(_RTL_BITMAP **)(a1 + 48);
  }
  if ( !v8 )
    return (unsigned int)-1073741670;
  RtlSetAllBits(v8);
  v10 = (ULONG *)(v3 + 16);
  v33 = v3 + 16;
  *(_DWORD *)(a1 + 36) = 16 * *((_DWORD *)v3 + 4);
  if ( !a2 )
  {
    v11 = (_RTL_BITMAP *)sub_1402828F0(64, 8 * (((*v10 & 0x3F) != 0) + 2 + (*v10 >> 6)), 0x20206D4Du);
    *(_QWORD *)(a1 + 40) = v11;
    if ( v11 )
    {
      v11->SizeOfBitMap = *v10;
      v11->Buffer = &v11[1].SizeOfBitMap;
      v11 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( v11 )
    {
      RtlClearAllBits(v11);
      sub_140976EAC(a1, v3);
      v13 = 0LL;
      v14 = (_DWORD *)a2;
      goto LABEL_23;
    }
    return (unsigned int)-1073741670;
  }
  v31 = a2 + *(unsigned int *)(sub_1409C0550(a2) + 24);
  v9 = sub_1409C02BC(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 32), v15, *(_QWORD *)(a1 + 24), *v10, a2, v31, v6);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v16 = *v10;
  if ( !v6 )
  {
    v17 = (_RTL_BITMAP *)sub_1402828F0(64, 8 * ((v16 >> 6) + ((v16 & 0x3F) != 0) + 2), 0x20206D4Du);
    v18 = v17;
    *(_QWORD *)(a1 + 40) = v17;
    if ( v17 )
    {
      v17->SizeOfBitMap = v16;
      v17->Buffer = &v17[1].SizeOfBitMap;
      v18 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( !v18 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v18);
    sub_140976EAC(a1, v3);
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v9 = sub_1405A3818((__int64 *)a1, *(_QWORD *)(a1 + 24), *((unsigned int *)v3 + 5));
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  *(_QWORD *)&v32 = a1;
  *((_QWORD *)&v32 + 1) = v6;
  v14 = (_DWORD *)a2;
  sub_1409C04B8(a2, v31, sub_140976D80, &v32);
  v9 = sub_140972BD4((PRTL_BITMAP *)a1);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v13 = (_DWORD *)v31;
LABEL_23:
  if ( !v6 )
  {
    if ( !(unsigned int)sub_1409C025C(*(_QWORD *)(a1 + 8), v12, *(_QWORD *)(a1 + 24), *((_QWORD *)v3 + 3), *v10) )
      return (unsigned int)-1073740628;
    LOBYTE(StartingRunIndex) = 0;
    sub_1405EF908(
      *(_QWORD *)(a1 + 8),
      v14,
      v13,
      v19,
      v26,
      *(_QWORD *)(a1 + 24),
      *((_QWORD *)v3 + 3),
      *(PRTL_BITMAP *)(a1 + 40),
      v27,
      v28,
      v29,
      v30,
      &StartingRunIndex);
    RtlClearAllBits(*(PRTL_BITMAP *)(a1 + 40));
    if ( (_BYTE)StartingRunIndex )
      *(_DWORD *)(a1 + 140) |= 1u;
  }
  LODWORD(StartingRunIndex) = 0;
  for ( i = 0; ; i = v23 + v21 )
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 48), i, (PULONG)&StartingRunIndex);
    v23 = NextForwardRunClear;
    if ( !NextForwardRunClear )
      break;
    v21 = (int)StartingRunIndex;
    v9 = sub_1405A3818(
           (__int64 *)a1,
           *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
           NextForwardRunClear);
    if ( v9 < 0 )
      return (unsigned int)v9;
    LODWORD(StartingRunIndex) = v23 + v21;
  }
  v9 = sub_140976140((_QWORD *)a1);
  if ( v9 >= 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
    *(_QWORD *)(a1 + 72) = v24;
    *(_QWORD *)(a1 + 80) = v24 + *(unsigned int *)(a1 + 32);
    return 0;
  }
  return (unsigned int)v9;
}
