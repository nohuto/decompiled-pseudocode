/*
 * XREFs of sub_1402704A0 @ 0x1402704A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140260054 @ 0x140260054 (sub_140260054.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402829A8 @ 0x1402829A8 (sub_1402829A8.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_140590B00 @ 0x140590B00 (sub_140590B00.c)
 */

__int64 __fastcall sub_1402704A0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  char v19; // di
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 *v24; // rbx
  __int64 v25; // r15
  unsigned int v26; // r12d
  unsigned __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rbp
  int v30; // eax
  int v31; // r8d
  __int64 v32; // rdx
  int v33; // eax
  char *v34; // rbx
  __int64 v35; // rdx
  __int64 result; // rax
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rax
  int v40; // r10d
  __int64 v41; // rdx
  int v42; // r9d
  unsigned __int8 v43; // r8
  int v44; // r11d
  int v45; // r11d
  __int64 v46; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+30h] [rbp-78h]
  unsigned __int64 v49; // [rsp+38h] [rbp-70h]
  __int64 v50; // [rsp+40h] [rbp-68h]
  char *v51; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+58h] [rbp-50h]
  char v54; // [rsp+B0h] [rbp+8h]
  __int64 v55; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+18h]
  __int64 v57; // [rsp+C8h] [rbp+20h] BYREF

  v56 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v46 = v5;
  v53 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = v53 << 25 >> 16;
  v7 = (_QWORD *)v53;
  v55 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = (unsigned int)((__int64)(v5 - v53) >> 3) + 1;
  v52 = sub_1402CCC50(992LL, v55);
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C51F48 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &StartContext )
  {
    result = sub_140590B00(*(_QWORD *)(qword_140C51F48 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v55;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v50 = v9 & (v8 >> 9);
  v49 = v9 & (v5 >> 9);
  v47 = v50 + v10;
  v51 = sub_14026DFC0(4);
  v54 = sub_1402CF4F0(v51);
  sub_14031DE00(v51, v47, 0LL);
  if ( v50 != v49 )
    sub_14031DE00(v51, v47 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)sub_1402829A8(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1160));
    if ( (unsigned __int64)sub_1402829A8(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1160));
    else
      v11 = sub_1402829A8(v37);
  }
  v16 = v46;
  do
  {
    v46 = sub_140317A10(v7);
    v17 = ((unsigned __int64)sub_140317A10(&v46) >> 12) & 0xFFFFFFFFFFLL;
    v18 = 48 * v17 - 0x220000000000LL;
    if ( v11 )
      sub_140260054(v11, v15, (__int64)v7);
    v46 = sub_1402E4D28(v17, 31LL);
    v19 = v46;
    v20 = 0;
    v21 = v46;
    if ( (unsigned int)sub_140317A80(v7) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v20 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_9;
        v38 = (v19 & 1) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_9;
        v38 = (v19 & 1) == 0;
      }
      if ( !v38 )
        v21 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v7 = v21;
    if ( v20 )
      sub_1402294F0((__int64)v7, v21);
    sub_140228660(v18, 0);
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v16 );
  v22 = v52;
  if ( v11 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1160));
  v23 = v55;
  v24 = (__int64 *)(v53 - 8);
  v25 = v57;
  v26 = v48;
  while ( 2 )
  {
    if ( (unsigned __int64)v24 >= v23 && (*(_BYTE *)v24 & 1) != 0 )
    {
      v46 = sub_140317A10(v24);
      v27 = ((unsigned __int64)sub_140317A10(&v46) >> 12) & 0xFFFFFFFFFFLL;
      v28 = 48 * v27 - 0x220000000000LL;
      v29 = 48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v55) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v55);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      v30 = sub_140317A80(v24);
      if ( *(_WORD *)(v28 + 32) == 1 )
      {
        v31 = 0;
        v32 = v22;
        if ( !v30 )
          goto LABEL_21;
        if ( (unsigned int)sub_140229550() )
        {
          v31 = v45;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_60;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
LABEL_60:
          if ( ((unsigned __int8)v22 & (unsigned __int8)v45) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *v24 = v32;
        if ( v31 )
          sub_1402294F0((__int64)v24, v32);
        *(_QWORD *)(v28 + 24) |= 0x4000000000000000uLL;
        sub_14033C300(48 * v27 - 0x220000000000LL, 0LL);
LABEL_24:
        v33 = sub_140273FD0(48 * v27 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v33 != 3 )
        {
          LODWORD(v57) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v57);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          sub_140273FD0(v29);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        ++v26;
        v25 -= 4096LL;
        --v24;
        continue;
      }
      v39 = sub_1402E4D28(v27, 31LL);
      v40 = 0;
      v46 = v39;
      v41 = v39;
      if ( v42 )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v40 = v44;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_54;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        {
          goto LABEL_54;
        }
        if ( (v43 & (unsigned __int8)v44) != 0 )
          v41 |= 0x8000000000000000uLL;
      }
LABEL_54:
      *v24 = v41;
      if ( v40 )
        sub_1402294F0((__int64)v24, v41);
      goto LABEL_24;
    }
    break;
  }
  v34 = v51;
  if ( v50 != v49 )
    sub_14020D8D0((__int64)v51, v47 + 8);
  sub_14020D8D0((__int64)v34, v47);
  LOBYTE(v35) = v54;
  sub_1402B0CE0(v34, v35);
  return sub_1402CF280(v56, v25, v26, 0LL);
}
