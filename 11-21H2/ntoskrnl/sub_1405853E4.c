/*
 * XREFs of sub_1405853E4 @ 0x1405853E4
 * Callers:
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     sub_140968160 @ 0x140968160 (sub_140968160.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1405853E4(ULONG_PTR a1, __int64 a2, unsigned int a3, __int64 a4, ULONG_PTR a5)
{
  _QWORD *v7; // rbx
  ULONG_PTR v8; // r14
  __int64 *v9; // r12
  __int64 v10; // r9
  KIRQL v11; // al
  _QWORD *v12; // r13
  unsigned int v13; // r8d
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rsi
  unsigned __int8 v21; // bp
  __int64 v22; // rdi
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  BOOL v30; // edi
  __int64 v32; // [rsp+38h] [rbp-130h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-128h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-120h]
  ULONG_PTR v35; // [rsp+50h] [rbp-118h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-110h]
  _QWORD v37[24]; // [rsp+60h] [rbp-108h] BYREF

  BugCheckParameter2 = a1;
  BugCheckParameter4 = a5;
  memset(v37, 0, 0xB8uLL);
  v7 = (_QWORD *)(a4 + 48);
  v37[3] = 0LL;
  v33 = v7;
  LODWORD(v37[1]) = 20;
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = v8 + 8 * a5;
  v9 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (sub_140317A10((unsigned __int64)v9) & 0x80u) == 0LL )
  {
    v12 = 0LL;
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(&dword_140C53050);
    v12 = (_QWORD *)qword_140C53060;
    v13 = 0;
    v14 = v11;
    v15 = (_QWORD *)qword_140C53060;
    if ( a5 >> 9 != 1 )
    {
      do
      {
        v15 = (_QWORD *)*v15;
        ++v13;
      }
      while ( v13 < (a5 >> 9) - 1 );
    }
    qword_140C53060 = *v15;
    *v15 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53050);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v18 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v18;
          if ( v19 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    v7 = v33;
  }
  v20 = 0LL;
  if ( a2 )
    v21 = sub_1402CF4F0(a2);
  else
    v21 = 17;
  while ( v8 < v35 )
  {
    if ( v21 == 17 )
      goto LABEL_21;
    if ( v20 )
    {
      if ( (v8 & 0xFFF) != 0 )
        goto LABEL_21;
      sub_14020D8D0(a2, v20);
    }
    v20 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(a2, v20, 0LL, v10);
LABEL_21:
    if ( v12 )
    {
      v32 = sub_140317A10((unsigned __int64)v9);
      if ( (v32 & 0x80u) == 0LL
        || *v7 != (((unsigned __int64)sub_140317A10((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFFLL) )
      {
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a3, BugCheckParameter4);
      }
      v22 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      sub_1402285E8((__int64)v37, 1u, (__int64)v9);
      v32 = sub_1402CBD10((unsigned __int64)v9, 0xAAAAAAAAAAAAAAABuLL * ((v22 + 0x220000000000LL) >> 4), -1342177274);
      v23 = sub_1402F2700(v22);
      *(_QWORD *)v22 = 0LL;
      v24 = v23;
      *(_QWORD *)(v22 + 8) = v9;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && v23 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = *((_QWORD *)v26 + 4375);
            v28 = ~(unsigned __int16)(-1LL << (v23 + 1));
            v19 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v19 )
              sub_140418E4C((__int64)v26);
          }
        }
      }
      __writecr8(v24);
      sub_14026EDE4(v9++, v32, 0);
      v29 = 512LL;
    }
    else
    {
      v32 = sub_140317A10(v8);
      if ( (v32 & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a3, BugCheckParameter4);
      sub_1402CF280((__int64)v37, (__int64)(v8 << 25) >> 16, 1LL, 0);
      v30 = 0;
      if ( sub_140317A80(v8) )
        v30 = sub_140229550() != 0;
      *(_QWORD *)v8 = 0LL;
      if ( v30 )
        sub_1402294F0(v8, 0LL);
      v29 = 1LL;
    }
    v7 = &v33[v29];
    v33 = (_QWORD *)((char *)v33 + v29 * 8);
    v8 += v29 * 8;
  }
  sub_14032F1B0((__int64)v37);
  if ( v21 != 17 )
  {
    if ( v20 )
      sub_14020D8D0(a2, v20);
    sub_1402B0CE0(a2, v21);
  }
}
