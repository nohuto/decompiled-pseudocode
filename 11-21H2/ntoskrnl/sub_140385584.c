/*
 * XREFs of sub_140385584 @ 0x140385584
 * Callers:
 *     sub_14037DD88 @ 0x14037DD88 (sub_14037DD88.c)
 * Callees:
 *     sub_14023CB68 @ 0x14023CB68 (sub_14023CB68.c)
 *     sub_140247F34 @ 0x140247F34 (sub_140247F34.c)
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_1403856F4 @ 0x1403856F4 (sub_1403856F4.c)
 *     sub_140385FB0 @ 0x140385FB0 (sub_140385FB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140385584(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rcx
  ULONG_PTR v16[22]; // [rsp+48h] [rbp-69h] BYREF
  int v17; // [rsp+120h] [rbp+6Fh] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)CurrentThread + 345);
  if ( a2 )
    v6 = v5 & 0xFFFFFFF3 | 8;
  else
    v6 = v5 & 0xFFFFFFF3 | 4;
  *((_DWORD *)CurrentThread + 345) = v6;
  sub_140319F70(
    (__int64)v16,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(unsigned int *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v7 = (_QWORD *)v16[7];
  do
  {
    *v7 = -1LL;
    v8 = sub_140247F34((__int64)v16);
    v12 = v8;
    if ( v8 == -1073741801 )
      break;
    if ( v8 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v8, v16[1], BugCheckParameter4);
    v13 = 48 * v16[17] - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v17, v9, v10, v11);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = -1073740749;
      break;
    }
    sub_14028C14C(v13, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v14 = v16[7];
    v16[1] += 4096LL;
    *(_QWORD *)v16[7] = v16[17];
    v7 = (_QWORD *)(v14 + 8);
    v16[7] = (ULONG_PTR)v7;
    v16[3] += 8LL;
  }
  while ( v16[3] <= v16[4] );
  sub_14023CB68((__int64)v16);
  if ( v12 < 0 )
    sub_140385FB0(BugCheckParameter4);
  else
    sub_1403856F4(BugCheckParameter4);
  *((_DWORD *)CurrentThread + 345) &= 0xFFFFFFF3;
  return (unsigned int)v12;
}
