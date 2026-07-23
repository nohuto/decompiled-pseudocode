/*
 * XREFs of sub_1402F4850 @ 0x1402F4850
 * Callers:
 *     sub_1402AA9B0 @ 0x1402AA9B0 (sub_1402AA9B0.c)
 * Callees:
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 *     sub_140424000 @ 0x140424000 (sub_140424000.c)
 */

__int64 __fastcall sub_1402F4850(ULONG_PTR a1, ULONG_PTR a2, unsigned __int64 a3, char a4, _BYTE *a5)
{
  unsigned __int8 v5; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v7; // r15d
  LARGE_INTEGER *Timeout; // rbx
  __int64 v9; // r12
  unsigned __int8 CurrentIrql; // r13
  _BYTE *v11; // rcx
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // r9d
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  char v19; // si
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // ebx
  struct _KMUTANT *v24; // rbp
  _BYTE *v25; // rcx
  __int64 v26; // r8
  _BYTE *v27; // rcx
  bool v28; // zf
  unsigned __int8 v29; // al
  unsigned __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+18h] BYREF
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  Timeout = 0LL;
  v9 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a5;
  if ( CurrentIrql == 2 )
  {
    Timeout = (LARGE_INTEGER *)&v34;
    if ( a5 )
      v5 = 16;
  }
  if ( (a4 & 8) != 0 && a5 )
    v5 = 16;
  v12 = 0;
  if ( a3 > (unsigned int)dword_140D05050 )
  {
    v5 |= 1u;
    v12 = 1;
    v7 = 1;
    if ( a5 && a5[4] )
      v12 = 5;
  }
  else
  {
    a4 |= 4u;
    v9 = 0LL;
  }
  if ( (v5 & 0xF0) == 0 )
  {
    v13 = v12 | 2;
    if ( (a4 & 2) != 0 )
      v13 = v12;
    v14 = a4 & 4;
    if ( v14 )
      v7 |= 4u;
    v12 = v13 | 0x10;
    if ( !v14 )
      v12 = v13;
    v15 = sub_1402F4B70(
            v12,
            *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)CurrentThread + 147)] + 192) + 138LL),
            CurrentThread);
    if ( v15 )
      goto LABEL_13;
    v11 = a5;
  }
  if ( !v11 || (v5 & 1) != 0 && !v11[4] )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)CurrentThread + 29, 0xFu) )
    v5 |= 4u;
  v24 = (struct _KMUTANT *)(v11 + 8);
  if ( KeWaitForSingleObject(v11 + 8, WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    *((_DWORD *)CurrentThread + 29) ^= (*((_DWORD *)CurrentThread + 29) ^ (v5 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v25 = a5;
  v26 = (unsigned __int8)a5[6];
  if ( (unsigned __int8)v26 >= a5[5] )
  {
    KeReleaseMutant(v24, 1, 0, 0);
    return 3221225495LL;
  }
  v15 = *(_QWORD *)&a5[8 * v26 + 64];
  v5 |= 8u;
  a5[6] = v26 + 1;
  if ( (v5 & 1) == 0 && v25[4] )
  {
    LOBYTE(v12) = 5;
    v9 = 71680LL;
    v5 |= 1u;
  }
LABEL_13:
  *(_QWORD *)(v15 - 80) = v15;
  v16 = v15 - 80;
  if ( (v5 & 1) != 0 )
    v17 = v15 - 73727;
  else
    v17 = v15 - (unsigned int)dword_140D05050 + 1;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(v16 + 16) = *((_QWORD *)CurrentThread + 7);
  *(_QWORD *)(v16 + 40) = *((_QWORD *)CurrentThread + 5);
  *(_QWORD *)(v16 + 72) = 0LL;
  *(_QWORD *)(v16 + 48) = 0LL;
  *(_QWORD *)(v16 + 64) = 0LL;
  *(_QWORD *)(v16 + 56) = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v16 |= 1uLL;
    if ( (v12 & 4) != 0 )
      v16 |= 2uLL;
  }
  v18 = *((_DWORD *)CurrentThread + 29);
  if ( (v18 & 0x1000) != 0 )
  {
    v5 |= 2u;
    v19 = 2;
  }
  else
  {
    *((_DWORD *)CurrentThread + 29) = v18 | 0x1000;
    v19 = 0;
  }
  v31 = 0LL;
  v30 = 0LL;
  v35 = 0;
  v20 = sub_14041FAB0();
  sub_1402AB9C0(v20, &v35, &v31, &v30);
  if ( v35 == 10 )
  {
    __writegsbyte(0x83E6u, 1u);
    v21 = sub_140424000(a2, a1, v16, v9);
    __writegsbyte(0x83E6u, 0);
  }
  else
  {
    v21 = sub_140424000(a2, a1, v16, v9);
  }
  v22 = v21;
  if ( (v5 & 8) != 0 )
  {
    v27 = a5;
    v28 = a5[6]-- == 1;
    if ( v28 && (v5 & 4) == 0 )
      *((_DWORD *)CurrentThread + 29) &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(v27 + 8), 1, 0, 0);
  }
  else
  {
    sub_1402C1900(v15, v7, (__int64)CurrentThread);
  }
  if ( !v19 )
    *((_DWORD *)CurrentThread + 29) &= ~0x1000u;
  if ( KeGetCurrentIrql() != CurrentIrql )
  {
    v29 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, ((CurrentIrql | ((unsigned __int64)v29 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v22;
}
