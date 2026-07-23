/*
 * XREFs of sub_1405875A0 @ 0x1405875A0
 * Callers:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_14058617C @ 0x14058617C (sub_14058617C.c)
 *     sub_1405872B0 @ 0x1405872B0 (sub_1405872B0.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_14096AA38 @ 0x14096AA38 (sub_14096AA38.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_14098194C @ 0x14098194C (sub_14098194C.c)
 * Callees:
 *     sub_1402678C8 @ 0x1402678C8 (sub_1402678C8.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14058727C @ 0x14058727C (sub_14058727C.c)
 *     sub_14058938C @ 0x14058938C (sub_14058938C.c)
 *     sub_140591C4C @ 0x140591C4C (sub_140591C4C.c)
 */

__int64 __fastcall sub_1405875A0(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r14
  _QWORD *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // r10
  unsigned int v16; // r12d
  __int64 v17; // r9
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v26; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  __int64 v31; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v32; // [rsp+28h] [rbp-50h]
  int v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+88h] [rbp+10h]
  char v36; // [rsp+90h] [rbp+18h]
  unsigned int v37; // [rsp+98h] [rbp+20h]

  v3 = a2 & 0x3FFFFF;
  v32 = (unsigned __int64 *)(qword_140C52968 + 8 * v3);
  if ( a1 )
    v6 = a1;
  else
    v6 = (_QWORD *)sub_14058727C((_QWORD *)(qword_140C52968 + 8 * v3));
  v31 = v6[1998];
  v7 = *((unsigned int *)sub_1402C1550(v3 << 18) + 2);
  v8 = sub_1403B76EC(v3 << 18);
  v9 = dword_140C507C0[0];
  v37 = v8;
  v10 = v6[2] + 24512 * v7;
  v34 = dword_140C507C0[0];
  if ( (a3 & 1) != 0 )
  {
    v36 = 17;
  }
  else
  {
    if ( (a3 & 0x20) == 0 )
    {
      result = sub_140591C4C(v10, v3 << 18);
      if ( (_DWORD)result )
        return result;
    }
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 22848));
    v9 = v34;
    v36 = v12;
  }
  v13 = v32;
  v14 = *v32;
  v15 = (*v32 >> 47) & 1;
  v35 = v15;
  if ( (*v32 & 0x1000000000000LL) != 0 )
    a3 = a3 & 0xF5 | 8;
  if ( (a3 & 2) != 0 )
  {
    v16 = 0;
    v17 = v31 + 16LL * v9 * (unsigned int)v7;
LABEL_15:
    v18 = (unsigned __int64 *)(v17 + 8 * (v3 % v9));
    goto LABEL_17;
  }
  if ( (a3 & 8) == 0 )
  {
    v16 = 1;
    v17 = v31 + 8 * (v9 + (unsigned __int64)(2 * v9 * (unsigned int)v7));
    goto LABEL_15;
  }
  v16 = 5;
  v18 = (unsigned __int64 *)(v31 + 8LL * ((unsigned int)v7 + 2 * v9 * (unsigned __int16)word_140D05000));
LABEL_17:
  if ( a1 )
  {
    v14 ^= (v14 ^ ((unsigned __int64)*(unsigned __int16 *)v6 << 49)) & 0xFFE000000000000LL;
    sub_14058938C(v6, a2, 1LL);
    LODWORD(v15) = v35;
    v13 = v32;
  }
  if ( v16 )
  {
    if ( v16 == 1 )
      v19 = v14 & 0xFFFFFFFFFE3FFFFFuLL | 0x800000;
    else
      v19 = v14 & 0xFFFFFFFFFE3FFFFFuLL | 0x1000000;
  }
  else
  {
    v19 = v14 & 0xFFFFFFFFFE3FFFFFuLL | 0x400000;
  }
  v20 = *v18;
  v21 = v19 & 0xFFFF800001FFFFFFuLL;
  v22 = *v18 & 0x3FFFFF;
  if ( v22 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      *v13 = v21 & 0xFFFFFFFFFFC00000uLL | (((v20 >> 25) & 0x3FFFFF) << 25);
      *(_QWORD *)(qword_140C52968 + 8 * ((v20 >> 25) & 0x3FFFFF)) = v3 | *(_QWORD *)(qword_140C52968
                                                                                   + 8 * ((v20 >> 25) & 0x3FFFFF)) & 0xFFFFFFFFFFC00000uLL;
      result = v20 & 0xFFFF800001FFFFFFuLL;
      v24 = v20 & 0xFFFF800001FFFFFFuLL | (v3 << 25);
      goto LABEL_30;
    }
    *v13 = v22 | v21 & 0xFFFFFFFFFFC00000uLL;
    result = *(_QWORD *)(qword_140C52968 + 8 * v22) & 0xFFFF800001FFFFFFuLL;
    *(_QWORD *)(qword_140C52968 + 8 * v22) = result | (v3 << 25);
    v23 = v20 & 0xFFFFFFFFFFC00000uLL;
  }
  else
  {
    *v13 = v21 & 0xFFFFFFFFFFC00000uLL;
    result = v3 << 25;
    v23 = (v3 << 25) | v20 & 0xFFFF800001C00000uLL;
  }
  v24 = v3 | v23;
LABEL_30:
  *v18 = v24;
  if ( v16 != 5 )
  {
    result = v37;
    ++*(_QWORD *)(v10 + 8 * (v37 + 4LL * v16) + 22648);
    ++v6[1999];
    if ( v16 == 1 && !(_DWORD)v15 )
      result = sub_1402678C8((__int64)v6, v10, 1);
  }
  if ( (a3 & 1) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 22848));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v26 = v36;
      if ( (unsigned __int8)v36 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        v29 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v30 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v26 = v36;
    }
    result = v26;
    __writecr8(v26);
  }
  return result;
}
