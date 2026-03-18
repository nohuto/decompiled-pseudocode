/*
 * XREFs of ACPIFanWorker @ 0x1C0055160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDDqss @ 0x1C0002EC8 (WPP_RECORDER_SF_qDDqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIFanSetTripPoints @ 0x1C00AE4E4 (ACPIFanSetTripPoints.c)
 */

int __fastcall ACPIFanWorker(__int64 a1, __int16 a2)
{
  const char *v2; // r11
  const char *v3; // r8
  char v6; // r10
  __int64 v7; // rax
  KIRQL v8; // r11
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // r10
  _QWORD *v13; // rax
  _DWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // r13d
  __int64 v18; // r8
  _QWORD *v19; // rsi
  _QWORD **v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // r15
  _QWORD *v23; // r14
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  const char *v27; // rdx
  const char *v28; // rcx
  __int64 v29; // rax
  __int64 v31; // [rsp+20h] [rbp-78h]
  _QWORD *v32; // [rsp+60h] [rbp-38h] BYREF
  _QWORD **v33; // [rsp+68h] [rbp-30h]
  unsigned int v34; // [rsp+A8h] [rbp+10h]

  v2 = (const char *)&unk_1C006FB8B;
  v3 = (const char *)&unk_1C006FB8B;
  v6 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v6 = a1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(a1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v3 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x20u,
      (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
      a2,
      v6,
      v2,
      v3);
  v33 = &v32;
  v32 = &v32;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( (a2 & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(a1 + 232);
    while ( v9 != (_QWORD *)(a1 + 232) )
    {
      v10 = *v9;
      v11 = v9;
      v12 = v9;
      v9 = (_QWORD *)v10;
      if ( *(_QWORD **)(v10 + 8) != v11 )
        goto LABEL_36;
      v13 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v13 != v11 )
        goto LABEL_36;
      *v13 = v10;
      *(_QWORD *)(v10 + 8) = v13;
      if ( (a2 & 0x200) == 0 )
      {
        v14 = (_DWORD *)*(v12 - 18);
        *(_DWORD *)(a1 + 316) = *v14;
        *(_DWORD *)(a1 + 312) = v14[1];
      }
      v15 = v33;
      if ( *v33 != &v32 )
LABEL_36:
        __fastfail(3u);
      v11[1] = v33;
      *v11 = &v32;
      *v15 = v11;
      v33 = (_QWORD **)v11;
    }
  }
  v16 = *(_DWORD *)(a1 + 312);
  v17 = *(_DWORD *)(a1 + 316);
  v34 = v16;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v8);
  v19 = v32;
  v20 = &v32;
  if ( v32 != &v32 )
  {
    do
    {
      v21 = v19 - 21;
      v22 = v19[2];
      v23 = v19;
      v19 = (_QWORD *)*v19;
      if ( _InterlockedExchange64(v21 + 13, 0LL) )
      {
        if ( *(_DWORD *)(v22 + 24) == 2720328 )
        {
          if ( (a2 & 0x200) != 0 )
          {
            v21[7] = 0LL;
            *((_DWORD *)v21 + 12) = 0;
          }
          else
          {
            v24 = ACPIFanSetTripPoints(a1, *(unsigned int *)v21[3], *(unsigned int *)(v21[3] + 4LL));
            v21[7] = 0LL;
            *((_DWORD *)v21 + 12) = v24;
          }
        }
        v25 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_36;
        v26 = (_QWORD *)v23[1];
        if ( (_QWORD *)*v26 != v23 )
          goto LABEL_36;
        *v26 = v25;
        v27 = (const char *)&unk_1C006FB8B;
        *(_QWORD *)(v25 + 8) = v26;
        v28 = (const char *)&unk_1C006FB8B;
        v29 = *(_QWORD *)(a1 + 8);
        if ( (v29 & 0x200000000000LL) != 0 )
        {
          v27 = *(const char **)(a1 + 608);
          if ( (v29 & 0x400000000000LL) != 0 )
            v28 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (__int64)v27,
            v18,
            0x21u,
            v31,
            (char)v21,
            *(_DWORD *)(v22 + 24),
            *((_DWORD *)v21 + 12),
            a1,
            v27,
            v28);
        IofCompleteRequest((PIRP)v21, 0);
      }
      v20 = &v32;
    }
    while ( v19 != &v32 );
    v16 = v34;
  }
  if ( (a2 & 0x400) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
      return (int)v20;
LABEL_38:
    LODWORD(v20) = KeSetEvent((PRKEVENT)(a1 + 344), 0, 0);
    return (int)v20;
  }
  if ( (a2 & 0x200) != 0 )
    goto LABEL_38;
  LODWORD(v20) = ACPIFanSetTripPoints(a1, v17, v16);
  return (int)v20;
}
