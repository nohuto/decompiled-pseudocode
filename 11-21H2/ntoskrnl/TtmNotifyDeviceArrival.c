/*
 * XREFs of TtmNotifyDeviceArrival @ 0x1409A1660
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1409A27A8 @ 0x1409A27A8 (sub_1409A27A8.c)
 *     sub_1409A4B90 @ 0x1409A4B90 (sub_1409A4B90.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A75CC @ 0x1409A75CC (sub_1409A75CC.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  signed __int32 v5; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r14d
  __int64 v16; // r15
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 Pool2; // rax
  _WORD *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v30[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h] BYREF
  int v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v5 = -1;
  v32 = 0LL;
  v8 = a1;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a3 )
  {
    v12 = -1073741811;
    v19 = 386LL;
    goto LABEL_30;
  }
  if ( !*a3 )
  {
    v11 = 374LL;
LABEL_4:
    v12 = -1073741811;
    v13 = 0xFFFFFFFFLL;
    v14 = 3221225485LL;
LABEL_5:
    sub_1409A8628("TtmNotifyDeviceArrival", v11, v13, v14);
    v15 = v33;
    goto LABEL_36;
  }
  if ( a3[3] && a3[2] )
  {
    v11 = 381LL;
    goto LABEL_4;
  }
  v16 = a5;
  if ( a5 )
  {
    v17 = sub_1402E0AC4(*(_WORD **)(a5 + 8), 0x104uLL, v30);
    v12 = v17;
    if ( v17 < 0 )
    {
      v14 = (unsigned int)v17;
      v13 = (unsigned int)v17;
      v11 = 401LL;
      goto LABEL_5;
    }
  }
  v18 = sub_1409A4B90(&v32);
  v12 = v18;
  if ( v18 < 0 )
  {
    sub_1409A8628("TtmNotifyDeviceArrival", 412LL, (unsigned int)v18, (unsigned int)v18);
    v9 = v32;
    goto LABEL_31;
  }
  v9 = v32;
  if ( (unsigned __int8)sub_1409A27A8(v32, v8, a2, 0LL) )
  {
    v12 = -1073741768;
    v19 = 430LL;
LABEL_30:
    sub_1409A8628("TtmNotifyDeviceArrival", v19, 0xFFFFFFFFLL, v12);
    goto LABEL_31;
  }
  v5 = _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
  Pool2 = ExAllocatePool2(256LL, 616LL, 1148023892LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    v21 = (_WORD *)(Pool2 + 76);
    *(_DWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 32) = v5;
    *(_QWORD *)(Pool2 + 40) = *a3;
    *(_QWORD *)(Pool2 + 48) = a3[1];
    *(_QWORD *)(Pool2 + 56) = a3[2];
    v22 = a3[3];
    v15 = v33;
    *(_QWORD *)(v10 + 64) = v22;
    *(_DWORD *)(v10 + 72) = v15;
    v23 = sub_1402E0200(v21, 260LL, *(_QWORD *)(v16 + 8));
    v12 = v23;
    if ( v23 >= 0 )
    {
      if ( *(_DWORD *)(v10 + 16) == 2
        && (v24 = *(_DWORD *)(v10 + 72), v24 <= 0x10)
        && (v25 = 65814, _bittest(&v25, v24)) )
      {
        v26 = 128;
      }
      else
      {
        v26 = 0;
      }
      v27 = *(_DWORD *)(v10 + 600);
      *(_DWORD *)(v10 + 596) = -1;
      v9 = v32;
      *(_DWORD *)(v10 + 600) = v26 | v27 & 0xFFFFFF7F | 1;
      v28 = *(__int64 **)(v9 + 104);
      if ( *v28 != v9 + 96 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = v28;
      *(_QWORD *)v10 = v9 + 96;
      *v28 = v10;
      *(_QWORD *)(v9 + 104) = v10;
      ++*(_DWORD *)(v9 + 116);
      sub_1409A4D70(v9, 1LL);
      v10 = 0LL;
      v12 = 0;
    }
    else
    {
      sub_1409A8628("TtmNotifyDeviceArrival", 474LL, (unsigned int)v23, (unsigned int)v23);
      v9 = v32;
    }
    v8 = a1;
    goto LABEL_32;
  }
  v12 = -1073741670;
  sub_1409A8628("TtmNotifyDeviceArrival", 452LL, 0xFFFFFFFFLL, 3221225626LL);
  v9 = v32;
  v8 = a1;
LABEL_31:
  v15 = v33;
LABEL_32:
  if ( v9 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  if ( v10 )
    ExFreePoolWithTag((PVOID)v10, 0x446D7454u);
LABEL_36:
  sub_1409A75CC(v8, a2, v5, v15, v12);
  return v12;
}
