/*
 * XREFs of sub_140399BC4 @ 0x140399BC4
 * Callers:
 *     sub_140809BEC @ 0x140809BEC (sub_140809BEC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_14036B2A4 @ 0x14036B2A4 (sub_14036B2A4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F16F0 @ 0x1407F16F0 (sub_1407F16F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall sub_140399BC4(PKSPIN_LOCK SpinLock, PVOID *a2, unsigned int *a3)
{
  KSPIN_LOCK v4; // rdi
  unsigned __int64 v7; // r15
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // r13d
  unsigned __int64 v24; // rax
  unsigned int *v25; // rax
  unsigned int v26; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  const EVENT_DESCRIPTOR *v28; // r14
  __int64 *v29; // rcx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int *v32; // r9
  ULONG UserDataCount; // r10d
  _DWORD *v34; // rdx
  const WCHAR *v35; // r8
  const WCHAR *v36; // r9
  const WCHAR *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v43; // r9
  int v44; // eax
  bool v45; // zf
  __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // r11d
  unsigned __int64 v50; // rax
  char *v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  char *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int *v57; // r8
  __int64 v58; // rcx
  unsigned int v59; // edx
  char v61; // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v63; // [rsp+48h] [rbp-B8h] BYREF
  int v64; // [rsp+4Ch] [rbp-B4h] BYREF
  int v65; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v66[3]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v67[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v69[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v70[3]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v71[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v72; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v73[2]; // [rsp+140h] [rbp+40h] BYREF

  v64 = 0;
  v4 = SpinLock[37];
  v61 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( (SpinLock[1] & 2) != 0 )
    sub_14036B2A4((__int64)SpinLock, MEMORY[0xFFFFF78000000008], 2);
  v8 = *((_OWORD *)SpinLock + 3);
  v66[0] = *((_OWORD *)SpinLock + 2);
  v9 = *((_OWORD *)SpinLock + 4);
  v66[1] = v8;
  v10 = *((_OWORD *)SpinLock + 5);
  v66[2] = v9;
  v11 = *((_OWORD *)SpinLock + 6);
  v67[0] = v10;
  v12 = *((_OWORD *)SpinLock + 7);
  v67[1] = v11;
  v13 = *((_OWORD *)SpinLock + 8);
  v68 = v12;
  v14 = *((_OWORD *)SpinLock + 9);
  v69[0] = v13;
  v15 = *((_OWORD *)SpinLock + 10);
  v69[1] = v14;
  v16 = *((_OWORD *)SpinLock + 11);
  v70[0] = v15;
  v17 = *((_OWORD *)SpinLock + 12);
  v70[1] = v16;
  v18 = *((_OWORD *)SpinLock + 13);
  v70[2] = v17;
  v19 = *((_OWORD *)SpinLock + 14);
  v71[0] = v18;
  v20 = *((_OWORD *)SpinLock + 15);
  v71[1] = v19;
  v21 = *((_OWORD *)SpinLock + 16);
  v72 = v20;
  v22 = *((_OWORD *)SpinLock + 17);
  v73[0] = v21;
  v73[1] = v22;
  memset(SpinLock + 4, 0, 0x80uLL);
  memset(SpinLock + 20, 0, 0x80uLL);
  v23 = SpinLock[1] & 4;
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v43 = *((_QWORD *)CurrentPrcb + 4375);
        v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v45 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
        *(_DWORD *)(v43 + 20) &= v44;
        if ( v45 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  v24 = xmmword_140C1C3A0 - 0x44FD8B8ECC99192BLL;
  if ( (_QWORD)xmmword_140C1C3A0 == 0x44FD8B8ECC99192BLL )
    v24 = *((_QWORD *)&xmmword_140C1C3A0 + 1) - 0x294D1B1462EFA9B0LL;
  if ( !v24 && byte_140C1C830 )
  {
    if ( !v23 )
      goto LABEL_11;
    v25 = *(unsigned int **)(v4 + 96);
    if ( !v25 )
      goto LABEL_11;
    v24 = 2LL * *v25;
    if ( v24 > 0xFFFFFFFF )
      return v24;
    v26 = v24 + 10;
    if ( (int)v24 + 10 < (unsigned int)v24 )
      return v24;
    if ( v26 <= 0x14 )
LABEL_11:
      v26 = 20;
    if ( v26 <= *a3 )
      goto LABEL_13;
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, 0x70687373u);
      *a2 = 0LL;
      *a3 = 0;
    }
    v24 = 16LL * v26;
    if ( v24 <= 0xFFFFFFFF )
    {
      v24 = sub_1407F16F0((unsigned int)v24, 1885893491LL);
      *a2 = (PVOID)v24;
      if ( v24 )
      {
        *a3 = v26;
LABEL_13:
        UserData = (struct _EVENT_DATA_DESCRIPTOR *)*a2;
        if ( v23 )
        {
          if ( *(_QWORD *)(v4 + 96) )
          {
            v28 = (const EVENT_DESCRIPTOR *)qword_14003C128;
            v30 = 8;
            v29 = &qword_140C1C3B0;
          }
          else
          {
            v28 = &stru_140011C58;
            v61 = qword_140C1C3B0;
            v29 = (__int64 *)&v61;
            v30 = 1;
          }
          UserData->Ptr = (ULONGLONG)v29;
          UserData->Size = v30;
          UserData->Reserved = 0;
          UserData[1].Ptr = v4 + 48;
          *(_QWORD *)&UserData[1].Size = 16LL;
          v64 = *(unsigned __int16 *)(v4 + 80) >> 1;
          UserData[2].Ptr = (ULONGLONG)&v64;
          *(_QWORD *)&UserData[2].Size = 4LL;
          v31 = *(unsigned __int16 *)(v4 + 80);
          UserData[3].Ptr = *(_QWORD *)(v4 + 88);
          UserData[4].Ptr = v4 + 64;
          UserData[5].Ptr = (ULONGLONG)v66;
          *(_QWORD *)&UserData[3].Size = v31;
          *(_QWORD *)&UserData[4].Size = 16LL;
          *(_QWORD *)&UserData[5].Size = 8LL;
          v32 = *(unsigned int **)(v4 + 96);
          if ( v32 )
          {
            v46 = *v32;
            v47 = v32 + 2;
            *(_QWORD *)&UserData[6].Size = 2LL;
            v48 = 16LL;
            UserData[7].Ptr = (ULONGLONG)(v32 + 2);
            v49 = 0;
            *(_QWORD *)&UserData[7].Size = 4LL;
            v50 = 4 * v46 + 12;
            UserDataCount = 10;
            if ( v50 > 0x10 )
              v48 = v50;
            UserData[6].Ptr = (ULONGLONG)(v32 + 1);
            v51 = (char *)v32 + v48;
            v52 = 2 * *v47;
            UserData[8].Ptr = (ULONGLONG)v51;
            UserData[8].Size = v52;
            UserData[8].Reserved = 0;
            v53 = (unsigned int)*v47;
            UserData[9].Ptr = (ULONGLONG)v32;
            *(_QWORD *)&UserData[9].Size = 4LL;
            v54 = &v51[2 * v53];
            if ( *v32 )
            {
              do
              {
                v55 = v49++;
                v56 = UserDataCount;
                v57 = &v32[v55 + 3];
                UserData[v56].Ptr = (ULONGLONG)v57;
                *(_QWORD *)&UserData[v56].Size = 4LL;
                v58 = UserDataCount + 1;
                v59 = 2 * *v57;
                UserDataCount += 2;
                UserData[v58].Ptr = (ULONGLONG)v54;
                *(_QWORD *)&UserData[v58].Size = v59;
                v54 += 2 * *v57;
              }
              while ( v49 < *v32 );
            }
          }
          else
          {
            UserData[6].Ptr = (ULONGLONG)&qword_140C1C3B0;
            UserDataCount = 7;
            *(_QWORD *)&UserData[6].Size = 8LL;
          }
          EtwWriteEx(qword_140C1C820, v28, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        }
        v34 = *(_DWORD **)(v4 + 104);
        if ( v34 )
        {
          v35 = (const WCHAR *)(v34 + 3);
          v63 = *v34;
          v62 = v34[1];
          v36 = (const WCHAR *)v34 + v63 + 6;
          v38 = v34[2];
          v37 = &v36[v62];
        }
        else
        {
          v35 = &word_140011C40;
          v63 = 0;
          v36 = &word_140011C40;
          v62 = 0;
          v37 = &word_140011C40;
          v38 = 0;
        }
        v65 = v38;
        UserData->Ptr = (ULONGLONG)&qword_140C1C3B0;
        *(_QWORD *)&UserData->Size = 8LL;
        UserData[1].Ptr = v4 + 64;
        UserData[2].Ptr = v4 + 48;
        UserData[3].Ptr = (ULONGLONG)v66;
        UserData[4].Ptr = (ULONGLONG)&v68 + 8;
        UserData[5].Ptr = (ULONGLONG)v66 + 8;
        UserData[6].Ptr = (ULONGLONG)v69 + 12;
        UserData[7].Ptr = (ULONGLONG)v67;
        UserData[8].Ptr = (ULONGLONG)v70;
        UserData[9].Ptr = (ULONGLONG)&v72 + 8;
        UserData[10].Ptr = (ULONGLONG)v70 + 8;
        UserData[11].Ptr = (ULONGLONG)v73 + 12;
        UserData[12].Ptr = (ULONGLONG)v71;
        UserData[13].Ptr = v4 + 40;
        UserData[14].Ptr = (ULONGLONG)&v62;
        *(_QWORD *)&UserData[1].Size = 16LL;
        *(_QWORD *)&UserData[2].Size = 16LL;
        *(_QWORD *)&UserData[3].Size = 8LL;
        *(_QWORD *)&UserData[4].Size = 20LL;
        *(_QWORD *)&UserData[5].Size = 40LL;
        *(_QWORD *)&UserData[6].Size = 20LL;
        *(_QWORD *)&UserData[7].Size = 40LL;
        *(_QWORD *)&UserData[8].Size = 8LL;
        *(_QWORD *)&UserData[9].Size = 20LL;
        *(_QWORD *)&UserData[10].Size = 40LL;
        *(_QWORD *)&UserData[11].Size = 20LL;
        *(_QWORD *)&UserData[12].Size = 40LL;
        *(_QWORD *)&UserData[13].Size = 4LL;
        *(_QWORD *)&UserData[14].Size = 4LL;
        v39 = 2 * v62;
        UserData[15].Ptr = (ULONGLONG)v36;
        UserData[15].Size = v39;
        UserData[15].Reserved = 0;
        UserData[16].Ptr = (ULONGLONG)&v63;
        *(_QWORD *)&UserData[16].Size = 4LL;
        v40 = 2 * v63;
        UserData[17].Ptr = (ULONGLONG)v35;
        UserData[17].Size = v40;
        UserData[17].Reserved = 0;
        UserData[18].Ptr = (ULONGLONG)&v65;
        *(_QWORD *)&UserData[18].Size = 4LL;
        UserData[19].Size = 2 * v65;
        UserData[19].Ptr = (ULONGLONG)v37;
        UserData[19].Reserved = 0;
        LODWORD(v24) = EtwWriteEx(qword_140C1C820, &stru_140011C48, 0LL, 0, 0LL, 0LL, 0x14u, UserData);
      }
    }
  }
  return v24;
}
