/*
 * XREFs of sub_14026B354 @ 0x14026B354
 * Callers:
 *     sub_14024D0D4 @ 0x14024D0D4 (sub_14024D0D4.c)
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 * Callees:
 *     sub_140256F0C @ 0x140256F0C (sub_140256F0C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403D8D00 @ 0x1403D8D00 (sub_1403D8D00.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140598BFC @ 0x140598BFC (sub_140598BFC.c)
 */

unsigned __int64 __fastcall sub_14026B354(__int64 *a1, unsigned int a2, int a3)
{
  int v3; // r13d
  unsigned int v4; // r11d
  __int64 *v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // r8
  signed __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r15
  unsigned __int64 *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  int v32; // r12d
  unsigned __int64 v33; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // r10
  __int64 v39; // rdx
  unsigned __int64 *v40; // r11
  bool v41; // zf
  __int64 v42; // rax
  unsigned int v43; // r10d
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 *v48; // r11
  __int64 v49; // rax
  unsigned int v50; // r10d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r10
  __int64 v57; // rdx
  unsigned int v58; // ecx
  unsigned __int64 *v59; // r9
  unsigned __int64 v60; // r10
  __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned int v63; // r9d
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 *v66; // r9
  unsigned int v67; // r9d
  __int64 v68; // rcx
  __int64 v69; // rax
  bool v70; // sf
  __int64 v71; // rcx
  unsigned int v72; // eax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  bool v75; // sf
  __int64 v76; // rcx
  unsigned int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v84; // r9
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r9
  __int64 v88; // r8
  int v89; // eax
  unsigned __int64 v90; // [rsp+38h] [rbp-69h]
  unsigned __int64 v91; // [rsp+38h] [rbp-69h]
  __int64 *v92; // [rsp+80h] [rbp-21h]
  __int64 v93; // [rsp+88h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-11h] BYREF
  _OWORD v95[5]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 1LL;
  v93 = 1LL;
  v95[0] = 0LL;
  while ( 1 )
  {
    v7 = v5[3];
    v92 = v5;
    v8 = v5;
    if ( v3 == 13 )
    {
      v8 = (__int64 *)v95;
      v92 = (__int64 *)v95;
      v35 = v5[1] + 8 * ((unsigned __int64)v5[2] >> 6);
      v7 = v5[6];
      v36 = -(__int64)((unsigned __int64)v5[5] >> 6);
      *(_QWORD *)&v95[0] = v5[5];
      *((_QWORD *)&v95[0] + 1) = v35 + 8 * v36;
      if ( v4 >= 0x200 )
      {
        if ( dword_140D06880 < 0 )
          v6 = 512LL;
        v93 = v6;
      }
    }
    if ( !*v8 )
      goto LABEL_127;
    v9 = v4;
    if ( v6 == 1 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v7 & -(__int64)(v7 < *v8);
      v13 = *v8 - 1;
      v90 = v12;
      if ( v4 )
      {
        while ( 1 )
        {
          if ( v13 - v12 + 1 < v9 )
            goto LABEL_45;
          v14 = v13 - v9 + 1;
          v15 = (unsigned __int64 *)(v11 + 8 * (v12 >> 6));
          v16 = ((1LL << (v12 & 0x3F)) - 1) | *v15;
          v17 = v11 + 8 * (v14 >> 6);
          if ( v9 > 0x7F )
            break;
          if ( v9 >= 0x40 )
          {
            do
            {
LABEL_134:
              v70 = v16 < 0;
              do
              {
                if ( v70 )
                {
                  if ( (unsigned __int64)++v15 > v17 )
                    goto LABEL_45;
                  v16 = *v15;
                  goto LABEL_134;
                }
                v41 = !_BitScanReverse64((unsigned __int64 *)&v71, v16);
                if ( v41 )
                  v72 = 64;
                else
                  v72 = 63 - v71;
                v19 = (((((__int64)v15 - v11) >> 3) + 1) << 6) - v72;
                if ( v19 > v14 )
                  goto LABEL_45;
                v73 = v9 - v72;
                if ( v9 == v72 )
                  goto LABEL_15;
                v16 = *++v15;
                if ( v73 < 0x40 )
                  goto LABEL_143;
                v70 = v16 < 0;
              }
              while ( v16 );
              v73 -= 64LL;
              if ( !v73 )
                break;
              v16 = *++v15;
LABEL_143:
              v41 = !_BitScanForward64(&v74, v16);
              if ( v41 )
                v74 = 64LL;
            }
            while ( v74 < v73 );
          }
          else
          {
            if ( v9 > 1 )
            {
              v39 = 0LL;
              v40 = (unsigned __int64 *)(v11 + 8 * (v13 >> 6));
              while ( v16 != -1 )
              {
LABEL_52:
                v41 = !_BitScanForward64((unsigned __int64 *)&v42, v16);
                if ( v41 )
                  LODWORD(v42) = 64;
                if ( (unsigned int)(v39 + v42) >= v9 )
                {
                  v46 = -v39;
LABEL_59:
                  v19 = (((__int64)v15 - v11) >> 3 << 6) + v46;
                  goto LABEL_14;
                }
                v43 = a2;
                v44 = ~v16;
                while ( 1 )
                {
                  v44 &= v44 >> (v43 >> 1);
                  if ( !v44 )
                    break;
                  v43 -= v43 >> 1;
                  if ( v43 <= 1 )
                  {
                    _BitScanForward64(&v45, v44);
                    v46 = (unsigned int)v45;
                    goto LABEL_59;
                  }
                }
                if ( v15 == v40 )
                  goto LABEL_45;
                v41 = !_BitScanReverse64((unsigned __int64 *)&v54, v16);
                if ( v41 )
                  v39 = 64LL;
                else
                  v39 = (unsigned int)(63 - v54);
                v16 = *++v15;
              }
              while ( (unsigned __int64)++v15 <= v17 )
              {
                v16 = *v15;
                if ( *v15 != -1LL )
                {
                  v39 = 0LL;
                  goto LABEL_52;
                }
              }
LABEL_45:
              v19 = -1LL;
              goto LABEL_46;
            }
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_45;
              v16 = *v15;
            }
            _BitScanForward64(&v18, ~v16);
            v19 = v18 + (((__int64)v15 - v11) >> 3 << 6);
LABEL_14:
            if ( v19 > v14 )
              goto LABEL_45;
          }
LABEL_15:
          if ( v19 != -1LL )
            goto LABEL_16;
LABEL_46:
          if ( !v90 )
          {
LABEL_16:
            v8 = v92;
            v6 = v93;
            goto LABEL_17;
          }
          LOBYTE(v4) = a2;
          v38 = v9 + v7;
          if ( v9 + v7 > v10 )
            v38 = v10;
          v13 = v38 - 1;
          v12 = 0LL;
          v90 = 0LL;
        }
        v56 = v17 + 8;
        if ( (v14 & 0x3F) == 0 )
          v56 = v11 + 8 * (v14 >> 6);
        if ( v16 )
        {
          if ( !*++v15 )
          {
            v41 = !_BitScanReverse64((unsigned __int64 *)&v69, v16);
            if ( v41 )
              v58 = 64;
            else
              v58 = 63 - v69;
            goto LABEL_96;
          }
          while ( 1 )
          {
            do
            {
LABEL_92:
              if ( (unsigned __int64)v15 > v56 )
                goto LABEL_45;
              ++v15;
            }
            while ( *v15 );
            v41 = !_BitScanReverse64((unsigned __int64 *)&v57, *(v15 - 1));
            if ( v41 )
              v58 = 64;
            else
              v58 = 63 - v57;
LABEL_96:
            v19 = (((__int64)v15 - v11) >> 3 << 6) - v58;
            if ( v19 > v14 )
              goto LABEL_45;
            v59 = &v15[(v9 - v58) >> 6];
            while ( ++v15 != v59 )
            {
              if ( *v15 )
                goto LABEL_92;
            }
            v63 = ((_BYTE)v4 - (_BYTE)v58) & 0x3F;
            if ( (((_BYTE)v4 - (_BYTE)v58) & 0x3F) != 0 )
            {
              v41 = !_BitScanForward64((unsigned __int64 *)&v64, *v15);
              if ( v41 )
                LODWORD(v64) = 64;
              if ( (unsigned int)v64 < v63 )
                continue;
            }
            goto LABEL_15;
          }
        }
        v58 = 0;
        goto LABEL_96;
      }
      v19 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_17:
      v5 = a1;
      v3 = a3;
      v91 = v19;
    }
    else
    {
      v19 = sub_140598BFC(v8, v4, v6);
      v91 = v19;
    }
    if ( v19 == -1LL )
    {
LABEL_127:
      if ( !(unsigned int)sub_1403D8D00((_DWORD)v5, (_DWORD)v8, 0, v3, 0) )
        return 0LL;
      goto LABEL_128;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5 + 8, &LockHandle);
    if ( v6 == 1 )
    {
      v20 = *v8;
      v21 = v91;
      v22 = v8[1];
      v23 = *v8 - 1;
      v24 = v91 & -(__int64)(v91 < *v8);
      if ( v9 )
      {
        while ( v23 - v24 + 1 < v9 )
        {
          v30 = -1LL;
LABEL_177:
          if ( !v24 )
          {
LABEL_31:
            v5 = a1;
            v31 = v30;
            v8 = v92;
            goto LABEL_32;
          }
          v80 = v9 + v21;
          if ( v9 + v21 > v20 )
            v80 = v20;
          v23 = v80 - 1;
          v24 = 0LL;
        }
        v25 = v23 - v9 + 1;
        v26 = (unsigned __int64 *)(v22 + 8 * (v24 >> 6));
        v27 = ((1LL << (v24 & 0x3F)) - 1) | *v26;
        v28 = v22 + 8 * (v25 >> 6);
        if ( v9 > 0x7F )
        {
          v60 = v28 + 8;
          if ( (v25 & 0x3F) == 0 )
            v60 = v22 + 8 * (v25 >> 6);
          if ( v27 )
          {
            if ( *++v26 )
              goto LABEL_112;
            v41 = !_BitScanReverse64((unsigned __int64 *)&v61, v27);
            if ( v41 )
              v62 = 64;
            else
              v62 = 63 - v61;
          }
          else
          {
            v62 = 0;
          }
LABEL_117:
          v30 = (((__int64)v26 - v22) >> 3 << 6) - v62;
          if ( v30 > v25 )
            goto LABEL_74;
          v66 = &v26[(v9 - v62) >> 6];
          while ( ++v26 != v66 )
          {
            if ( *v26 )
              goto LABEL_112;
          }
          v67 = ((_BYTE)a2 - (_BYTE)v62) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v62) & 0x3F) != 0 )
          {
            v41 = !_BitScanForward64((unsigned __int64 *)&v68, *v26);
            if ( v41 )
              LODWORD(v68) = 64;
            if ( (unsigned int)v68 < v67 )
            {
LABEL_112:
              while ( (unsigned __int64)v26 <= v60 )
              {
                if ( !*++v26 )
                {
                  v41 = !_BitScanReverse64((unsigned __int64 *)&v65, *(v26 - 1));
                  if ( v41 )
                    v62 = 64;
                  else
                    v62 = 63 - v65;
                  goto LABEL_117;
                }
              }
              goto LABEL_74;
            }
          }
        }
        else
        {
          if ( v9 < 0x40 )
          {
            if ( v9 > 1 )
            {
              v47 = 0LL;
              v48 = (unsigned __int64 *)(v22 + 8 * (v23 >> 6));
              while ( v27 != -1 )
              {
LABEL_62:
                v41 = !_BitScanForward64((unsigned __int64 *)&v49, v27);
                if ( v41 )
                  LODWORD(v49) = 64;
                if ( (unsigned int)(v47 + v49) >= v9 )
                {
                  v53 = -v47;
LABEL_69:
                  v30 = (((__int64)v26 - v22) >> 3 << 6) + v53;
                  goto LABEL_29;
                }
                v50 = a2;
                v51 = ~v27;
                while ( 1 )
                {
                  v51 &= v51 >> (v50 >> 1);
                  if ( !v51 )
                    break;
                  v50 -= v50 >> 1;
                  if ( v50 <= 1 )
                  {
                    _BitScanForward64(&v52, v51);
                    v53 = (unsigned int)v52;
                    goto LABEL_69;
                  }
                }
                if ( v26 == v48 )
                  goto LABEL_74;
                v41 = !_BitScanReverse64((unsigned __int64 *)&v55, v27);
                if ( v41 )
                  v47 = 64LL;
                else
                  v47 = (unsigned int)(63 - v55);
                v27 = *++v26;
              }
              while ( (unsigned __int64)++v26 <= v28 )
              {
                v27 = *v26;
                if ( *v26 != -1LL )
                {
                  v47 = 0LL;
                  goto LABEL_62;
                }
              }
            }
            else
            {
              while ( v27 == -1 )
              {
                if ( (unsigned __int64)++v26 > v28 )
                  goto LABEL_74;
                v27 = *v26;
              }
              _BitScanForward64(&v29, ~v27);
              v30 = v29 + (((__int64)v26 - v22) >> 3 << 6);
LABEL_29:
              if ( v30 <= v25 )
                goto LABEL_30;
            }
LABEL_74:
            v30 = -1LL;
LABEL_75:
            v21 = v91;
            goto LABEL_177;
          }
          do
          {
LABEL_150:
            v75 = v27 < 0;
            do
            {
              if ( v75 )
              {
                if ( (unsigned __int64)++v26 > v28 )
                  goto LABEL_74;
                v27 = *v26;
                goto LABEL_150;
              }
              v41 = !_BitScanReverse64((unsigned __int64 *)&v76, v27);
              if ( v41 )
                v77 = 64;
              else
                v77 = 63 - v76;
              v30 = (((((__int64)v26 - v22) >> 3) + 1) << 6) - v77;
              if ( v30 > v25 )
                goto LABEL_74;
              v78 = v9 - v77;
              if ( v9 == v77 )
                goto LABEL_30;
              v27 = *++v26;
              if ( v78 < 0x40 )
                goto LABEL_159;
              v75 = v27 < 0;
            }
            while ( v27 );
            v78 -= 64LL;
            if ( !v78 )
              break;
            v27 = *++v26;
LABEL_159:
            v41 = !_BitScanForward64(&v79, v27);
            if ( v41 )
              v79 = 64LL;
          }
          while ( v79 < v78 );
        }
