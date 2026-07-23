/*
 * XREFs of sub_1407AACC0 @ 0x1407AACC0
 * Callers:
 *     sub_140667F24 @ 0x140667F24 (sub_140667F24.c)
 *     sub_14074E85C @ 0x14074E85C (sub_14074E85C.c)
 *     sub_1407A6CE4 @ 0x1407A6CE4 (sub_1407A6CE4.c)
 *     sub_1407AA950 @ 0x1407AA950 (sub_1407AA950.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406B7650 @ 0x1406B7650 (sub_1406B7650.c)
 *     PsChargeProcessWakeCounter @ 0x1406E1310 (PsChargeProcessWakeCounter.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407A5A90 @ 0x1407A5A90 (sub_1407A5A90.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407A7FBC @ 0x1407A7FBC (sub_1407A7FBC.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407AC020 @ 0x1407AC020 (sub_1407AC020.c)
 *     sub_1407F5160 @ 0x1407F5160 (sub_1407F5160.c)
 *     sub_1407F5358 @ 0x1407F5358 (sub_1407F5358.c)
 *     sub_1407F58C4 @ 0x1407F58C4 (sub_1407F58C4.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 *     sub_1409673F4 @ 0x1409673F4 (sub_1409673F4.c)
 *     sub_140967B4C @ 0x140967B4C (sub_140967B4C.c)
 *     sub_140967BBC @ 0x140967BBC (sub_140967BBC.c)
 *     sub_140967D90 @ 0x140967D90 (sub_140967D90.c)
 */

