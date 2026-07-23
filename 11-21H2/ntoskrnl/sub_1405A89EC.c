/*
 * XREFs of sub_1405A89EC @ 0x1405A89EC
 * Callers:
 *     sub_14097A014 @ 0x14097A014 (sub_14097A014.c)
 *     sub_140A6A9A0 @ 0x140A6A9A0 (sub_140A6A9A0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     RtlInterlockedSetClearRun @ 0x1402E28A0 (RtlInterlockedSetClearRun.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056D354 @ 0x14056D354 (sub_14056D354.c)
 *     sub_14056D55C @ 0x14056D55C (sub_14056D55C.c)
 *     sub_14056D598 @ 0x14056D598 (sub_14056D598.c)
 *     sub_14056D650 @ 0x14056D650 (sub_14056D650.c)
 *     sub_14056D68C @ 0x14056D68C (sub_14056D68C.c)
 *     sub_14058CC44 @ 0x14058CC44 (sub_14058CC44.c)
 *     sub_1405A931C @ 0x1405A931C (sub_1405A931C.c)
 */

char __fastcall sub_1405A89EC(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  unsigned __int64 v7; // r13
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 v10; // r9
  unsigned int v11; // eax
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // rdi
  int v14; // r12d
  __int64 v15; // r12
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 *v22; // r15
  __int64 i; // rax
  bool v24; // zf
  __int64 v25; // r9
  int v26; // eax
  int v27; // edi
  _QWORD *v28; // rax
  struct _KTHREAD *v29; // rdi
  unsigned int v30; // r12d
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // edx
  unsigned int v34; // ecx
  volatile signed __int32 *v35; // r9
  __int64 v36; // r10
  int v37; // r15d
  unsigned __int8 v39; // [rsp+30h] [rbp-1A8h]
  int v40; // [rsp+34h] [rbp-1A4h]
  __int64 v41; // [rsp+38h] [rbp-1A0h]
  unsigned int v42; // [rsp+44h] [rbp-194h]
  int v43; // [rsp+48h] [rbp-190h]
  ULONG_PTR v44; // [rsp+50h] [rbp-188h]
  __int64 v47[2]; // [rsp+80h] [rbp-158h] BYREF
  ULONG_PTR v48; // [rsp+90h] [rbp-148h]
  __int64 v49; // [rsp+98h] [rbp-140h]
  __int64 v50; // [rsp+A0h] [rbp-138h]
  __int64 v51; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v52; // [rsp+B0h] [rbp-128h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-120h]
  _QWORD v54[24]; // [rsp+D0h] [rbp-108h] BYREF

  v51 = a2;
  v52 = a3;
  v47[0] = 0LL;
  memset(v54, 0, 0xB8uLL);
  v49 = a2;
  CurrentThread = KeGetCurrentThread();
  v41 = a1 + 1664;
  v7 = 0LL;
  v8 = 0;
  v44 = 0LL;
  v50 = 0LL;
  LODWORD(v54[0]) = 1;
  WORD2(v54[0]) = 0;
  v54[2] = 0LL;
  LODWORD(v54[1]) = 20;
  v54[3] = 0LL;
  v9 = 2;
  v43 = 2;
  v39 = sub_1402CF4F0(a1 + 1664);
  v11 = 0;
  while ( 1 )
  {
    v42 = v11;
    if ( v11 >= v9 )
      break;
    if ( v11 == 2 )
    {
      sub_14056D68C();
      sub_1402CF280((__int64)v54, (__int64)(a3 << 25) >> 16, 1LL, 0);
      sub_14032F1B0((__int64)v54);
    }
    v12 = a3;
    v13 = a3;
    v48 = a3;
    while ( v13 <= a4 )
    {
      if ( (v13 & 0x78) != 0 || v13 == v12 )
        goto LABEL_19;
      v14 = 0;
      if ( sub_1403531F0(v41) || KeShouldYieldProcessor() || v7 && (unsigned int)sub_140274C80(v41, v7) )
        v14 = 1;
      if ( !v14 )
      {
LABEL_19:
        v15 = a1 + 1664;
      }
      else
      {
        if ( v7 )
        {
          sub_14032F1B0((__int64)v54);
          v15 = a1 + 1664;
          sub_14020D8D0(v41, v7);
          v7 = 0LL;
        }
        else
        {
          v15 = a1 + 1664;
        }
        sub_1402B0CE0(v15, v39);
        sub_1402CF4F0(v15);
      }
      if ( v7 )
      {
        if ( (v13 & 0xFFF) != 0 )
          goto LABEL_24;
        sub_14032F1B0((__int64)v54);
        sub_14020D8D0(v15, v7);
      }
      v7 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LOBYTE(v10) = v39;
      sub_14032CE60(v13, 0LL, (*(_DWORD *)(v49 + 48) >> 12) & 0x7F, v10, 0);
LABEL_24:
      v47[0] = sub_140317A10(v13);
      if ( !v47[0] )
        goto LABEL_57;
      v16 = (__int64)(v13 << 25) >> 16;
      v47[1] = v16;
      if ( v42 )
      {
        if ( v42 == 1 )
        {
          v18 = sub_14056D650();
          v40 = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741757 || a5 )
            {
              v26 = 0;
            }
            else
            {
              if ( !v44 )
              {
                while ( 1 )
                {
                  v19 = (*(_DWORD *)(qword_140C533F8 + 8) & 4) != 0LL ? 0x20 : 0;
                  v20 = v19 + *(_DWORD *)qword_140C533F8 - 1;
                  v21 = *(_QWORD *)(qword_140C533F8 + 8) - ((*(_QWORD *)(qword_140C533F8 + 8) & 4LL) != 0 ? 4 : 0);
                  if ( !*(_DWORD *)qword_140C533F8 )
                    goto LABEL_33;
                  v22 = (__int64 *)(v21 + 8 * ((unsigned __int64)v19 >> 6));
                  for ( i = *v22 | ((1LL << v19) - 1); i == -1; i = *v22 )
                  {
                    if ( (unsigned __int64)++v22 > v21 + 8 * ((unsigned __int64)v20 >> 6) )
                      goto LABEL_33;
                  }
                  _BitScanForward64((unsigned __int64 *)&i, ~i);
                  v8 = i + ((unsigned int)(((__int64)v22 - v21) >> 3) << 6);
                  if ( v8 <= v20 )
                  {
                    if ( v8 != -1 )
                      v8 -= v19;
                  }
                  else
                  {
LABEL_33:
                    v8 = -1;
                  }
                  v24 = v8 == -1;
                  if ( v8 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C533F8, v8, 1u) )
                  {
                    v24 = v8 == -1;
                    break;
                  }
                }
                v13 = v48;
                if ( v24 )
                {
                  sub_14032F1B0((__int64)v54);
                  sub_14020D8D0(v41, v7);
                  sub_1402B0CE0(v41, v39);
                  --*((_WORD *)CurrentThread + 243);
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53400, 0LL);
                  v8 = 0;
                  sub_1402CF4F0(v41);
                  LOBYTE(v25) = v39;
                  sub_14032CE60(v13, 0LL, (*(_DWORD *)(v49 + 48) >> 12) & 0x7F, v25, 0);
                }
                v44 = qword_140C533F0 + 8 * v8;
                ++v43;
              }
              sub_14056D354();
              v26 = v40;
            }
            if ( v26 < 0 )
              goto LABEL_56;
          }
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C53408);
            v27 = sub_14056D598(v16, *(_QWORD *)(a2 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C53408);
          }
          while ( v27 == -1073741802 );
          if ( v27 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v16, v27, 0LL);
          v13 = v48;
        }
        sub_1405A931C(v13, 1LL);
      }
      else
      {
        v17 = sub_140317A10((unsigned __int64)v47);
        v47[0] = sub_1402CBD10(v13, (v17 >> 12) & 0xFFFFFFFFFFLL, -1073741820);
        sub_14033DBC0(v13, v47[0]);
      }
