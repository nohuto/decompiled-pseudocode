/*
 * XREFs of sub_1C001FA9C @ 0x1C001FA9C
 * Callers:
 *     sub_1C001E620 @ 0x1C001E620 (sub_1C001E620.c)
 *     sub_1C001E760 @ 0x1C001E760 (sub_1C001E760.c)
 *     sub_1C001F7CC @ 0x1C001F7CC (sub_1C001F7CC.c)
 *     sub_1C005F2F4 @ 0x1C005F2F4 (sub_1C005F2F4.c)
 *     sub_1C00603D0 @ 0x1C00603D0 (sub_1C00603D0.c)
 *     sub_1C0060538 @ 0x1C0060538 (sub_1C0060538.c)
 *     sub_1C0060808 @ 0x1C0060808 (sub_1C0060808.c)
 *     sub_1C00609C4 @ 0x1C00609C4 (sub_1C00609C4.c)
 *     sub_1C00AAB80 @ 0x1C00AAB80 (sub_1C00AAB80.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C001FE60 @ 0x1C001FE60 (sub_1C001FE60.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C001FA9C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        __int64 a6,
        int a7)
{
  __int64 v7; // r14
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  int Status; // edi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 LockArray_high; // rdx
  IRP *v23; // rax
  IRP *v24; // rsi
  __int64 v25; // rcx
  _OWORD v27[3]; // [rsp+20h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 0LL;
  v27[0] = 0LL;
  v14 = sub_1C0007BA4(v12, 2u, *(_BYTE *)(v7 + 442), 0);
  v17 = v14;
  if ( v14 )
  {
    v19 = a7 | 0x102u;
    if ( *(_BYTE *)(v14 + 2) == 40 )
      *(_WORD *)(v14 + 38) = 32;
    else
      *(_BYTE *)(v14 + 9) = 32;
    if ( *(_BYTE *)(v7 + 442) == 1 )
    {
      v20 = *(unsigned int *)(v14 + 52);
      v13 = v14;
      *(_DWORD *)(v14 + 20) = 2;
      *(_DWORD *)(v14 + 24) = v19;
      if ( (unsigned int)sub_1C00230AC(v19, v15) && (unsigned __int8)sub_1C0023100(*(_QWORD *)(a1 + 24)) )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v16 + 6080) + 8 * LockArray_high));
        v21 = **(_QWORD **)(*(_QWORD *)(v16 + 6080) + 8 * LockArray_high);
        *(_DWORD *)(v17 + 44) = HIDWORD(v21);
      }
      else
      {
        LODWORD(v21) = -1;
      }
      *(_DWORD *)(v17 + 32) = v21;
      *(_QWORD *)(v17 + 64) = a3;
      *(_DWORD *)(v17 + 60) = a4;
      *(_QWORD *)(v17 + 80) = a2;
      *(_DWORD *)(v17 + 40) = *(_DWORD *)(a1 + 1320);
      *(_BYTE *)(v20 + v17 + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v20 + v17 + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v20 + v17 + 10) = *(_BYTE *)(a1 + 98);
    }
    else
    {
      *(_BYTE *)(v14 + 2) = 2;
      *(_WORD *)v14 = 88;
      *(_DWORD *)(v14 + 12) = v19;
      *(_BYTE *)(v14 + 8) = -1;
      *(_QWORD *)(v14 + 24) = a3;
      *(_DWORD *)(v14 + 16) = a4;
      *(_QWORD *)(v14 + 48) = a2;
      *(_DWORD *)(v14 + 20) = *(_DWORD *)(a1 + 1320);
      *(_BYTE *)(v14 + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v14 + 6) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v14 + 7) = *(_BYTE *)(a1 + 98);
    }
    v23 = (IRP *)((__int64 (__fastcall *)(_QWORD, __int64, __int64, _OWORD *))sub_1C001FCD0)(
                   *(_QWORD *)(a1 + 8),
                   v17,
                   v16,
                   v27);
    v24 = v23;
    if ( v23 )
    {
      if ( *(_BYTE *)(v7 + 442) == 1 )
      {
        v13 = v17;
        *(_QWORD *)(v17 + 80) = v23;
      }
      else
      {
        *(_QWORD *)(v17 + 48) = v23;
      }
      Status = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v23);
      if ( Status >= 0 )
      {
        Status = v24->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( !a5 || (Status = a5(*(unsigned int *)(a3 + 20)), Status >= 0) )
          {
            LOBYTE(v25) = *(_BYTE *)(v17 + 3);
            Status = sub_1C001FE60(v25);
          }
        }
      }
      sub_1C001FE14(v24);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 442) == 1 )
    {
      if ( !v13 )
        v13 = v17;
      *(_QWORD *)(v13 + 80) = 0LL;
      *(_QWORD *)(v13 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v17 + 48) = 0LL;
      *(_QWORD *)(v17 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v17, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
