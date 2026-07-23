/*
 * XREFs of sub_1406C9FA0 @ 0x1406C9FA0
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_14068038C @ 0x14068038C (sub_14068038C.c)
 *     sub_14068C0C4 @ 0x14068C0C4 (sub_14068C0C4.c)
 *     sub_1406AD650 @ 0x1406AD650 (sub_1406AD650.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_14079B8C0 @ 0x14079B8C0 (sub_14079B8C0.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

__int64 __fastcall sub_1406C9FA0(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // ebx
  int v12; // r8d
  int v13; // edx
  _WORD *v14; // rbx
  _DWORD *v15; // r14
  unsigned __int16 v16; // ax
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // ecx
  PVOID v24; // r15
  __int64 v25; // rsi
  void *v26; // rcx
  void *v28; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+A0h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter3a) = -1;
  v30[0] = 0LL;
  v28 = 0LL;
  sub_1407C97FC(v30);
  P = 0LL;
  ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
  v9 = (unsigned __int16)sub_1406AD650(a3) + 76;
  v10 = sub_14079C8A4(BugCheckParameter3, v9, 0, (unsigned int)&BugCheckParameter3a, (__int64)&v28, (__int64)v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = v10;
    v13 = 196864;
    goto LABEL_3;
  }
  v14 = v28;
  memset(v28, 0, v9);
  *(_DWORD *)v14 = 813934;
  v15 = v28;
  *(_QWORD *)((char *)v28 + 4) = MEMORY[0xFFFFF78000000014];
  v15[4] = -1;
  v15[7] = -1;
  v15[8] = -1;
  v15[10] = -1;
  v15[11] = -1;
  v15[12] = -1;
  v16 = sub_14079B8C0(v15 + 19);
  *((_WORD *)v15 + 36) = v16;
  if ( v16 < *a3 )
    v14[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
  {
    P = (PVOID)sub_140918670(a2 + 32);
    if ( !P )
    {
      v11 = -1073741670;
      v17 = 197120;
LABEL_9:
      v18 = v11;
LABEL_10:
      sub_14068038C(a4, v17, v18);
      goto LABEL_21;
    }
  }
  else
  {
    v19 = sub_1407CE760(
            0,
            *(_QWORD *)(a2 + 64),
            (unsigned int)&P,
            0,
            0,
            1,
            0,
            a2 + 32,
            (__int64)CmKeyObjectType + 76,
            0LL);
    v11 = v19;
    if ( v19 < 0 )
    {
      v18 = v19;
      v17 = 197376;
      goto LABEL_10;
    }
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 1784, 0LL);
  v11 = sub_140657670(
          BugCheckParameter3,
          BugCheckParameter3a,
          (__int64)v15,
          (unsigned int)BugCheckParameter3a >> 31,
          P,
          0,
          v15 + 11);
  sub_140AB4484(BugCheckParameter3);
  if ( v11 < 0 )
  {
    v17 = 197632;
    goto LABEL_9;
  }
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a4 + 48) + 80LL, 0LL);
  sub_1406CA514(*(_QWORD *)(a4 + 48));
  v20 = sub_14068C0C4(*(_QWORD *)(a4 + 48));
  v21 = *(_QWORD *)(a4 + 48);
  v11 = v20;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21 + 80);
  sub_1402AFC00(v21 + 80);
  if ( v11 >= 0 )
  {
    v22 = *(_QWORD *)(BugCheckParameter3 + 64);
    v11 = 0;
    v23 = BugCheckParameter3a;
    LODWORD(BugCheckParameter3a) = -1;
    *(_DWORD *)(v22 + 36) = v23;
    *a5 = v23;
    goto LABEL_20;
  }
  v12 = v11;
  v13 = 197888;
LABEL_3:
  sub_14068038C(a4, v13, v12);
LABEL_20:
  v15 = v28;
LABEL_21:
  v24 = P;
  if ( P )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&P);
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 72);
      v26 = *(void **)(v25 + 48);
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v25 + 48) = v24;
    }
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v30);
    else
      sub_1407C97C0(BugCheckParameter3, v30);
  }
  if ( (_DWORD)BugCheckParameter3a != -1 )
    sub_14079BD98(BugCheckParameter3, (unsigned int)BugCheckParameter3a);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
  sub_1402AFC00(BugCheckParameter3 + 72);
  return (unsigned int)v11;
}
