/*
 * XREFs of sub_1402D6330 @ 0x1402D6330
 * Callers:
 *     sub_140752F30 @ 0x140752F30 (sub_140752F30.c)
 * Callees:
 *     sub_140255D5C @ 0x140255D5C (sub_140255D5C.c)
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     PoRequestPowerIrp @ 0x1403A3C60 (PoRequestPowerIrp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405CFAF4 @ 0x1405CFAF4 (sub_1405CFAF4.c)
 *     sub_1405D1B90 @ 0x1405D1B90 (sub_1405D1B90.c)
 *     sub_1405D3148 @ 0x1405D3148 (sub_1405D3148.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 */

__int64 __fastcall sub_1402D6330(int a1, unsigned __int64 a2)
{
  int v2; // esi
  int v3; // ebx
  unsigned __int64 v4; // rdi
  char v5; // r13
  unsigned int v6; // r12d
  KIRQL v7; // al
  __int64 *v8; // r15
  __int64 v9; // rdx
  int v10; // r8d
  __int64 *v12; // rbx
  __int32 v13; // r14d
  unsigned __int32 v14; // esi
  unsigned int v15; // edi
  int v16; // edx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  char v27; // al
  char v28; // al
  int v29; // ecx
  char v30; // [rsp+48h] [rbp-C0h] BYREF
  char v31; // [rsp+49h] [rbp-BFh] BYREF
  int Src; // [rsp+4Ch] [rbp-BCh] BYREF
  KIRQL NewIrql[4]; // [rsp+50h] [rbp-B8h]
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  int v35; // [rsp+58h] [rbp-B0h]
  unsigned int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  int v37; // [rsp+60h] [rbp-A8h]
  unsigned int v38; // [rsp+64h] [rbp-A4h]
  unsigned int v39; // [rsp+68h] [rbp-A0h]
  unsigned int v40; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int32 v41; // [rsp+70h] [rbp-98h] BYREF
  __int32 v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  _QWORD *v44; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  int *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  __int64 v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  __int64 *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  char *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  unsigned __int32 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  __int32 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  char *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]

  v37 = dword_140C232E8;
  v2 = a1;
  v3 = 0;
  v40 = dword_140C232E4;
  v4 = a2;
  v5 = 0;
  v43 = a1;
  v6 = 0;
  v45 = a2;
  Src = 0;
  v38 = *((_DWORD *)qword_140C231B8 + 53);
  v39 = dword_140D06A80;
  v36 = 0;
  v35 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C23068);
  NewIrql[0] = v7;
  if ( byte_140C547FC )
  {
    KeReleaseSpinLock(&qword_140C23068, v7);
  }
  else
  {
    sub_140256CA0(&stru_140037230);
    v8 = (__int64 *)qword_140C23050;
    if ( (__int64 *)qword_140C23050 != &qword_140C23050 )
    {
      do
      {
        v12 = v8 - 4;
        v13 = _InterlockedExchange((volatile __int32 *)v8 - 7, 0);
        *((_DWORD *)v8 - 5) += v13;
        if ( v13 || *((_DWORD *)v12 + 2) )
          *(_DWORD *)v12 = 0;
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v12, dword_140C09830);
        if ( !v14 )
          *((_DWORD *)v12 + 14) = 1;
        if ( v37 == 1 )
          v15 = *((_DWORD *)v12 + 4);
        else
          v15 = *((_DWORD *)v12 + 5);
        v16 = *((_DWORD *)v12 + 12);
        v17 = v14;
        if ( v16 == 1 )
        {
          if ( v15 == -1 )
            v15 = v38;
          v19 = sub_1405CFAF4(v39, v15, v14);
          v15 = v19;
          if ( v19 )
            ++v35;
          v6 = v40;
          if ( v40 > v19 )
            v6 = v19;
          v20 = *((_DWORD *)v12 + 23);
          v17 = dword_140C09830 + *((_DWORD *)v12 + 22);
          if ( v14 )
          {
            if ( v20 <= dword_140C09830 )
              v23 = 0;
            else
              v23 = v20 - dword_140C09830;
          }
          else
          {
            v21 = v20 + dword_140C09830;
            v22 = v6;
            v23 = v6;
            if ( v21 <= v6 )
            {
              v22 = dword_140C09830 + *((_DWORD *)v12 + 22);
              v23 = v21;
            }
            v17 = v22;
          }
          *((_DWORD *)v12 + 23) = v23;
          v16 = *((_DWORD *)v12 + 12);
          *((_DWORD *)v12 + 22) = v17;
        }
        if ( v15 && v17 >= v15 && *((_DWORD *)v12 + 14) == 1 && (v14 || (dword_140C22278 & 0x2000000) != 0) )
        {
          if ( v16 == 1 )
            sub_1405D3148(v12[3]);
          if ( PoRequestPowerIrp(
                 (PDEVICE_OBJECT)v12[3],
                 2u,
                 *(POWER_STATE *)((char *)v12 + 52),
                 CompletionFunction,
                 0LL,
                 0LL) >= 0 )
          {
            *((_DWORD *)v12 + 3) = 0;
            v24 = *((_DWORD *)v12 + 13);
            ++dword_140C547F8;
            *((_DWORD *)v12 + 14) = v24;
          }
        }
        else if ( v16 == 1 && !v14 )
        {
          v5 = 1;
        }
        v42 = v13;
        v41 = v14;
        v31 = 0;
        v30 = 0;
        LOWORD(v34) = 0;
        v44 = 0LL;
        if ( byte_140C5AE14 )
        {
          if ( EtwEventEnabled(RegHandle, &stru_14000E380) )
          {
            v25 = (_QWORD *)sub_14036B86C(v12[3], 1732538192LL);
            v44 = v25;
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25[39] + 40LL);
              if ( v26 )
              {
                LOWORD(v34) = *(_WORD *)(v26 + 40) >> 1;
                v27 = *((_BYTE *)v12 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v12 + 3);
                v30 = v27;
                v28 = *((_BYTE *)v12 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v31 = v28;
                v47 = &v44;
                v49 = &v34;
                v48 = 8LL;
                v50 = 2LL;
                v29 = *(unsigned __int16 *)(v26 + 40);
                v51 = *(_QWORD *)(v26 + 48);
                v54 = v12 + 2;
                v56 = (char *)v12 + 20;
                v58 = &v41;
                v60 = &v42;
                v62 = (char *)v12 + 12;
                v64 = &v30;
                v66 = &v31;
                v52 = v29;
                v65 = 1LL;
                v67 = 1LL;
                v53 = 0;
                v55 = 4LL;
                v57 = 4LL;
                v59 = 4LL;
                v61 = 4LL;
                v63 = 4LL;
                EtwWriteEx(RegHandle, &stru_14000E380, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
                v25 = v44;
              }
              if ( v25 )
                ObfDereferenceObjectWithTag(v25, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v12 + 12) == 1 )
          sub_1405D1B90(v8 - 4, v15, v6);
        v8 = (__int64 *)*v8;
      }
      while ( v8 != &qword_140C23050 );
      v3 = v35;
      v4 = v45;
      v2 = v43;
    }
    sub_140256CA0(&stru_140037240);
    KeReleaseSpinLock(&qword_140C23068, NewIrql[0]);
    v10 = dword_140C23F00;
    if ( dword_140C23F00 )
      v10 = --dword_140C23F00;
    if ( dword_140C23F04 )
      --dword_140C23F04;
    if ( !v2
      || (v9 = (dword_140C09830 + 179) % (unsigned int)dword_140C09830,
          v18 = (dword_140C09830 + 179) / (unsigned int)dword_140C09830,
          v4 == v18) )
    {
      byte_140C4EF00 = 1;
    }
    else if ( v4 < v18 )
    {
      byte_140C4EF00 = 0;
    }
    if ( !v3 || v5 )
    {
      if ( !v10 && !dword_140C232CC )
      {
        sub_140255D5C((__int64)&stru_14000FFA8, v9, 3, &Src, 4u, &v36);
        ++Src;
        sub_1407525EC(&stru_14000FFA8);
        v9 = (dword_140C09830 + 59) % (unsigned int)dword_140C09830;
        dword_140C23F00 = (dword_140C09830 + 59) / (unsigned int)dword_140C09830;
      }
      if ( !dword_140C23F04 && dword_140C226E0 >= 50 && !dword_140C232CC && byte_140C4EF00 )
      {
        sub_140255D5C((__int64)&stru_14000FFF8, v9, 0, &Src, 4u, &v36);
        ++Src;
        sub_14075140C(&stru_14000FFF8, &Src);
        byte_140C4EF00 = 0;
        dword_140C23F04 = (dword_140C09830 + 179) / (unsigned int)dword_140C09830;
      }
    }
  }
  return 0LL;
}
