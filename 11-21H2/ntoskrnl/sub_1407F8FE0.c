/*
 * XREFs of sub_1407F8FE0 @ 0x1407F8FE0
 * Callers:
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 * Callees:
 *     sub_14020D740 @ 0x14020D740 (sub_14020D740.c)
 *     sub_1402233C0 @ 0x1402233C0 (sub_1402233C0.c)
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_14025C33C @ 0x14025C33C (sub_14025C33C.c)
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     KeQueryMaximumGroupCount @ 0x1402F5110 (KeQueryMaximumGroupCount.c)
 *     sub_1403128B0 @ 0x1403128B0 (sub_1403128B0.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_140378C44 @ 0x140378C44 (sub_140378C44.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1407F95AC @ 0x1407F95AC (sub_1407F95AC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407F8FE0(__int64 a1)
{
  __int64 *v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r12
  unsigned int v4; // edi
  int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  USHORT MaximumGroupCount; // ax
  __int64 v11; // r15
  USHORT v12; // ax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rdx
  char *v15; // rax
  unsigned __int64 *v16; // r13
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v18; // edx
  unsigned int *v19; // rax
  unsigned __int64 *v20; // rcx
  unsigned int v21; // r8d
  unsigned __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // esi
  unsigned __int64 *v31; // rsi
  int v32; // eax
  unsigned __int64 v33; // rsi
  int v34; // [rsp+30h] [rbp-108h]
  unsigned int v35; // [rsp+34h] [rbp-104h]
  int v36; // [rsp+38h] [rbp-100h]
  unsigned __int64 v37; // [rsp+40h] [rbp-F8h] BYREF
  int v38; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-ECh]
  __int64 *v40; // [rsp+50h] [rbp-E8h]
  __int64 v41; // [rsp+58h] [rbp-E0h]
  int v42; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-D0h]
  PVOID P; // [rsp+70h] [rbp-C8h]
  _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+90h] [rbp-A8h]
  __int64 v47; // [rsp+98h] [rbp-A0h]
  unsigned int *v48; // [rsp+A0h] [rbp-98h]
  _WORD *v49; // [rsp+A8h] [rbp-90h]
  unsigned int *v50; // [rsp+B0h] [rbp-88h]
  unsigned int *v51; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *v52; // [rsp+C0h] [rbp-78h]
  unsigned __int64 *v53; // [rsp+C8h] [rbp-70h]
  __int64 v54; // [rsp+D0h] [rbp-68h]
  _GROUP_AFFINITY v55; // [rsp+E0h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp-48h] BYREF

  v1 = *(__int64 **)a1;
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = 0;
  v6 = **(_QWORD **)a1;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 8);
  v41 = a1;
  Affinity = 0LL;
  v40 = v1;
  PreviousAffinity = 0LL;
  v47 = v3;
  v55 = 0LL;
  v35 = v4;
  v46 = v7;
  v34 = 0;
  v52 = CurrentThread;
  v54 = v6;
  v50 = (unsigned int *)sub_14023FF18(v6, 1u);
  v36 = 0;
  v9 = 0LL;
  v43 = *v50;
  v51 = &v50[4 * v43 + 4];
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v49 = sub_1402828F0(256, 8LL * MaximumGroupCount + 8, 0x6D75534Du);
  v11 = (__int64)v49;
  if ( !v49 )
    return 3221225626LL;
  v12 = KeQueryMaximumGroupCount();
  *v49 = 1;
  *(_DWORD *)(v11 + 4) = 0;
  *(_WORD *)(v11 + 2) = v12;
  memset((void *)(v11 + 8), 0, 8LL * v12);
  sub_14025C33C((__int64)CurrentThread, v11);
  v13 = 0;
  if ( !word_140D05000 )
    goto LABEL_38;
  do
  {
    v14 = *(_QWORD *)(24512LL * v13 + *(_QWORD *)(v6 + 16) + 22608);
    if ( v14 < 0x10 )
      goto LABEL_35;
    v37 = (40 * v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = (char *)sub_1407F95AC(v1, v4, &v37);
    P = v15;
    if ( !v15 )
    {
      v5 = -1073741670;
      break;
    }
    v16 = (unsigned __int64 *)v15;
    v53 = (unsigned __int64 *)&v15[40 * (v37 / 0x28)];
    sub_140378C44(v13, &Affinity, 0LL);
    if ( (unsigned int)KeAndGroupAffinityEx((_WORD *)v11, (__int64)&Affinity, (char *)&v55) )
      Affinity = v55;
    if ( Affinity.Mask )
    {
      if ( v36 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v36 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v18 = 0;
    v39 = 0;
    if ( !(_DWORD)v43 )
      goto LABEL_33;
    v19 = v51;
    v20 = (unsigned __int64 *)(v50 + 6);
    v21 = v43;
    v37 = (unsigned __int64)(v50 + 6);
    v48 = v51;
    while ( 1 )
    {
      if ( *v19 != v13 )
        goto LABEL_29;
      v22 = *v20;
      v23 = *(v20 - 1) - 1;
      v24 = 48 * v23 - 0x220000000000LL;
      if ( *v20 )
        break;
LABEL_24:
      v5 = v34;
LABEL_25:
      if ( v9 )
        v9 = 0LL;
      if ( v5 < 0 )
        goto LABEL_30;
      v19 = v48;
      v18 = v39;
      v21 = v43;
LABEL_29:
      ++v18;
      v19 += 2;
      v20 += 2;
      v39 = v18;
      v48 = v19;
      v37 = (unsigned __int64)v20;
      if ( v18 >= v21 )
        goto LABEL_30;
    }
    while ( 2 )
    {
      if ( v8 && *(_DWORD *)(v8 + 4) || (*((_DWORD *)v52 + 344) & 1) != 0 )
      {
        v20 = (unsigned __int64 *)v37;
        v5 = -1073741248;
        v34 = -1073741248;
        goto LABEL_25;
      }
      v24 += 48LL;
      ++v23;
      while ( 1 )
      {
        v25 = 1LL;
        v26 = *(_BYTE *)(v24 + 34) & 7;
        v42 = 0;
        v38 = v26;
        if ( (*(_QWORD *)(v24 + 40) & 0x10000000000LL) == 0 )
          break;
        v32 = sub_140235D34(v24, &v38, &v42);
        if ( v32 == -1 )
        {
          v26 = v38;
          break;
        }
        v25 = qword_14001C780[v32];
LABEL_50:
        v33 = v25 - (v23 & (v25 - 1));
        if ( v33 >= v22 )
        {
          v1 = v40;
LABEL_23:
          v20 = (unsigned __int64 *)v37;
          goto LABEL_24;
        }
        v23 += v33;
        v24 += 48 * v33;
        v22 -= v33;
      }
      if ( v26 <= 1 )
        goto LABEL_50;
      v1 = v40;
      if ( !(unsigned int)sub_1403137B0(v40, v35, (__int128 *)v24) )
        goto LABEL_22;
      if ( v9 || (v28 = sub_1402C6260((unsigned __int64 *)(v41 + 208), 3u, 1LL, 0), (v9 = sub_140313C70(v28)) != 0) )
      {
        v29 = v47;
        *(_QWORD *)(v47 + 72) = v9;
        *(_QWORD *)(v29 + 64) = v24;
        if ( (unsigned int)sub_1403128B0((__int64)v1, v29, v35, 0LL, 0) )
        {
          if ( (*(_BYTE *)(v24 + 34) & 7) == 6 )
            ++*(_QWORD *)(v46 + 16);
          else
            ++*(_QWORD *)(v46 + 24);
          v30 = sub_14020D740(v41, v47, 0, v16);
          sub_1402233C0(v47);
          v9 = 0LL;
          if ( v30 )
          {
            v16[1] = v23;
            v16[2] = 0LL;
            v16[4] = 0LL;
            v16 += 5;
            if ( v16 == v53 )
            {
              v31 = (unsigned __int64 *)P;
              sub_1406F2C30(v41, (char *)P, 0xCCCCCCCCCCCCCCCDuLL * (((char *)v16 - (_BYTE *)P) >> 3), v13);
              v16 = v31;
            }
          }
        }
LABEL_22:
        v1 = v40;
        if ( --v22 )
          continue;
        goto LABEL_23;
      }
      break;
    }
    v5 = -1073741670;
    v34 = -1073741670;
LABEL_30:
    if ( v16 != P )
      sub_1406F2C30(v41, (char *)P, 0xCCCCCCCCCCCCCCCDuLL * (((char *)v16 - (_BYTE *)P) >> 3), v13);
    v11 = (__int64)v49;
    v4 = v35;
LABEL_33:
    ExFreePoolWithTag(P, 0);
    if ( v5 < 0 )
      break;
    v6 = v54;
LABEL_35:
    ++v13;
  }
  while ( v13 != (unsigned __int16)word_140D05000 );
  if ( v36 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_38:
  ExFreePoolWithTag((PVOID)v11, 0);
  sub_14023FCF0((__int64)v50);
  return (unsigned int)v5;
}
