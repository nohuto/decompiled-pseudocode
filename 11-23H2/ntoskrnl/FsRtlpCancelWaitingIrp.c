/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x14053E7D4
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x14053F570 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201C30 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledDeviceUsage @ 0x14040FD14 (Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledDeviceUsage.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // r15d
  ULONG v6; // r14d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  int v10; // edx
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // edx
  int v14; // edx
  char v15; // [rsp+30h] [rbp-198h] BYREF
  char v16; // [rsp+31h] [rbp-197h] BYREF
  int v17; // [rsp+34h] [rbp-194h] BYREF
  int v18; // [rsp+38h] [rbp-190h] BYREF
  int v19; // [rsp+3Ch] [rbp-18Ch] BYREF
  int v20; // [rsp+40h] [rbp-188h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-180h]
  _QWORD v22[2]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v23; // [rsp+60h] [rbp-168h] BYREF
  __int64 v24; // [rsp+68h] [rbp-160h] BYREF
  __int64 v25; // [rsp+70h] [rbp-158h] BYREF
  __int64 v26; // [rsp+78h] [rbp-150h] BYREF
  __int64 v27; // [rsp+80h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp-138h] BYREF
  _QWORD *v29; // [rsp+B0h] [rbp-118h]
  int v30; // [rsp+B8h] [rbp-110h]
  int v31; // [rsp+BCh] [rbp-10Ch]
  int *v32; // [rsp+C0h] [rbp-108h]
  ULONG v33; // [rsp+C8h] [rbp-100h]
  int v34; // [rsp+CCh] [rbp-FCh]
  struct _EVENT_DATA_DESCRIPTOR v35[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 *v36; // [rsp+F0h] [rbp-D8h]
  int v37; // [rsp+F8h] [rbp-D0h]
  int v38; // [rsp+FCh] [rbp-CCh]
  int *v39; // [rsp+100h] [rbp-C8h]
  ULONG v40; // [rsp+108h] [rbp-C0h]
  int v41; // [rsp+10Ch] [rbp-BCh]
  __int64 *v42; // [rsp+110h] [rbp-B8h]
  int v43; // [rsp+118h] [rbp-B0h]
  int v44; // [rsp+11Ch] [rbp-ACh]
  char *v45; // [rsp+120h] [rbp-A8h]
  int v46; // [rsp+128h] [rbp-A0h]
  int v47; // [rsp+12Ch] [rbp-9Ch]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+130h] [rbp-98h] BYREF
  __int64 *v49; // [rsp+150h] [rbp-78h]
  int v50; // [rsp+158h] [rbp-70h]
  int v51; // [rsp+15Ch] [rbp-6Ch]
  int *v52; // [rsp+160h] [rbp-68h]
  ULONG v53; // [rsp+168h] [rbp-60h]
  int v54; // [rsp+16Ch] [rbp-5Ch]
  __int64 *v55; // [rsp+170h] [rbp-58h]
  int v56; // [rsp+178h] [rbp-50h]
  int v57; // [rsp+17Ch] [rbp-4Ch]
  char *v58; // [rsp+180h] [rbp-48h]
  int v59; // [rsp+188h] [rbp-40h]
  int v60; // [rsp+18Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 56);
  v22[1] = v3;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140C03768 > 5 && tlgKeywordOn((__int64)&dword_140C03768, 0LL) )
  {
    v23 = v3;
    v36 = &v23;
    v5 = v4 + 8;
    v37 = v4 + 8;
    v38 &= v4;
    v18 = *(_DWORD *)(v3 + 144);
    v39 = &v18;
    v6 = v4 + 4;
    v40 = v4 + 4;
    v41 &= v4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03768,
      (unsigned __int8 *)&dword_14002A1CC,
      0LL,
      0LL,
      v4 + 4,
      v35);
  }
  else
  {
    v6 = 4;
    v5 = 8;
  }
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  v7 = (_QWORD *)(v3 + 88);
  v8 = *(_QWORD **)(v3 + 88);
  while ( 1 )
  {
    v21 = v8;
    if ( v8 == v7 )
      break;
    v9 = v8;
    if ( (unsigned int)Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledDeviceUsage() )
    {
      if ( !v8[2] )
        goto LABEL_21;
      if ( (unsigned int)dword_140C03768 > 5 && tlgKeywordOn((__int64)&dword_140C03768, 0LL) )
      {
        v24 = v3;
        v36 = &v24;
        v37 = v5;
        v38 &= v10;
        v19 = *(_DWORD *)(v3 + 144);
        v39 = &v19;
        v40 = v6;
        v41 &= v10;
        v25 = v11;
        v42 = &v25;
        v43 = v5;
        v44 &= v10;
        v15 = *(_BYTE *)(v11 + 68);
        v45 = &v15;
        v46 = 1;
        v47 &= v10;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03768,
          (unsigned __int8 *)word_14002A012,
          0LL,
          0LL,
          6u,
          v35);
      }
      v12 = v8[2];
LABEL_19:
      if ( *(_BYTE *)(v12 + 68) )
      {
        v8 = (_QWORD *)v8[1];
        v21 = v8;
        FsRtlpRemoveAndCompleteWaitingIrp(v9);
      }
      goto LABEL_21;
    }
    if ( (unsigned int)dword_140C03768 > 5 && tlgKeywordOn((__int64)&dword_140C03768, 0LL) )
    {
      v26 = v3;
      v49 = &v26;
      v50 = v5;
      v51 &= v13;
      v20 = *(_DWORD *)(v3 + 144);
      v52 = &v20;
      v53 = v6;
      v54 &= v13;
      v27 = v8[2];
      v55 = &v27;
      v56 = v5;
      v57 &= v13;
      v16 = *(_BYTE *)(v27 + 68);
      v58 = &v16;
      v59 = 1;
      v60 &= v13;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03768,
        (unsigned __int8 *)word_140029FAA,
        0LL,
        0LL,
        6u,
        &v48);
    }
    v12 = v8[2];
    if ( v12 )
      goto LABEL_19;
LABEL_21:
    v8 = (_QWORD *)*v8;
    v7 = (_QWORD *)(v3 + 88);
  }
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  if ( (unsigned int)dword_140C03768 > 5 && tlgKeywordOn((__int64)&dword_140C03768, 0LL) )
  {
    v22[0] = v3;
    v29 = v22;
    v30 = v5;
    v31 &= v14;
    v17 = *(_DWORD *)(v3 + 144);
    v32 = &v17;
    v33 = v6;
    v34 &= v14;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03768, (unsigned __int8 *)&word_14002A0D6, 0LL, 0LL, v6, &v28);
  }
}
