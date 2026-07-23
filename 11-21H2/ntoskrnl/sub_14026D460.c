/*
 * XREFs of sub_14026D460 @ 0x14026D460
 * Callers:
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14026CF88 @ 0x14026CF88 (sub_14026CF88.c)
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403A111C @ 0x1403A111C (sub_1403A111C.c)
 *     sub_1403C7090 @ 0x1403C7090 (sub_1403C7090.c)
 *     sub_1403C736C @ 0x1403C736C (sub_1403C736C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C48E0 @ 0x1405C48E0 (sub_1405C48E0.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_1406FC03C @ 0x1406FC03C (sub_1406FC03C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14026D460(unsigned __int64 a1, __int64 a2, __int64 *a3, char a4, __int64 a5, ULONG_PTR *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // r14
  unsigned int v13; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // rsi
  ULONG_PTR v28; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v30; // r13
  __int64 v31; // rbx
  KIRQL v32; // al
  ULONG_PTR v33; // r8
  KIRQL v34; // si
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  struct _KTHREAD *v37; // rsi
  char *v38; // rbx
  int v39; // r13d
  __int64 v40; // rdx
  int v41; // r8d
  bool v42; // zf
  ULONG_PTR v43; // r12
  int v44; // r15d
  unsigned int v45; // edi
  __int64 v46; // rax
  _QWORD *v47; // rsi
  char v49; // r12
  ULONG_PTR v50; // rax
  __int64 v51; // r14
  volatile LONG *v52; // rbx
  KIRQL v53; // al
  unsigned __int64 v54; // r8
  _QWORD *v55; // rdx
  unsigned __int64 v56; // rsi
  _QWORD *v57; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v60; // r9
  int v61; // edx
  int v62; // ebp
  __int64 v63; // rdi
  unsigned __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // r15
  __int64 v68; // r8
  int v69; // r12d
  unsigned __int64 v70; // rax
  unsigned int v71; // [rsp+40h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-120h]
  int v73; // [rsp+50h] [rbp-118h]
  __int64 v74; // [rsp+58h] [rbp-110h]
  __int64 v75; // [rsp+60h] [rbp-108h]
  __int64 v76; // [rsp+68h] [rbp-100h]
  unsigned __int64 v77; // [rsp+70h] [rbp-F8h]
  __int64 v78; // [rsp+78h] [rbp-F0h]
  __int64 v79; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v80; // [rsp+88h] [rbp-E0h]
  _QWORD v81[27]; // [rsp+90h] [rbp-D8h] BYREF
  char v82; // [rsp+170h] [rbp+8h]

  v9 = 0LL;
  v79 = 0LL;
  memset(v81, 0, 0x98uLL);
  v10 = 0LL;
  v11 = 3;
  BugCheckParameter1 = 0LL;
  v75 = 0LL;
  v12 = 0LL;
  v73 = 0x7FFFF;
  *a6 = 0LL;
  v82 = 0;
  v71 = 3;
  v74 = sub_140287970(a2);
  v13 = (a1 >> 16) + ((_WORD)a1 != 0);
  if ( v13 >= 0x10000 )
  {
    ++dword_140C52F60;
    return (unsigned int)-1073741793;
  }
  else
  {
    v76 = sub_140286F90(v74, *a3, &v79);
    if ( v76 )
    {
      v80 = sub_14026DFC0(1LL);
      LOBYTE(v9) = (a1 & 0xFFF) != 0;
      v14 = (a1 >> 12) + v9;
      v15 = 16 * v13;
      v16 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v80 + 174));
      v77 = v15;
      v78 = v16;
      if ( (*(_DWORD *)(v74 + 56) & 0x420) != 0 )
        goto LABEL_6;
      v17 = sub_14026CF88(v74, a3, v14, &v71);
      v11 = v71;
      v18 = v17;
      if ( v17 < 0 )
      {
        v27 = 0LL;
        v49 = 0;
        goto LABEL_89;
      }
      v82 = 1;
      if ( v71 >= 3 )
      {
LABEL_6:
        v19 = sub_1403095B0(&unk_140C52F40, (unsigned int)v15);
        v12 = v19;
        if ( !v19 )
        {
          ++dword_140C52F60;
          v18 = -1073741670;
          v49 = 0;
          v27 = 0LL;
          goto LABEL_93;
        }
        BugCheckParameter1 = v19 << 25 >> 16;
      }
      else
      {
        v50 = sub_1403C736C(v15, 9LL, v71);
        BugCheckParameter1 = v50;
        if ( !v50 )
        {
          ++dword_140C52F60;
          v18 = -1073741670;
          v49 = 0;
          v27 = 0LL;
          goto LABEL_73;
        }
        v12 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v20 = sub_1402828F0(64LL, 104LL, 2002151757LL);
      v10 = v20;
      if ( v20 )
      {
        v21 = (_DWORD *)v74;
        v22 = v74;
        *(_DWORD *)(v20 + 56) ^= (*(_DWORD *)(v20 + 56) ^ (8 * v11)) & 0x18;
        v23 = sub_140287380(v22, (unsigned int)((a5 & 8) != 0) + 3);
        v24 = v23;
        if ( v23 )
        {
          if ( v23 == 2 )
            *(_DWORD *)(v10 + 56) |= 4u;
          if ( (*(_DWORD *)(a2 + 56) & 0x10000000) != 0 )
            *(_DWORD *)(v10 + 56) |= 1u;
          if ( (a4 & 1) != 0 )
            *(_DWORD *)(v10 + 56) |= 2u;
          v25 = v21[14];
          v26 = -1;
          if ( (v25 & 0x20) == 0 )
          {
            v27 = v75;
LABEL_18:
            *(_QWORD *)(v10 + 32) = v14 << 12;
            *(_QWORD *)(v10 + 48) = v76;
            *(_QWORD *)(v10 + 24) = (unsigned __int64)*a3 >> 12;
            v28 = BugCheckParameter1 | 2;
            *(_QWORD *)(v10 + 40) = v27;
            *(_QWORD *)(v10 + 88) = v28;
            *(_DWORD *)(v10 + 96) = v73;
            *(_QWORD *)(v10 + 64) = sub_1406FC03C(a2);
            CurrentThread = KeGetCurrentThread();
            if ( v71 || (*(_DWORD *)(v74 + 56) & 0x400) != 0 )
            {
              --*((_WORD *)CurrentThread + 243);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F5E8, 0LL);
              v30 = v80;
              v31 = sub_140282AD0(v80);
              v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v31);
              *(_DWORD *)(v31 + 4) = 0;
              LOBYTE(v33) = 0;
              ++dword_140C4F5F8;
              v34 = v32;
              v35 = qword_140C4F5F0;
              if ( qword_140C4F5F0 )
              {
                while ( 1 )
                {
                  v33 = v35[11] & 0xFFFFFFFFFFFFF000uLL;
                  if ( BugCheckParameter1 < v33 + v35[4] && BugCheckParameter1 < v33 )
                  {
                    v36 = (_QWORD *)*v35;
                    if ( !*v35 )
                    {
                      LOBYTE(v33) = 0;
                      break;
                    }
                  }
                  else
                  {
                    v36 = (_QWORD *)v35[1];
                    if ( !v36 )
                    {
                      LOBYTE(v33) = 1;
                      break;
                    }
                  }
                  v35 = v36;
                }
              }
              RtlAvlInsertNodeEx(&qword_140C4F5F0, v35, v33, v10);
              sub_14030FA80(v30, v34);
              if ( (*(_DWORD *)(v74 + 56) & 0x400) == 0 )
              {
                v81[0] = v74;
                sub_140285FE0(v81, v10 + 72, 3LL);
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&qword_140C4F5E8);
              v37 = KeGetCurrentThread();
              if ( (unsigned __int64)&qword_140C4F5E8 - qword_140C50630 < 0x8000000000LL )
                v26 = sub_140287F30(*((_QWORD *)v37 + 23));
              _disable();
              v38 = (char *)v37 + 1696;
              v39 = 0;
              v40 = 0LL;
              do
              {
                if ( (*(_QWORD *)v38 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4F5E8 & 0x7FFFFFFFFFFFFFFCLL)
                  && v38[18]
                  && (*(_DWORD *)v38 & 1) == 0
                  && *((_DWORD *)v38 + 2) == v26 )
                {
                  v38[18] = 0;
                  if ( *(__int64 *)v38 < 0 )
                  {
                    *v38 |= 2u;
                    _enable();
                    sub_14034EE30(v38, v40, 0x7FFFFFFFFFFFFFFCLL);
                    _disable();
                  }
                  v41 = *((_DWORD *)v38 + 22);
                  *((_DWORD *)v38 + 22) = 0;
                  v38[17] = 0;
                  *(_QWORD *)v38 = 0LL;
                  *((_BYTE *)v37 + 792) |= 1 << v38[16];
                  _enable();
                  if ( v41 )
                    sub_14022B568((ULONG_PTR)v37, (__int64)&qword_140C4F5E8, v41);
                  goto LABEL_39;
                }
                v40 = (unsigned int)(v40 + 1);
                v38 += 96;
              }
              while ( (unsigned int)v40 < 6 );
              if ( (*((_DWORD *)v37 + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&qword_140C4F5E8, v26, 0LL);
              _enable();
LABEL_39:
              v42 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
              if ( v42 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
                KiCheckForKernelApcDelivery();
              v43 = BugCheckParameter1;
            }
            else
            {
              v43 = BugCheckParameter1;
              v52 = (volatile LONG *)((char *)&unk_140C4F618 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
              v53 = ExAcquireSpinLockExclusive(v52 + 3);
              ++*((_DWORD *)v52 + 2);
              LOBYTE(v54) = 0;
              v55 = *(_QWORD **)v52;
              v56 = v53;
              if ( *(_QWORD *)v52 )
              {
                while ( 1 )
                {
                  v54 = v55[11] & 0xFFFFFFFFFFFFF000uLL;
                  if ( v43 >= v54 + v55[4] || v43 >= v54 )
                  {
                    v57 = (_QWORD *)v55[1];
                    if ( !v57 )
                    {
                      LOBYTE(v54) = 1;
                      break;
                    }
                  }
                  else
                  {
                    v57 = (_QWORD *)*v55;
                    if ( !*v55 )
                    {
                      LOBYTE(v54) = 0;
                      break;
                    }
                  }
                  v55 = v57;
                }
              }
              RtlAvlInsertNodeEx(v52, v55, v54, v10);
              ExReleaseSpinLockExclusiveFromDpcLevel(v52 + 3);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v56 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v60 = *((_QWORD *)CurrentPrcb + 4375);
                    v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
                    v42 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
                    *(_DWORD *)(v60 + 20) &= v61;
                    if ( v42 )
                      sub_140418E4C(CurrentPrcb);
                  }
                }
              }
              __writecr8(v56);
              v39 = 0;
            }
            v44 = v74;
            if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v74 + 92));
            if ( v71 < 3 )
            {
              v62 = v43;
              v63 = qword_14001C780[v71];
              v64 = 0LL;
              v65 = *(_QWORD *)(v76 + 8);
              v66 = v65 + 8 * v79;
              v67 = v65 + 8LL * *(unsigned int *)(v76 + 44);
              if ( v77 )
              {
                v69 = sub_14026DFC0(3LL);
                do
                {
                  if ( v66 == v67 )
                  {
                    v76 = *(_QWORD *)(v68 + 16);
                    v66 = *(_QWORD *)(v76 + 8);
                    v67 = v66 + 8LL * *(unsigned int *)(v76 + 44);
                  }
                  v70 = sub_140317A10(v66);
                  sub_1403C7090(v69, v62, v70 >> 12, v63, v71, 4, 1);
                  v68 = v76;
                  v62 += (_DWORD)v63 << 12;
                  v66 += 8 * v63;
                  v64 += v63;
                }
                while ( v64 < v77 );
                v43 = BugCheckParameter1;
                v39 = 0;
              }
            }
            else
            {
              v45 = 0;
              if ( v14 )
              {
                v46 = 0LL;
                do
                {
                  v47 = (_QWORD *)(v12 + 8 * v46);
                  if ( (unsigned int)sub_140317A80(v47) && (unsigned int)sub_140229550() )
                  {
                    *v47 = 0LL;
                    sub_1402294F0((__int64)v47, 0LL);
                  }
                  else
                  {
                    *v47 = 0LL;
                  }
                  v46 = ++v45;
                }
                while ( v45 < v14 );
                v43 = BugCheckParameter1;
              }
              v39 = sub_1406F40E0(v12, v14, v44, (_DWORD)a3, v73, 0);
              if ( v39 < 0 )
              {
                ++dword_140C52F60;
                sub_14026D048(v43, 0);
                return (unsigned int)v39;
              }
            }
            *a6 = v43;
            return (unsigned int)v39;
          }
          if ( (v25 & 0x8000000) == 0 )
          {
            v49 = 0;
LABEL_62:
            v27 = *(_QWORD *)(*(_QWORD *)v21 + 48LL);
            if ( v27 && !(unsigned int)sub_14032A4B0(v78, v27, 0LL) )
            {
              v27 = 0LL;
              v18 = -1073741523;
            }
            else if ( v24 != 2 || (v76 = v74 + 128, v18 = sub_140286DE0(v74 + 128), v18 >= 0) )
            {
              v26 = -1;
              goto LABEL_18;
            }
            goto LABEL_89;
          }
          v73 = -1;
          if ( (int)sub_1406DDB48(v21, 0xFFFFFFFFLL) >= 0 )
          {
            v49 = 1;
            goto LABEL_62;
          }
          v27 = v75;
          v18 = -1073741801;
          v49 = 0;
        }
        else
        {
          v27 = v75;
          v18 = -1073740277;
          v49 = 0;
        }
      }
      else
      {
        v27 = v75;
        v18 = -1073741670;
        v49 = 0;
      }
LABEL_89:
      ++dword_140C52F60;
      if ( v12 )
      {
        if ( v11 >= 3 )
          sub_1402BB6D0(&unk_140C52F40, v12, (unsigned int)v77);
        else
          sub_1403A111C(BugCheckParameter1, v77 << 12, 9LL);
      }
LABEL_93:
      if ( !v82 )
      {
        v51 = v74;
        goto LABEL_74;
      }
LABEL_73:
      v51 = v74;
      sub_1405C48E0(v74, (_DWORD)a3, v14, v11 < 3, 1);
LABEL_74:
      if ( v49 )
        sub_1406DDA18(v51);
      if ( v27 )
        sub_14028CE10(v78, v27);
      if ( v10 )
        ExFreePoolWithTag((PVOID)v10, 0);
      return (unsigned int)v18;
    }
    ++dword_140C52F60;
    return (unsigned int)-1073741801;
  }
}