int __fastcall sub_1407AACC0(__int64 a1)
{
  __int64 v1; // r15
  ULONG_PTR v3; // rsi
  int v4; // ecx
  int v5; // r13d
  __int64 v6; // rbx
  int v7; // r12d
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  BOOL v11; // ebp
  __int64 v12; // rbx
  volatile signed __int32 **v13; // rbp
  __int64 v14; // r13
  int v15; // eax
  char v16; // cl
  int v17; // ebp
  signed __int64 v18; // rcx
  int result; // eax
  int v20; // r9d
  unsigned int v21; // edx
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // r10d
  int v25; // r8d
  __int64 v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  __int64 v29; // r8
  char *v30; // rdx
  __int64 v31; // r9
  int v32; // r8d
  int v33; // eax
  volatile signed __int32 *v34; // rbp
  int v35; // r8d
  unsigned int v36; // edx
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rcx
  volatile signed __int32 **v40; // rax
  __int64 v41; // r9
  void *v42; // rsi
  __int16 v43; // r8
  unsigned int v44; // edx
  int v45; // ecx
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  __int16 v49; // dx
  __int16 v50; // ax
  __int16 v51; // ax
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-88h]
  unsigned int v53; // [rsp+30h] [rbp-78h]
  unsigned int v54; // [rsp+34h] [rbp-74h]
  unsigned int v55; // [rsp+38h] [rbp-70h]
  int v56; // [rsp+3Ch] [rbp-6Ch]
  int v57; // [rsp+40h] [rbp-68h]
  __int64 v58; // [rsp+48h] [rbp-60h]
  __int64 v59; // [rsp+50h] [rbp-58h]
  char v60; // [rsp+B0h] [rbp+8h]
  char v61; // [rsp+B8h] [rbp+10h]
  unsigned int v62; // [rsp+C0h] [rbp+18h]
  int v63; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v61 = 0;
  v5 = v4 & 4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v4 & 0x20000;
  v58 = v6;
  v8 = v4 & 0x800000;
  v57 = v5;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v9 & 0x400000) != 0 )
    v10 = 2;
  else
    v10 = (v9 & 0x200000) != 0;
  v11 = v7 || v8;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v12 = 0LL;
    if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
      v12 = *(_QWORD *)(v1 + 24);
    if ( v12 )
    {
      if ( v11 || v10 || (dword_140D05090 & 1) == 0 )
        *(_QWORD *)(v3 + 208) = PsChargeProcessWakeCounter(v12);
      if ( dword_140D068FC
        && v11
        && (!*((_BYTE *)KeGetCurrentThread() + 512)
         || (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 68) + 632LL) & 0x780) == 0x180
         || (*((_DWORD *)KeGetCurrentThread() + 239) & 0x700) == 0x300) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v12);
      }
    }
    v6 = v58;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      sub_1407AC020(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      sub_1407A4E8C((PVOID)v1, v3);
    ++*(_WORD *)(v3 - 30);
    sub_1406B7650(v1, v3);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    *(_QWORD *)(v3 + 160) = 0LL;
    sub_1407A7628(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 - 16));
    sub_1402AFC00(v6 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    sub_1402AFC00(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v7 && !v5 )
    {
      v46 = *(_QWORD *)(a1 + 40);
      if ( v46 >= 4 )
      {
        result = KeSetEvent((PRKEVENT)(v46 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
        v47 = *(_QWORD *)(a1 + 40);
        if ( (v47 & 2) != 0 )
          result = ObfDereferenceObject((PVOID)(v47 & 0xFFFFFFFFFFFFFFFCuLL));
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v13 = (volatile signed __int32 **)(v1 + 232);
    if ( *v13 == (volatile signed __int32 *)v13 )
      goto LABEL_15;
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    if ( *v13 == (volatile signed __int32 *)v13 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 224);
      sub_1402AFC00(v1 + 224);
LABEL_15:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v60 = 1;
        v56 = 0;
      }
      else
      {
        v60 = 0;
        v56 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v14 = *(_QWORD *)(v1 + 360);
      if ( v14 )
      {
        v20 = *(_DWORD *)(v1 + 416);
        if ( (v20 & 0x10000) != 0 )
        {
          v21 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v3 + 144) )
            v21 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
          v22 = v21 | 0x10000000;
          if ( !*(_QWORD *)(v3 + 152) )
            v22 = v21;
          if ( *(_QWORD *)(v3 + 168) )
            v22 |= 0x2000000u;
          v23 = *(_DWORD *)(v14 + 148);
          if ( (~v23 & v22) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v23 & 0x20000000) != 0) )
          {
            v24 = *(unsigned __int16 *)(v3 + 242);
            v53 = v24;
            if ( v23 )
            {
              v25 = 8;
              if ( (v20 & 0x800) != 0 )
                v25 = 4;
              v26 = (unsigned int)(v25 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
              v27 = v26 ? v25 - v26 : 0;
              v62 = v27;
              v24 += v27 + *(_DWORD *)(v14 + 152);
              v53 = v24;
            }
            else
            {
              v62 = 0;
            }
            v63 = 0;
            if ( (v20 & 0x800) != 0 )
            {
              v24 -= 16;
              v63 = 0x80000000;
              v53 = v24;
            }
            v28 = sub_1407F5160(v1, v24);
            v55 = v28;
            if ( v28 != -1 )
            {
              v29 = *(_QWORD *)(v14 + 120) + v28;
              v59 = v29;
              if ( v63 )
              {
                *(_WORD *)v29 = *(_WORD *)(v3 + 240);
                v48 = *(unsigned __int16 *)(v3 + 240) + 24;
                *(_WORD *)(v29 + 2) = v48;
                v49 = *(_WORD *)(v3 + 246);
                v54 = v48;
                v50 = 0;
                if ( v49 )
                  v50 = v49 - 16;
                *(_WORD *)(v29 + 6) = v50;
                v51 = *(_WORD *)(v3 + 244) | 0x1000;
                *(_WORD *)(v29 + 4) = v51;
                *(_DWORD *)(v29 + 8) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(v29 + 12) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(v29 + 16) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(v29 + 20) = *(_DWORD *)(v3 + 272);
                *(_DWORD *)(v29 + 20) = *(_DWORD *)(v3 + 272);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v29 + 4) = v51 & 0xC00F;
                v30 = (char *)(v29 + 24);
              }
              else
              {
                *(_OWORD *)v29 = *(_OWORD *)(v3 + 240);
                *(_OWORD *)(v29 + 16) = *(_OWORD *)(v3 + 256);
                *(_QWORD *)(v29 + 32) = *(_QWORD *)(v3 + 272);
                if ( _bittest((const signed __int32 *)(v1 + 256), 0xCu) )
                  *(_WORD *)(v29 + 4) = *(_WORD *)(v3 + 244) & 0xC00F;
                v30 = (char *)(v29 + 40);
                v54 = *(unsigned __int16 *)(v3 + 242);
              }
              if ( *(_QWORD *)(v3 + 176) )
                sub_1407F58C4(v3, v30);
              else
                sub_1407A7B20(v3, v30);
              v32 = *(_DWORD *)(v14 + 148);
              if ( v32 )
              {
                BugCheckParameter4 = (_DWORD *)(v59 + v54 + v62);
                *BugCheckParameter4 = v32;
                BugCheckParameter4[1] = 0;
                sub_1407A9220(v1, v63, v3, *(_DWORD *)(v14 + 148), (__int64)BugCheckParameter4);
              }
              v33 = sub_1407F5358(v1, v55);
              if ( v33 )
              {
                v61 = 1;
                *(_DWORD *)(*(_QWORD *)(v14 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(*(_QWORD *)(v14 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
                if ( v60
                  && (v33 & 2) == 0
                  && HIWORD(*(_QWORD *)(*(_QWORD *)(v14 + 80) + 64LL))
                   + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v14 + 144) )
                {
                  v60 = 0;
                }
                if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
                {
                  v43 = *(_WORD *)(v3 + 244);
                  v44 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                  if ( !*(_QWORD *)(v3 + 144) )
                    v44 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                  v45 = v44 | 0x10000000;
                  if ( !*(_QWORD *)(v3 + 152) )
                    v45 = v44;
                  if ( v45 )
                  {
                    *(_WORD *)(v3 + 244) = v43 | 0x2000;
                    ++*(_WORD *)(v3 - 30);
                    sub_1407A7FBC(v1, v3);
                  }
                  else
                  {
                    *(_WORD *)(v3 + 244) = v43 & 0xDFFF;
                  }
                }
                else
                {
                  ++*(_WORD *)(v3 - 30);
                  *(_WORD *)(v3 + 244) |= 0x2000u;
                  sub_1407A7FBC(v1, v3);
                }
LABEL_25:
                if ( byte_140D01161 )
                  sub_140967BBC(v3);
                if ( v61 && byte_140D01161 )
                  sub_140967B4C(v3);
                if ( v7 && byte_140D01161 )
                  sub_140967D90(v3);
                *(_DWORD *)(v3 + 40) &= ~0x8000u;
                if ( dword_140C2A158 )
                  sub_140966A84(v3);
                v16 = *(_BYTE *)(v3 - 32);
                if ( (v16 & 1) != 0
                  && (v17 = 0x10000 - *(__int16 *)(v3 - 30),
                      *(_BYTE *)(v3 - 32) = v16 & 0xFE,
                      *(_WORD *)(v3 - 30) = 0,
                      v17 > 0)
                  && (v18 = -v17 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v17), v18 <= 0) )
                {
                  if ( v18 )
                    KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v18);
                  sub_1407A5A90(v3, 1LL);
                }
                else
                {
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v3 - 16);
                  sub_1402AFC00(v3 - 16);
                }
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
                result = sub_1402AFC00(v58 - 16);
                if ( v56 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  result = sub_1402AFC00(v1 + 352);
                  if ( v7 || v57 )
                  {
                    *(_BYTE *)(a1 + 58) = 0;
                    return result;
                  }
                  sub_14035AD70(*(volatile signed __int32 **)(v1 + 248), 1LL, 1LL, v31, 0);
                }
                else
                {
                  if ( v60 )
                  {
                    if ( v7 || v57 )
                    {
                      *(_BYTE *)(a1 + 58) = 1;
                      *(_BYTE *)(a1 + 59) = v61;
                    }
                    else
                    {
                      sub_14035AB2C((_QWORD *)v1, v61, 1, 0);
                      result = ObfDereferenceObject((PVOID)v1);
                      *(_QWORD *)(a1 + 32) = 0LL;
                    }
                    return result;
                  }
                  v42 = *(void **)(v1 + 368);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  sub_1402AFC00(v1 + 352);
                  if ( v42 )
                    ExNotifyCallback(v42, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                }
                result = ObfDereferenceObject((PVOID)v1);
                *(_QWORD *)(a1 + 32) = 0LL;
                return result;
              }
              sub_1409673F4(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v55 >> 6, (v53 + 63) >> 6);
            }
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        sub_1407AC020(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        sub_1407A4E8C((PVOID)v1, v3);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v15 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v15 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      *(_QWORD *)(v1 + 152) = v3;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 136);
      sub_1402AFC00(v1 + 136);
      goto LABEL_25;
    }
    v34 = *v13;
    if ( *(_QWORD *)(v3 + 176) )
    {
      sub_1407AC020(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      sub_1407A4E8C((PVOID)v1, v3);
    v35 = *(_DWORD *)(v3 + 40);
    if ( (v35 & 0x200) == 0 )
      goto LABEL_130;
    v36 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v36 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v37 = v36 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v37 = v36;
    if ( (v37 & *(v34 - 2)) != 0 )
    {
LABEL_130:
      *(_WORD *)(v3 + 244) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      sub_1407A7FBC(v1, v3);
      v35 = *(_DWORD *)(v3 + 40);
    }
    else
    {
      *(_WORD *)(v3 + 244) &= ~0x2000u;
    }
    ++*(_WORD *)(v3 - 30);
    v38 = byte_140D01161 == 0;
    *(_DWORD *)(v3 + 40) = v35 | 0x2000;
    *((_QWORD *)v34 - 1) = v3;
    if ( !v38 )
      sub_140967BBC(v3);
    v39 = *(_QWORD *)v34;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v34 + 8LL) != v34
      || (v40 = (volatile signed __int32 **)*((_QWORD *)v34 + 1), *v40 != v34) )
    {
      __fastfail(3u);
    }
    *v40 = (volatile signed __int32 *)v39;
    *(_QWORD *)(v39 + 8) = v40;
    *(_QWORD *)v34 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    sub_1407A7628(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
    sub_1402AFC00(v58 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 224);
    sub_1402AFC00(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    sub_1402AFC00(v1 + 352);
    ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v7 || v5 )
    {
      result = (_DWORD)v34 - 1416;
      *(_QWORD *)(a1 + 24) = v34 - 354;
    }
    else
    {
      return sub_14035AD70(v34 - 44, 1LL, 1LL, v41, 2);
    }
  }
  return result;
}
