/*
 * XREFs of sub_1405AAA4C @ 0x1405AAA4C
 * Callers:
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AA4C8 @ 0x1405AA4C8 (sub_1405AA4C8.c)
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     sub_1405AC950 @ 0x1405AC950 (sub_1405AC950.c)
 *     sub_1405AC9A0 @ 0x1405AC9A0 (sub_1405AC9A0.c)
 */

__int64 __fastcall sub_1405AAA4C(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r15
  _QWORD *v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  const signed __int64 *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rbx
  BOOL v20; // eax
  __int64 v21; // rcx
  char v22; // al
  bool v23; // zf
  __int64 result; // rax
  unsigned __int8 v25; // [rsp+20h] [rbp-168h]
  int v26; // [rsp+28h] [rbp-160h]
  int v27; // [rsp+2Ch] [rbp-15Ch]
  __int64 v28; // [rsp+38h] [rbp-150h]
  unsigned __int64 v29; // [rsp+40h] [rbp-148h]
  signed __int64 *v30; // [rsp+48h] [rbp-140h]
  unsigned __int64 v31; // [rsp+50h] [rbp-138h]
  __int64 v33; // [rsp+60h] [rbp-128h]
  unsigned __int64 v34; // [rsp+68h] [rbp-120h]
  unsigned __int64 v35; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  _QWORD v37[24]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a1;
  memset(v37, 0, 0xB8uLL);
  v4 = (__int64 *)(a2 + 48);
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  WORD2(v37[0]) = 0;
  v6 = 0;
  v37[2] = 0LL;
  v7 = 0LL;
  LODWORD(v37[1]) = 20;
  v8 = (_QWORD *)(a2 + 48);
  v37[3] = 0LL;
  v29 = a2 + 48 + 8 * v5;
  LODWORD(v37[0]) = 1;
  CurrentThread = KeGetCurrentThread();
  v31 = *(_QWORD *)(v3 + 16);
  v10 = *((_QWORD *)CurrentThread + 23) + 1664LL;
  v26 = 0;
  v25 = 17;
  if ( (*(_DWORD *)(v3 + 8) & 1) != 0 )
  {
    v27 = 1;
    sub_1405AB9B8(CurrentThread);
  }
  else
  {
    v27 = 0;
  }
  --*((_WORD *)CurrentThread + 243);
  BugCheckParameter2 = v3 + 64;
  ExAcquireAutoExpandPushLockExclusive(v3 + 64, 0LL);
  v11 = *(_QWORD *)(v3 + 24);
  v12 = *(const signed __int64 **)(v3 + 32);
  v35 = v11;
  v30 = (signed __int64 *)v12;
  if ( (unsigned __int64)v4 < v29 )
  {
    v13 = 0xFFFFF68000000000uLL;
    while ( 1 )
    {
      v33 = *v4;
      v14 = *v4;
      v15 = *v4 / v31;
      v34 = v15;
      if ( *v4 % v31 )
        break;
      if ( v15 >= v11 )
        break;
      if ( !_bittest64(v12, v15) )
        break;
      v16 = 48 * v33 - 0x220000000000LL;
      v28 = v16;
      if ( (*(_QWORD *)(v16 + 24) & 0x4000000000000000LL) != 0 )
        break;
      v17 = *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v17 != 1 && (*(_DWORD *)(v3 + 8) & 1) != 0 )
      {
        v18 = *(_QWORD *)(v16 + 8);
        v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v7 != v19 )
        {
          if ( v7 )
          {
            sub_14032F1B0((__int64)v37);
            sub_14020D8D0(v10, v7);
          }
          v7 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v25 == 17 )
            v25 = sub_1402CF4F0(v10);
          sub_14031DE00(v10, v19, 0LL, v13);
        }
        v20 = sub_140317A80(v18) && (unsigned int)sub_140229550();
        *(_QWORD *)v18 = 0LL;
        if ( v20 )
          sub_1402294F0(v18, 0LL);
        sub_1405AC9A0(v7, -1LL, 0xFFFFFFFFLL);
        sub_1402CF280((__int64)v37, (__int64)(v18 << 25) >> 16, 1LL, 0);
        sub_1405AA4C8(v21, v28, (__int64 *)MmBadPointer, 0);
        v16 = v28;
        v3 = a1;
        v14 = v33;
      }
      if ( !sub_1405AA4C8(v17, v16, (__int64 *)MmBadPointer, 1) )
      {
        *v8++ = v14;
        _bittestandreset64(v30, v34);
      }
      v22 = ++v26;
      if ( v25 != 17
        && (v22 & 0x3F) == 0
        && (sub_1403531F0(v10) || (unsigned int)sub_140274C80(v10, v7) || KeShouldYieldProcessor()) )
      {
        sub_14032F1B0((__int64)v37);
        sub_14020D8D0(v10, v7);
        sub_1402B0CE0(v10, v25);
        v7 = 0LL;
        v25 = 17;
      }
      v12 = v30;
      ++v4;
      v11 = v35;
      v13 = 0xFFFFF68000000000uLL;
      if ( (unsigned __int64)v4 >= v29 )
      {
        v6 = 0;
        goto LABEL_36;
      }
    }
    v6 = -1073741800;
LABEL_36:
    if ( v7 )
    {
      sub_14032F1B0((__int64)v37);
      sub_14020D8D0(v10, v7);
      sub_1402B0CE0(v10, v25);
    }
  }
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  v23 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v23 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v27 )
    sub_1405AC950(CurrentThread);
  result = v6;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v8 - a2 - 48) >> 3;
  return result;
}
