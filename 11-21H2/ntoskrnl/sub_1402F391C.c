/*
 * XREFs of sub_1402F391C @ 0x1402F391C
 * Callers:
 *     sub_140238D0C @ 0x140238D0C (sub_140238D0C.c)
 *     sub_14024DA80 @ 0x14024DA80 (sub_14024DA80.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_1402BBAD0 @ 0x1402BBAD0 (sub_1402BBAD0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403DC188 @ 0x1403DC188 (sub_1403DC188.c)
 *     sub_140AF522C @ 0x140AF522C (sub_140AF522C.c)
 *     sub_140B09340 @ 0x140B09340 (sub_140B09340.c)
 * Callees:
 *     sub_14023F108 @ 0x14023F108 (sub_14023F108.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402F3A88 @ 0x1402F3A88 (sub_1402F3A88.c)
 *     sub_1402F3FE0 @ 0x1402F3FE0 (sub_1402F3FE0.c)
 *     sub_1402F411C @ 0x1402F411C (sub_1402F411C.c)
 *     sub_14039D960 @ 0x14039D960 (sub_14039D960.c)
 *     sub_14039E48C @ 0x14039E48C (sub_14039E48C.c)
 *     sub_14039E55C @ 0x14039E55C (sub_14039E55C.c)
 *     sub_1403A35B8 @ 0x1403A35B8 (sub_1403A35B8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F6DE @ 0x14045F6DE (sub_14045F6DE.c)
 *     sub_14054E120 @ 0x14054E120 (sub_14054E120.c)
 *     sub_14063F75C @ 0x14063F75C (sub_14063F75C.c)
 */

__int64 __fastcall sub_1402F391C(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  char v6; // r14
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r10
  __int64 v12; // r9
  unsigned __int8 v13; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // di
  __int64 v20; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax
  char v25[8]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int8 v27; // [rsp+90h] [rbp+50h] BYREF
  char v28; // [rsp+98h] [rbp+58h] BYREF

  v26 = 0LL;
  v28 = 0;
  v4 = a1;
  v25[0] = 0;
  v5 = a1;
  v27 = 0;
  LOBYTE(a1) = 1;
  v6 = 0;
  if ( (unsigned __int8)sub_1402F3FE0(a1, v5, a2, (unsigned int)&v28, (__int64)&v27) )
  {
    sub_1403A35B8(v4);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v13 = v27;
      if ( v27 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = v27;
        v17 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v13 = v27;
    }
    __writecr8(v13);
    v6 = 1;
  }
  v7 = 0;
  if ( !v28 )
  {
    if ( v6 )
      goto LABEL_9;
    if ( byte_140E01840 )
    {
      if ( v4 && v4 != 2 )
      {
LABEL_7:
        sub_1402F411C(a2);
LABEL_8:
        v7 = 1;
        goto LABEL_9;
      }
    }
    else if ( !v4 || (int)v4 > 2 )
    {
      goto LABEL_7;
    }
    sub_14023F108(a2);
    goto LABEL_8;
  }
  sub_14039E48C(v4, &v26, v25);
  v9 = sub_14039E55C(a2);
  LOBYTE(v10) = v25[0];
  LOBYTE(v12) = v11;
  sub_14039D960(v26, v9, v10, v12);
LABEL_9:
  result = sub_1402F3A88(0LL, v4);
  if ( (_BYTE)result )
    result = sub_14054E120();
  if ( !v7 && v4 == 4 )
    result = sub_1402F374C(1);
  if ( byte_140D05002 )
    result = sub_14045F6DE(0LL, 0LL, v4);
  if ( dword_140D01470 )
  {
    v19 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v19 <= 0xFu )
    {
      v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v20 + 20) |= (-1 << (v19 + 1)) & 0xFFFC;
    }
    sub_14063F75C(0LL, 0LL, v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && v19 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          v24 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v18 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v18 )
            sub_140418E4C(v22);
        }
      }
    }
    result = v19;
    __writecr8(v19);
  }
  return result;
}
