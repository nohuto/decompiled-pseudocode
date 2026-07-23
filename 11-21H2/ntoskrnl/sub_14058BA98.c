/*
 * XREFs of sub_14058BA98 @ 0x14058BA98
 * Callers:
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 * Callees:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14058BA98(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int8 v8; // bl
  unsigned int v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // r14
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // rsi
  __int64 v15; // rbx
  int v16; // r12d
  char v17; // dl
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v6 = *(unsigned int *)(BugCheckParameter2 + 44);
  v7 = *(_QWORD *)BugCheckParameter2;
  v8 = 17;
  v33 = *(_QWORD *)BugCheckParameter2;
  v9 = 1;
  v31 = 17;
  v10 = 0LL;
  v34 = v4 + 8 * v6;
  if ( v4 >= v34 )
    return v9;
  while ( (v4 & 0xFFF) == 0 || v8 == 17 )
  {
    if ( v8 != 17 )
    {
      LOBYTE(a2) = v8;
      sub_140334790(v10, a2, a3, a4);
    }
    v10 = sub_140337B00(v4, &v31);
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        LOBYTE(v28) = v31;
        sub_140334790(v10, v28, v29, v30);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      v8 = v31;
      break;
    }
    v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v8 = v31;
LABEL_37:
    if ( v4 >= v34 )
      goto LABEL_41;
  }
  v11 = sub_1402738F0((unsigned __int64 *)v4, 0LL);
  BugCheckParameter4 = sub_140317A10(v4);
  v13 = BugCheckParameter4;
  if ( !v11 )
  {
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v4, BugCheckParameter4);
    v4 += 8LL;
    goto LABEL_37;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    if ( qword_140C50780 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v13 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = ~qword_140C50780 & BugCheckParameter4;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
    v11 = 48 * v14 - 0x220000000000LL;
    if ( (*(_BYTE *)(v11 + 34) & 0x10) == 0 && !*(_WORD *)(v11 + 32) )
    {
      sub_1402206C0(v7, BugCheckParameter2, a3, 2);
      v15 = *(_QWORD *)(v11 + 16);
      v16 = 0;
      if ( sub_140317A80(v4) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v16 = 1;
          if ( HIBYTE(word_140C51864) == v17 )
          {
            v18 = (v15 & 1) == 0;
            goto LABEL_28;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v18 = (v15 & 1) == 0;
LABEL_28:
          if ( !v18 )
            v15 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v4 = v15;
      if ( v16 )
        sub_1402294F0(v4, v15);
      sub_140326870(48 * v14 - 0x220000000000LL, 0);
      sub_1402C6EB0(v14, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v32, v19, v20, v21);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      sub_140273FD0(v10, v19, v20, v21);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v33;
      v4 += 8LL;
      goto LABEL_36;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = v31;
  v9 = 0;
LABEL_41:
  if ( v8 != 17 )
  {
    LOBYTE(a2) = v8;
    sub_140334790(v10, a2, a3, a4);
  }
  if ( !v9 )
  {
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = *((_QWORD *)CurrentPrcb + 4375);
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v18 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
  }
  return v9;
}