LABEL_30:
        if ( v30 != -1LL )
          goto LABEL_31;
        goto LABEL_75;
      }
      v31 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
    }
    else
    {
      v31 = sub_140598BFC(v8, v9, v6);
    }
LABEL_32:
    if ( v31 != -1LL )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v84 = *((_QWORD *)CurrentPrcb + 4375);
          v85 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v85 & *(_DWORD *)(v84 + 20)) == 0;
          *(_DWORD *)(v84 + 20) &= v85;
          if ( v41 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v3 = a3;
    if ( !(unsigned int)sub_1403D8D00((_DWORD)v5, (_DWORD)v8, 0, a3, 0) )
      return 0LL;
    v6 = v93;
LABEL_128:
    v4 = a2;
  }
  RtlSetBitsEx(v8, v31, v9);
  v32 = a3;
  if ( a3 == 13 )
  {
    v37 = 8 * (v8[1] - v5[1]);
    if ( a2 == 1 )
      v5[6] = v31 + 1;
    v31 += v37;
    v32 = 9;
  }
  else if ( a2 == 1 )
  {
    v5[3] = v31 + 1;
  }
  if ( v5 == &qword_140C51A40 )
  {
    qword_140C51888 -= v9 << 21;
    sub_140256F0C(0);
  }
  _InterlockedExchangeAdd64(&qword_140C53EC8[v32], v9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v33 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v86 = KeGetCurrentIrql();
      if ( v86 <= 0xFu && LockHandle.OldIrql <= 0xFu && v86 >= 2u )
      {
        v87 = KeGetCurrentPrcb();
        v88 = *((_QWORD *)v87 + 4375);
        v89 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v41 = (v89 & *(_DWORD *)(v88 + 20)) == 0;
        *(_DWORD *)(v88 + 20) &= v89;
        if ( v41 )
          sub_140418E4C(v87);
      }
    }
  }
  __writecr8(v33);
  return v5[4] + (v31 << 21);
}
