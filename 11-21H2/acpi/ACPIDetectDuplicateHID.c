/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C0009170
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0008FE0 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v1; // rdx
  __int64 started; // rax
  KIRQL v4; // dl
  _QWORD *v5; // rbx
  int v6; // ebp
  __int64 v7; // r14
  _QWORD *v8; // r12
  ULONG_PTR v9; // rdi
  _QWORD *v10; // r13
  _QWORD **v11; // rsi
  const char *v12; // rcx
  const char *v13; // rdx
  _QWORD **v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r10
  unsigned __int8 *v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  int v20; // edx
  KIRQL v21; // dl
  void *v22; // rax
  void *v23; // rcx
  _UNKNOWN **v24; // rdx
  KIRQL v25; // al
  _QWORD **v26; // rbx
  void *v27; // rax
  void *v28; // rcx
  _UNKNOWN **v29; // rdx
  _QWORD *v30; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v31; // [rsp+58h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-58h]
  __int128 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+78h] [rbp-40h]
  int v35; // [rsp+80h] [rbp-38h]
  int v36; // [rsp+84h] [rbp-34h]
  KIRQL v37; // [rsp+C0h] [rbp+8h]

  v1 = BugCheckParameter2[99];
  v33 = 0LL;
  v36 = 0;
  if ( v1 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v30 = (_QWORD *)(v1 + 800);
    v31 = 0LL;
    SpinLock = &AcpiDeviceTreeLock;
    v34 = 816LL;
    v35 = 2;
    started = ACPIExtListStartEnum(&v30);
    v4 = v33;
    v5 = (_QWORD *)started;
    v6 = v35;
    v7 = v34;
    v8 = v30;
    v9 = *((_QWORD *)&v33 + 1);
    v10 = v31;
    v37 = v33;
    while ( 1 )
    {
      v11 = (_QWORD **)(v7 + v9);
      if ( (_QWORD *)(v7 + v9) == v8 )
      {
        if ( !v6 )
          return;
        goto LABEL_20;
      }
      if ( v6 == 1 )
      {
        ACPIInitReferenceDeviceExtension(v9);
        KeReleaseSpinLock(SpinLock, v21);
        v4 = v37;
      }
      if ( !v5 )
        break;
      if ( v5 != BugCheckParameter2 && (v5[1] & 0xA00000000000LL) != 0 && (v5[1] & 0x2080000000003LL) == 0 )
      {
        v12 = (const char *)v5[76];
        if ( v12 )
        {
          v13 = (const char *)BugCheckParameter2[76];
          if ( v13 && strstr(v12, v13) )
          {
            v15 = v5[1];
            v16 = BugCheckParameter2[1];
            if ( (v15 & 0x1400000000000LL) != 0 && (v16 & 0x1400000000000LL) != 0 )
            {
              v17 = (unsigned __int8 *)v5[77];
              v18 = BugCheckParameter2[77] - (_QWORD)v17;
              do
              {
                v19 = v17[v18];
                v20 = *v17 - v19;
                if ( v20 )
                  break;
                ++v17;
              }
              while ( v19 );
              if ( !v20 )
              {
                v27 = &unk_1C006FB8B;
                v28 = &unk_1C006FB8B;
                if ( (v16 & 0x200000000000LL) != 0 )
                {
                  v27 = (void *)BugCheckParameter2[76];
                  if ( (v16 & 0x400000000000LL) != 0 )
                    v28 = (void *)BugCheckParameter2[77];
                }
                v29 = &WPP_RECORDER_INITIALIZED;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v29) = 2;
                  WPP_RECORDER_SF_qqss(
                    WPP_GLOBAL_Control->DeviceExtension,
                    (_DWORD)v29,
                    22,
                    13,
                    (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                    (char)v5,
                    (char)BugCheckParameter2,
                    (__int64)v27,
                    (__int64)v28);
                }
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
              }
            }
            else if ( ((v16 | v15) & 0x1400000000000LL) == 0 )
            {
              v22 = &unk_1C006FB8B;
              v23 = &unk_1C006FB8B;
              if ( (v16 & 0x200000000000LL) != 0 )
              {
                v22 = (void *)BugCheckParameter2[76];
                if ( (v16 & 0x400000000000LL) != 0 )
                  v23 = (void *)BugCheckParameter2[77];
              }
              v24 = &WPP_RECORDER_INITIALIZED;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v24) = 2;
                WPP_RECORDER_SF_qqss(
                  WPP_GLOBAL_Control->DeviceExtension,
                  (_DWORD)v24,
                  22,
                  14,
                  (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                  (char)v5,
                  (char)BugCheckParameter2,
                  (__int64)v22,
                  (__int64)v23);
              }
              KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
            }
          }
          v4 = v37;
        }
      }
      if ( v6 == 1 )
      {
        v25 = KeAcquireSpinLockRaiseToDpc(SpinLock);
        v26 = (_QWORD **)*v11;
        if ( (_QWORD *)**v11 == *v11 )
        {
          v26 = (_QWORD **)v10;
          v10 = (_QWORD *)*v10;
        }
        else
        {
          v10 = (_QWORD *)**v11;
        }
        KeReleaseSpinLock(SpinLock, v25);
        ACPIInitDereferenceDeviceExtensionUnlocked(v9);
        v5 = (_QWORD **)((char *)v26 - v7);
        v37 = KeAcquireSpinLockRaiseToDpc(SpinLock);
        v4 = v37;
        v9 = (ULONG_PTR)v5;
        if ( (_QWORD *)((char *)v5 + v7) == v8 )
          v5 = 0LL;
      }
      else
      {
        v14 = (_QWORD **)*v11;
        if ( (_QWORD *)**v11 == *v11 )
        {
          v14 = (_QWORD **)v10;
          v10 = (_QWORD *)*v10;
        }
        else
        {
          v10 = (_QWORD *)**v11;
        }
        v9 = (ULONG_PTR)v14 - v7;
        if ( (_QWORD *)(v9 + v7) == v8 )
          v5 = 0LL;
        else
          v5 = (_QWORD *)v9;
      }
    }
    if ( v6 == 2 )
LABEL_20:
      KeReleaseSpinLock(SpinLock, v4);
  }
}