LABEL_56:
      sub_1402CF280((__int64)v54, v16, 1LL, 0);
LABEL_57:
      v13 += 8LL;
      v48 = v13;
      v12 = a3;
    }
    sub_14032F1B0((__int64)v54);
    if ( v7 )
    {
      sub_14020D8D0(v41, v7);
      v7 = 0LL;
    }
    v11 = v42 + 1;
    v9 = v43;
  }
  LOBYTE(v28) = sub_1402B0CE0(v41, v39);
  if ( v44 )
  {
    if ( v8 )
    {
      v34 = 1;
      v35 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C533F8 + 8) + 4 * ((unsigned __int64)v8 >> 5));
      v36 = v8 & 0x1F;
      LOBYTE(v28) = v36 + 1;
      if ( (unsigned __int64)(v36 + 1) > 0x20 )
      {
        v37 = v8 & 0x1F;
        if ( v37 )
        {
          LODWORD(v28) = ~(((1 << (32 - v37)) - 1) << v36);
          _InterlockedAnd(v35, (unsigned int)v28);
          v34 = 1 - (32 - v37);
          ++v35;
        }
        if ( v34 >= 0x20 )
        {
          v28 = (_QWORD *)((unsigned __int64)v34 >> 5);
          do
          {
            *v35++ = 0;
            v34 -= 32;
            v28 = (_QWORD *)((char *)v28 - 1);
          }
          while ( v28 );
        }
        if ( v34 )
          _InterlockedAnd(v35, -1 << v34);
      }
      else
      {
        _InterlockedAnd(v35, ~(1 << v36));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53400, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53400);
      v29 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C53400 - qword_140C50630 >= 0x8000000000LL )
        v30 = -1;
      else
        v30 = sub_140287F30(*((_QWORD *)v29 + 23));
      _disable();
      v31 = 0;
      v32 = (__int64)v29 + 1696;
      while ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C53400 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v32 + 18)
           || (*(_DWORD *)v32 & 1) != 0
           || *(_DWORD *)(v32 + 8) != v30 )
      {
        ++v31;
        v32 += 96LL;
        if ( v31 >= 6 )
        {
          v32 = 0LL;
          goto LABEL_75;
        }
      }
      *(_BYTE *)(v32 + 18) = 0;
LABEL_75:
      if ( v32 )
      {
        if ( *(__int64 *)v32 < 0 )
        {
          *(_BYTE *)v32 |= 2u;
          _enable();
          sub_14034EE30(v32);
          _disable();
        }
        v33 = *(_DWORD *)(v32 + 88);
        *(_DWORD *)(v32 + 88) = 0;
        *(_BYTE *)(v32 + 17) = 0;
        *(_QWORD *)v32 = 0LL;
        *((_BYTE *)v29 + 792) |= 1 << *(_BYTE *)(v32 + 16);
        _enable();
        if ( v33 )
          sub_14022B568((ULONG_PTR)v29, (__int64)&qword_140C53400, v33);
      }
      else
      {
        if ( (*((_DWORD *)v29 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v29, (ULONG_PTR)&qword_140C53400, v30, 0LL);
        _enable();
      }
      v28 = CurrentThread;
      v24 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v24 )
      {
        v28 += 19;
        if ( (_QWORD *)*v28 != v28 )
          LOBYTE(v28) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v28;
}
