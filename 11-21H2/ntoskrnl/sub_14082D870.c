/*
 * XREFs of sub_14082D870 @ 0x14082D870
 * Callers:
 *     sub_1406A0140 @ 0x1406A0140 (sub_1406A0140.c)
 *     ntoskrnl_27 @ 0x1406A0430 (ntoskrnl_27.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C5398 @ 0x1403C5398 (sub_1403C5398.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14082DE40 @ 0x14082DE40 (sub_14082DE40.c)
 *     sub_1409FA388 @ 0x1409FA388 (sub_1409FA388.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14082D870(__int64 a1, const UNICODE_STRING *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // r13
  wchar_t *v8; // r12
  int v9; // r9d
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  __int64 (**v12)[9]; // rbx
  size_t v13; // rdx
  __int64 *v14; // rax
  int v15; // edi
  __int64 v16; // r12
  __int64 v17; // r14
  char v18; // al
  __int64 *v19; // r14
  int v20; // ebx
  unsigned int v21; // r12d
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 (**v24)[9]; // r11
  size_t v25; // rdx
  unsigned int v27; // eax
  _WORD *v28; // r10
  __int64 v29; // r8
  __int64 v30; // r11
  unsigned int v31; // eax
  _WORD *v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v36; // r13d
  wchar_t *PoolWithTag; // rax
  unsigned int v38; // r14d
  const wchar_t **v39; // r12
  char v40; // al
  int v41; // eax
  struct _KTHREAD *v42; // rax
  unsigned __int16 v43; // [rsp+6Ah] [rbp-18Eh]
  unsigned __int16 v44; // [rsp+6Ah] [rbp-18Eh]
  unsigned int v45; // [rsp+6Ch] [rbp-18Ch] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-188h]
  __int64 v47; // [rsp+78h] [rbp-180h]
  __int64 v48; // [rsp+80h] [rbp-178h]
  int v49; // [rsp+88h] [rbp-170h]
  __int64 v50; // [rsp+90h] [rbp-168h]
  __int64 v51; // [rsp+98h] [rbp-160h]
  __int64 (**v52)[9]; // [rsp+A0h] [rbp-158h]
  int v53; // [rsp+A8h] [rbp-150h]
  int v54; // [rsp+ACh] [rbp-14Ch] BYREF
  PVOID P; // [rsp+B0h] [rbp-148h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-140h] BYREF
  __int64 *v57; // [rsp+C8h] [rbp-130h]
  __int64 v58; // [rsp+D8h] [rbp-120h]
  __int64 v59; // [rsp+E8h] [rbp-110h]
  const UNICODE_STRING *v60; // [rsp+F0h] [rbp-108h]
  __int64 v61; // [rsp+F8h] [rbp-100h]
  _QWORD v62[7]; // [rsp+108h] [rbp-F0h] BYREF
  _BYTE Buf1[112]; // [rsp+140h] [rbp-B8h] BYREF

  v51 = a4;
  v48 = a3;
  v7 = a1;
  v50 = a1;
  v59 = a1;
  v60 = a2;
  v61 = a3;
  v58 = a4;
  v47 = a6;
  v56 = 0LL;
  v8 = 0LL;
  Str1 = 0LL;
  P = 0LL;
  v54 = 0;
  if ( !a2 || !a6 || !a2->Buffer || a2->Length < 2u )
  {
    v15 = -1073741811;
    goto LABEL_26;
  }
  LOBYTE(v56) = 1;
  *((_QWORD *)&v56 + 1) = a2;
  v53 = sub_14082DE40();
  v57 = 0LL;
  v9 = 1;
  v49 = 1;
  v45 = 0;
  v10 = *((_QWORD *)&v56 + 1);
  v11 = **((_WORD **)&v56 + 1);
  v43 = **((_WORD **)&v56 + 1);
  v52 = &off_140A379D0;
  v12 = &off_140A379D0;
  while ( 1 )
  {
    v13 = *((unsigned __int16 *)v12 + 4);
    if ( v11 != (_WORD)v13 )
    {
      v9 += v13;
      v49 = v9;
      goto LABEL_8;
    }
    v27 = v11 >> 1;
    if ( v27 )
    {
      v28 = Buf1;
      v29 = *(_QWORD *)(v10 + 8) - (_QWORD)Buf1;
      v30 = v27;
      do
      {
        *v28 = *(_WORD *)((char *)v28 + v29) ^ ((v9 + 1) | ((_WORD)v9 << 8) | 0x5555);
        v9 += 2;
        ++v28;
        --v30;
      }
      while ( v30 );
      v49 = v9;
      v7 = v50;
    }
    if ( !memcmp(Buf1, *v12, v13) )
      break;
    v9 = v49;
    v10 = *((_QWORD *)&v56 + 1);
LABEL_8:
    ++v45;
    v12 += 5;
    if ( v45 >= 0xE )
    {
      v14 = 0LL;
      goto LABEL_11;
    }
    v11 = v43;
  }
  v14 = (__int64 *)v12[2];
  v57 = v14;
  LOBYTE(v8) = *((_BYTE *)v12 + 32);
LABEL_11:
  if ( v14 )
  {
    if ( (_BYTE)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx(v7 + 46840, 0LL);
    }
    sub_14042A5E0(v7, v48);
    if ( (_BYTE)v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 46840), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 46840));
      sub_1402AFC00(v7 + 46840);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
  }
  v15 = v53;
  if ( v53 < 0 )
    goto LABEL_25;
  v45 = 0;
  v15 = sub_1403C5398(v7, (__int64)&qword_140A38328, 0LL, (__int64)&v45, 4, (__int64)&v54);
  if ( !qword_140D3B3B8 || !v45 || RtlEqualUnicodeString(a2, &stru_140A38338, 0) )
  {
LABEL_14:
    v16 = v48;
    v17 = v47;
    goto LABEL_15;
  }
  v36 = a2->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v36, 0x20534C53u);
  v8 = PoolWithTag;
  Str1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741801;
    goto LABEL_26;
  }
  memset(PoolWithTag, 0, v36);
  memmove(v8, a2->Buffer, a2->Length);
  v62[0] = L"Security-SPP-GenuineLocalStatus";
  v62[1] = L"Security-SPP-Action-StateData";
  v62[2] = L"Security-SPP-LastWindowsActivationHResult";
  v62[3] = L"Security-SPP-LastWindowsActivationTime";
  v62[4] = L"Kernel-ExpirationDate";
  v62[5] = L"SMR-HostManaged-Enabled";
  v62[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v38 = 0;
  v39 = (const wchar_t **)v62;
  while ( wcsicmp(Str1, *v39) )
  {
    ++v38;
    ++v39;
    if ( v38 >= 7 )
    {
      v40 = 0;
      goto LABEL_61;
    }
  }
  v40 = 1;
LABEL_61:
  if ( v40 )
  {
    v7 = v50;
    goto LABEL_14;
  }
  sub_1409FA388(v50, &P);
  v16 = v48;
  v17 = v47;
  v41 = sub_14042A5E0(P, 0LL);
  if ( (int)(v41 + 0x80000000) < 0 || v41 == -1073741789 )
  {
    v15 = v41;
    if ( !a5 )
      v15 = -1073741789;
    v18 = 0;
    v7 = v50;
  }
  else
  {
    v7 = v50;
LABEL_15:
    v18 = 1;
  }
  if ( v18 )
  {
    v15 = sub_1403C5398(v7, (__int64)&v56, v16, v51, a5, v17);
    if ( v15 == -1073741762 )
    {
      v42 = KeGetCurrentThread();
      --*((_WORD *)v42 + 242);
      ExAcquirePushLockExclusiveEx(v7 + 46840, 0LL);
      *(_BYTE *)(v7 + 46992) = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7 + 46840);
      sub_1402AFC00(v7 + 46840);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
  }
  v19 = 0LL;
  v20 = 1;
  v21 = 0;
  v22 = *((_QWORD *)&v56 + 1);
  v23 = **((_WORD **)&v56 + 1);
  v44 = **((_WORD **)&v56 + 1);
  v24 = &off_140A379D0;
  while ( 2 )
  {
    v25 = *((unsigned __int16 *)v24 + 4);
    if ( v23 != (_WORD)v25 )
    {
      v20 += v25;
LABEL_21:
      ++v21;
      v24 += 5;
      v52 = v24;
      if ( v21 >= 0xE )
        goto LABEL_24;
      v23 = v44;
      continue;
    }
    break;
  }
  v31 = v23 >> 1;
  if ( v31 )
  {
    v32 = Buf1;
    v33 = *(_QWORD *)(v22 + 8) - (_QWORD)Buf1;
    v34 = v31;
    do
    {
      *v32 = *(_WORD *)((char *)v32 + v33) ^ ((v20 + 1) | ((_WORD)v20 << 8) | 0x5555);
      v20 += 2;
      ++v32;
      --v34;
    }
    while ( v34 );
    v7 = v50;
  }
  if ( memcmp(Buf1, *v24, v25) )
  {
    v22 = *((_QWORD *)&v56 + 1);
    v24 = v52;
    goto LABEL_21;
  }
  v19 = (__int64 *)v52[3];
LABEL_24:
  if ( v19 && (v15 >= 0 || v15 == -1073741772 || v15 == -1073741275) )
    sub_14042A5E0(v7, v48);
LABEL_25:
  v8 = Str1;
LABEL_26:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v15;
}
