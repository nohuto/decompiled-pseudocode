/*
 * XREFs of sub_14037E338 @ 0x14037E338
 * Callers:
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_14037E1B8 @ 0x14037E1B8 (sub_14037E1B8.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045D8D2 @ 0x14045D8D2 (sub_14045D8D2.c)
 *     sub_1405BC4A4 @ 0x1405BC4A4 (sub_1405BC4A4.c)
 *     sub_1405BC4E8 @ 0x1405BC4E8 (sub_1405BC4E8.c)
 */

void __fastcall sub_14037E338(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r13
  __int64 v8; // r15
  char *v9; // rax
  volatile LONG *v10; // rax
  KIRQL v11; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int16 v14; // dx
  unsigned int v15; // r12d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char v20; // di
  int v21; // r15d
  __int64 v22; // rbx
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  unsigned int v28; // r14d
  __int64 v29; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  signed __int32 v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r13
  unsigned __int8 v38; // si
  unsigned __int64 v39; // r12
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rbx
  unsigned __int64 v49; // r8
  struct _KPRCB *v50; // r9
  __int64 v51; // rdx
  signed __int32 v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rdi
  __int64 v57; // rdx
  char v58; // di
  int v59; // esi
  __int64 v60; // rbx
  bool v61; // zf
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // rax
  char v67; // si
  __int64 v68; // rbx
  int v69; // eax
  char v70; // di
  int v71; // esi
  __int64 v72; // rbx
  bool v73; // zf
  unsigned int v74; // eax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  __int64 v77; // r9
  int v78; // eax
  unsigned __int8 v79; // al
  unsigned __int8 v80; // bl
  struct _KPRCB *v81; // r10
  __int64 v82; // r9
  int v83; // eax
  signed __int32 v84[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v85; // [rsp+30h] [rbp-40h]
  int v86; // [rsp+34h] [rbp-3Ch]
  unsigned int v87; // [rsp+38h] [rbp-38h]
  unsigned __int64 v88; // [rsp+40h] [rbp-30h] BYREF
  __int64 v89; // [rsp+48h] [rbp-28h]
  PEX_SPIN_LOCK SpinLock; // [rsp+50h] [rbp-20h]
  __int64 v91; // [rsp+58h] [rbp-18h]
  __int128 v92; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v95; // [rsp+C8h] [rbp+58h]

  v95 = a4;
  v23 = *(_QWORD *)(a1 + 216) == 0LL;
  v92 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( !v23 )
  {
    v9 = sub_14026DFC0(3);
    sub_140339C20(v9, 0, (__int64)&v92);
    if ( (*(_BYTE *)(v7 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0xC0000010);
    v89 = v7 + 8 * a3 + 48;
    v10 = (volatile LONG *)(v8 + 232);
    SpinLock = (PEX_SPIN_LOCK)(v8 + 232);
    while ( 1 )
    {
      v11 = ExAcquireSpinLockExclusive(v10);
      v12 = *(_QWORD *)(v8 + 216);
      v13 = v11;
      v14 = v12 + v5 * dword_140C531CC;
      v15 = a5;
      v16 = (((v12 + (unsigned __int64)(v5 * dword_140C531CC)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (4096 - (v14 & 0xFFFu)) / dword_140C531CC <= a5 )
        v15 = (4096 - (v14 & 0xFFFu)) / dword_140C531CC;
      v87 = v15;
      v88 = sub_140317A10(v16);
      if ( (v88 & 1) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = *((_QWORD *)CurrentPrcb + 4375);
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v23 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
              *(_DWORD *)(v32 + 20) &= v33;
              if ( v23 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v92, 1u);
        v35 = sub_1405BC4E8(v8, DWORD2(v92) & (unsigned int)v34 | HIDWORD(v92));
        v91 = v35;
        v36 = v35;
        if ( v35 == -1 )
        {
          v37 = 0LL;
          v38 = 17;
        }
        else
        {
          v37 = 48 * v35 - 0x220000000000LL;
          _InterlockedOr(v84, 0);
          sub_14033C33C(v37, dword_140D31080, 0);
          v88 = sub_140317A10(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          sub_14027CCE4(v36, v16, (v88 >> 12) & 0xFFFFFFFFFFLL, 2560);
          v38 = sub_1402F2700(v37);
        }
        v85 = v38;
        v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 232));
        if ( v12 != *(_QWORD *)(v8 + 216) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v40 = KeGetCurrentIrql();
              if ( v40 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v40 >= 2u )
              {
                v41 = KeGetCurrentPrcb();
                v42 = *((_QWORD *)v41 + 4375);
                v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
                v23 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
                *(_DWORD *)(v42 + 20) &= v43;
                if ( v23 )
                  sub_140418E4C(v41);
              }
            }
          }
          __writecr8(v39);
          if ( v36 == -1 )
            goto LABEL_69;
          sub_1405BC4A4(v36);
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v44 = KeGetCurrentIrql();
              if ( v44 <= 0xFu && v38 <= 0xFu && v44 >= 2u )
              {
                v45 = KeGetCurrentPrcb();
                v46 = *((_QWORD *)v45 + 4375);
                v47 = ~(unsigned __int16)(-1LL << (v38 + 1));
                v23 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
                *(_DWORD *)(v46 + 20) &= v47;
                if ( v23 )
                  sub_140418E4C(v45);
              }
            }
          }
          __writecr8(v38);
          v48 = *(_QWORD *)(v8 + 248);
          sub_14028CE10(v48, 1LL);
          v49 = 1LL;
          if ( (ULONG_PTR *)v48 == &StartContext )
          {
            v50 = KeGetCurrentPrcb();
            v51 = *((int *)v50 + 8615);
            if ( (_DWORD)v51 != -1 )
            {
              if ( (unsigned __int64)(v51 + 1) <= 0x100 )
              {
                while ( 1 )
                {
                  v52 = _InterlockedCompareExchange((volatile signed __int32 *)v50 + 8615, v51 + 1, v51);
                  v23 = (_DWORD)v51 == v52;
                  LODWORD(v51) = v52;
                  if ( v23 )
                    break;
                  if ( v52 == -1 || (unsigned __int64)(v52 + 1LL) > 0x100 )
                    goto LABEL_63;
                }
LABEL_68:
                _InterlockedDecrement64(&qword_140C53DA8);
LABEL_69:
                v53 = a5;
                v5 = v95;
                v29 = a2;
                goto LABEL_70;
              }
LABEL_63:
              if ( (int)v51 > 192
                && (_DWORD)v51 == _InterlockedCompareExchange((volatile signed __int32 *)v50 + 8615, 192, v51) )
              {
                v49 = (int)v51 - 192 + 1LL;
              }
              if ( !v49 )
                goto LABEL_68;
            }
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 16960), v49);
          goto LABEL_68;
        }
        v54 = sub_140317A10(v16);
        v55 = v54;
        if ( qword_140C50780 )
        {
          if ( (v54 & 0x10) != 0 )
            v55 = v54 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v55 = v54 & ~qword_140C50780;
        }
        v56 = HIDWORD(v55);
        v57 = (unsigned int)v56 + v87;
        if ( v36 != -1 )
        {
          v88 = *(_QWORD *)(v37 + 16);
          v66 = sub_14033B6A0(v88, v57);
          v86 = 0;
          v67 = v66;
          v68 = v66;
          if ( sub_140317A80(v37 + 16) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v69 = 1;
              if ( !HIBYTE(word_140C51864) && (v67 & 1) != 0 )
                v68 |= 0x8000000000000000uLL;
LABEL_105:
              *(_QWORD *)(v37 + 16) = v68;
              if ( v69 )
                sub_1402294F0(v37 + 16, v68);
              if ( (_DWORD)v56 )
                *(_BYTE *)(v37 + 34) &= ~0x10u;
              v88 = sub_1402CBD10(v16, v91, -1610612732);
              v70 = v88;
              v71 = 0;
              v72 = v88;
              if ( sub_140317A80(v16) )
              {
                if ( (unsigned int)sub_140229550() )
                {
                  v71 = 1;
                  if ( !HIBYTE(word_140C51864) )
                  {
                    v73 = (v70 & 1) == 0;
LABEL_115:
                    if ( !v73 )
                      v72 |= 0x8000000000000000uLL;
                  }
                }
                else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
                {
                  v73 = (v70 & 1) == 0;
                  goto LABEL_115;
                }
              }
              *(_QWORD *)v16 = v72;
              if ( v71 )
                sub_1402294F0(v16, v72);
              v8 = a1;
              v74 = ++*(_DWORD *)(a1 + 208);
              if ( v74 > *(_DWORD *)(a1 + 212) )
                *(_DWORD *)(a1 + 212) = v74;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v75 = KeGetCurrentIrql();
                  if ( v75 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v75 >= 2u )
                  {
                    v76 = KeGetCurrentPrcb();
                    v77 = *((_QWORD *)v76 + 4375);
                    v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
                    v23 = (v78 & *(_DWORD *)(v77 + 20)) == 0;
                    *(_DWORD *)(v77 + 20) &= v78;
                    if ( v23 )
                      sub_140418E4C(v76);
                  }
                }
              }
              __writecr8(v39);
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v79 = KeGetCurrentIrql(), v79 <= 0xFu) )
              {
                v80 = v85;
                if ( v85 <= 0xFu && v79 >= 2u )
                {
                  v81 = KeGetCurrentPrcb();
                  v82 = *((_QWORD *)v81 + 4375);
                  v83 = ~(unsigned __int16)(-1LL << (v85 + 1));
                  v23 = (v83 & *(_DWORD *)(v82 + 20)) == 0;
                  *(_DWORD *)(v82 + 20) &= v83;
                  if ( v23 )
                    sub_140418E4C(v81);
                }
              }
              else
              {
                v80 = v85;
              }
              __writecr8(v80);
              v29 = a2;
              v28 = v95;
              v15 = v87;
              sub_14045D8D2(a1, a2, v89, v95, v87);
              goto LABEL_137;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v67 & 1) != 0 )
              v68 |= 0x8000000000000000uLL;
          }
          v69 = v86;
          goto LABEL_105;
        }
        v88 = sub_14033B6A0(v54, v57);
        v58 = v88;
        v59 = 0;
        v60 = v88;
        if ( sub_140317A80(v16) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            v59 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v61 = (v58 & 1) == 0;
LABEL_84:
              if ( !v61 )
                v60 |= 0x8000000000000000uLL;
            }
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
          {
            v61 = (v58 & 1) == 0;
            goto LABEL_84;
          }
        }
        *(_QWORD *)v16 = v60;
        if ( v59 )
          sub_1402294F0(v16, v60);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v62 = KeGetCurrentIrql();
            if ( v62 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = *((_QWORD *)v63 + 4375);
              v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
              v23 = (v65 & *(_DWORD *)(v64 + 20)) == 0;
              *(_DWORD *)(v64 + 20) &= v65;
              if ( v23 )
                sub_140418E4C(v63);
            }
          }
        }
        __writecr8(v39);
        v29 = a2;
        v15 = v87;
        v28 = v95;
        goto LABEL_137;
      }
      v17 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v88) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v18 = *(_QWORD *)(v17 + 16);
      v19 = v18;
      if ( qword_140C50780 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C50780;
      v88 = sub_14033B6A0(v18, v15 + HIDWORD(v19));
      v20 = v88;
      v21 = 0;
      v22 = v88;
      if ( sub_140317A80(v17 + 16) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v23 = (v20 & 1) == 0;
            goto LABEL_19;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v23 = (v20 & 1) == 0;
LABEL_19:
          if ( !v23 )
            v22 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)(v17 + 16) = v22;
      if ( v21 )
        sub_1402294F0(v17 + 16, v22);
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = *((_QWORD *)v25 + 4375);
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
            *(_DWORD *)(v26 + 20) &= v27;
            if ( v23 )
              sub_140418E4C(v25);
          }
        }
      }
      __writecr8(v13);
      v8 = a1;
      v28 = v95;
      sub_14045D8D2(a1, v7, v89, v95, v15);
      v29 = a2;
LABEL_137:
      v5 = v15 + v28;
      v95 = v5;
      v53 = a5 - v15;
      v89 += 8LL * v15;
      a5 -= v15;
LABEL_70:
      v23 = v53 == 0;
      v10 = (volatile LONG *)(v8 + 232);
      if ( v23 )
      {
        if ( (*(_BYTE *)(v29 + 10) & 1) != 0 )
          MmUnmapLockedPages(*(PVOID *)(v29 + 24), (PMDL)v29);
        return;
      }
      v7 = a2;
    }
  }
}
