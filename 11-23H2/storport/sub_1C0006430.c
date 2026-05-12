/*
 * XREFs of sub_1C0006430 @ 0x1C0006430
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 * Callees:
 *     sub_1C00067B0 @ 0x1C00067B0 (sub_1C00067B0.c)
 *     sub_1C0006A3C @ 0x1C0006A3C (sub_1C0006A3C.c)
 *     sub_1C0007318 @ 0x1C0007318 (sub_1C0007318.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0040624 @ 0x1C0040624 (sub_1C0040624.c)
 */

__int64 __fastcall sub_1C0006430(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  LARGE_INTEGER v10; // rbx
  char v12; // cl
  char v14; // r8
  char v15; // dl
  char v16; // r8
  char v17; // r9
  char v18; // al
  char v19; // al
  char v20; // r15
  KIRQL v21; // di
  unsigned __int8 v22; // bl
  bool v24; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  int v26; // r8d
  signed __int64 v27; // r13
  char v28; // cl
  signed __int64 v29; // rbx
  _DWORD *v30; // rcx
  int v31; // edx
  char v32; // al
  int v33; // ecx
  __int128 v34; // rax
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  _BYTE v37[4]; // [rsp+50h] [rbp-49h] BYREF
  int v38; // [rsp+54h] [rbp-45h] BYREF
  int v39; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v41; // [rsp+70h] [rbp-29h]
  _DWORD *v42; // [rsp+78h] [rbp-21h]
  __int128 v43; // [rsp+80h] [rbp-19h] BYREF

  v8 = a2 + 120;
  v41 = a7;
  v10.QuadPart = 0LL;
  v12 = *(_BYTE *)(a2 + 142);
  v42 = a8;
  v38 = 0;
  v37[0] = 0;
  v40[0] = 0LL;
  v24 = (a3 & 2) == 0;
  v14 = v12 | 2;
  v43 = 0LL;
  if ( v24 )
    v14 = v12 & 0xFD;
  v39 = 0;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14 & 0xFB;
  v16 = v15 | 1;
  if ( (a3 & 1) == 0 )
    v16 = v15 & 0xFE;
  v17 = v16 | 8;
  if ( (a3 & 8) == 0 )
    v17 = v16 & 0xF7;
  v18 = v17 | 0x20;
  if ( (a3 & 0x10) == 0 )
    v18 = v17 & 0xDF;
  if ( (a3 & 0x20) != 0 )
    v19 = v18 | 0x40;
  else
    v19 = v18 & 0xBF;
  *(_BYTE *)(v8 + 22) = v19 ^ (v19 ^ (16 * a5)) & 0x10;
  v20 = 0;
  v21 = KfRaiseIrql(2u);
  if ( byte_1C0093A02 < 0 )
  {
    IoGetActivityIdIrp(a2, &v43);
    v20 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( !(unsigned __int8)sub_1C00067B0(a1, v8, 0, (unsigned int)v37, (__int64)v40, (__int64)&v38, (__int64)&v39) )
  {
    if ( byte_1C0093BE8 )
    {
      v24 = byte_1C0093BA0 == 0;
    }
    else
    {
      if ( !dword_1C0093400 )
        goto LABEL_23;
      if ( !byte_1C0093BA0 )
        goto LABEL_51;
      v24 = dword_1C0093404 == 0;
    }
    if ( !v24 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_22:
      v10 = PerformanceCounter;
LABEL_23:
      v40[0] = v10.QuadPart;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      LOBYTE(v26) = 1;
      if ( !(unsigned __int8)sub_1C00067B0(a1, v8, v26, (unsigned int)v37, (__int64)v40, (__int64)&v38, (__int64)&v39) )
      {
        v27 = *(_QWORD *)(a1 + 88);
        if ( (v27 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 80));
          ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 80));
          do
          {
            v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v27 | 1, v27);
            v24 = v27 == v36;
            v27 = v36;
          }
          while ( !v24 && (v36 & 1) == 0 );
        }
        v38 = sub_1C0006A3C(a1, v8);
        if ( v38 )
        {
          sub_1C0007318(a1, v8);
          v28 = 1;
          v34 = *(__int64 *)(a1 + 88);
          v37[0] = 1;
          v39 = (DWORD2(v34) + (unsigned __int64)v34) >> 32;
        }
        else
        {
          v37[0] = 0;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 2uLL);
          v28 = 0;
          if ( (*(_BYTE *)(v8 + 22) & 1) != 0 )
            *(_BYTE *)(a1 + 38) = 1;
        }
        *(_BYTE *)(v8 + 20) = v28 | *(_BYTE *)(v8 + 20) & 0xFE;
        v29 = *(_QWORD *)(a1 + 88);
        if ( (v29 & 1) != 0
          && !*(_DWORD *)(a1 + 28)
          && !*(_DWORD *)(a1 + 16)
          && !*(_DWORD *)(a1 + 32)
          && !*(_BYTE *)(a1 + 37)
          && !*(_BYTE *)(a1 + 39)
          && !*(_BYTE *)(a1 + 36)
          && *(int *)(a1 + 24) <= 0
          && !*(_BYTE *)(a1 + 38) )
        {
          ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
          do
          {
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v29 ^ 1, v29);
            v24 = v29 == v35;
            v29 = v35;
          }
          while ( !v24 && (v35 & 1) != 0 );
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      goto LABEL_16;
    }
LABEL_51:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_22;
  }
LABEL_16:
  v22 = v37[0];
  if ( v37[0] )
  {
    v30 = (_DWORD *)v41;
    v31 = v39;
    *a6 = v40[0];
    v32 = v38;
    *v30 = v38;
    v33 = (int)v42;
    *v42 = v31;
    if ( byte_1C0093A02 < 0 )
      sub_1C0040624(
        v33,
        *(_DWORD *)(a1 + 16) + v31,
        (unsigned int)&v43,
        a1,
        v20,
        3,
        v32,
        *(_BYTE *)(a1 + 16) + v31,
        (__int64)*(unsigned int *)(a1 + 88) >> 1);
  }
  KeLowerIrql(v21);
  return v22;
}
