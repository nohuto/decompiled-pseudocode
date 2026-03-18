/*
 * XREFs of ACPIFanCompletePendingIrps @ 0x1C0003834
 * Callers:
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 */

char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // di
  KIRQL v6; // r14
  _QWORD *v7; // r9
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // rsi
  __int64 v12; // r10
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  IRP *v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  void *v22; // rdx
  __int64 v23; // rax
  void *v24; // rcx
  int Status; // eax
  __int64 v26; // rcx
  __int64 v27; // [rsp+40h] [rbp-28h]
  _QWORD *v28; // [rsp+50h] [rbp-18h] BYREF
  _QWORD **v29; // [rsp+58h] [rbp-10h]

  v29 = &v28;
  v3 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v28 = &v28;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v7 = *(_QWORD **)(a1 + 216);
  while ( 1 )
  {
    v8 = v7;
    v9 = v7;
    if ( v7 == (_QWORD *)(a1 + 216) )
      break;
    v12 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( (*(_DWORD *)(v12 + 24) != 2703936 || a2 || *(_DWORD *)*(v9 - 18) != *(_DWORD *)(a1 + 308))
      && _InterlockedExchange64(v9 - 8, 0LL) )
    {
      if ( *(_DWORD *)(v12 + 24) == 2703936 )
      {
        v13 = *(v9 - 18);
        *(_DWORD *)v13 = *(_DWORD *)(a1 + 308);
        if ( *(_DWORD *)(a1 + 384) == 1 || (v14 = 0, *(_BYTE *)(a1 + 300)) )
          v14 = 1;
        *(_BYTE *)(v13 + 4) = v14;
        *(_DWORD *)(v13 + 8) = *(_DWORD *)(a1 + 304);
        *(v9 - 14) = 12LL;
LABEL_14:
        *((_DWORD *)v9 - 30) = 0;
      }
      else if ( *(_DWORD *)(v12 + 24) == 2703940 )
      {
        v26 = *(v9 - 18);
        *(_DWORD *)v26 = *(_DWORD *)(a1 + 324);
        *(_OWORD *)(v26 + 4) = *(_OWORD *)(a1 + 328);
        *(v9 - 14) = 20LL;
        goto LABEL_14;
      }
      v15 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8
        || (v16 = (_QWORD *)v8[1], (_QWORD *)*v16 != v8)
        || (*v16 = v15, *(_QWORD *)(v15 + 8) = v16, v17 = v29, *v29 != &v28) )
      {
LABEL_30:
        __fastfail(3u);
      }
      v8[1] = v29;
      *v8 = &v28;
      *v17 = v8;
      v29 = (_QWORD **)v8;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v10 = v28;
  while ( v10 != &v28 )
  {
    v18 = (_QWORD *)*v10;
    v19 = (IRP *)(v10 - 21);
    v20 = v10;
    v10 = v18;
    if ( (_QWORD *)v18[1] != v20 )
      goto LABEL_30;
    v21 = (_QWORD *)v20[1];
    if ( (_QWORD *)*v21 != v20 )
      goto LABEL_30;
    *v21 = v18;
    v18[1] = v21;
    v22 = &unk_1C006FB8B;
    v23 = *(_QWORD *)(a1 + 8);
    v24 = &unk_1C006FB8B;
    if ( (v23 & 0x200000000000LL) != 0 )
    {
      v22 = *(void **)(a1 + 608);
      if ( (v23 & 0x400000000000LL) != 0 )
        v24 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Status = v19->IoStatus.Status;
      v27 = (__int64)v22;
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_qLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v22,
        16,
        24,
        (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
        (char)v19,
        Status,
        a1,
        v27,
        (__int64)v24);
    }
    IofCompleteRequest(v19, 0);
    v4 = 1;
  }
  return v4;
}
