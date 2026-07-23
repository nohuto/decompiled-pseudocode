/*
 * XREFs of sub_14072DDC0 @ 0x14072DDC0
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_140280170 @ 0x140280170 (sub_140280170.c)
 *     IoGetSilo @ 0x1402A3FD0 (IoGetSilo.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14071F0D0 @ 0x14071F0D0 (sub_14071F0D0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14072B200 @ 0x14072B200 (sub_14072B200.c)
 *     sub_14072E5D0 @ 0x14072E5D0 (sub_14072E5D0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 */

__int64 __fastcall sub_14072DDC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9)
{
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v10; // rsi
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rbx
  _DWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r13
  int v27; // ecx
  int v28; // eax
  _QWORD *v29; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 Silo; // rax
  struct _KPRCB *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  struct _KPRCB *v38; // rdx
  __int64 v39; // rcx
  __int16 v40; // [rsp+40h] [rbp-88h] BYREF
  __int64 v41; // [rsp+48h] [rbp-80h] BYREF
  __int128 v42; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v43[3]; // [rsp+60h] [rbp-68h] BYREF
  int v44; // [rsp+78h] [rbp-50h]
  int v45; // [rsp+7Ch] [rbp-4Ch]
  __int128 v46; // [rsp+80h] [rbp-48h]
  char v49; // [rsp+E8h] [rbp+20h]

  v49 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v40 = 0;
  v12 = a4;
  v43[0] = 48LL;
  v13 = *((_QWORD *)CurrentPrcb + 264);
  v14 = a3;
  v45 = 0;
  v43[1] = 0LL;
  v44 = a4;
  ++*(_DWORD *)(v13 + 20);
  v43[2] = 0LL;
  v46 = 0LL;
  LOBYTE(v40) = 1;
  v42 = 0LL;
  v41 = 0LL;
  v15 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v13);
  if ( !v15 )
  {
    ++*(_DWORD *)(v13 + 24);
    v22 = *((_QWORD *)CurrentPrcb + 265);
    ++*(_DWORD *)(v22 + 20);
    v15 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
    if ( !v15 )
    {
      v23 = *(unsigned int *)(v22 + 44);
      v24 = *(unsigned int *)(v22 + 36);
      ++*(_DWORD *)(v22 + 24);
      v15 = sub_14042A5E0(v24, v23);
      if ( !v15 )
      {
        v16 = -1073741670;
LABEL_56:
        if ( !a8 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)v16;
      }
    }
  }
  *(_DWORD *)v15 = *((_DWORD *)CurrentPrcb + 9);
  v16 = sub_1407CCD80(0, a5, (unsigned int)v43, (unsigned int)&v42, v15, 0);
  if ( v16 < 0 )
  {
    v35 = KeGetCurrentPrcb();
    v36 = *((_QWORD *)v35 + 264);
    ++*(_DWORD *)(v36 + 28);
    if ( *(_WORD *)v36 < *(_WORD *)(v36 + 16)
      || (++*(_DWORD *)(v36 + 32),
          v36 = *((_QWORD *)v35 + 265),
          ++*(_DWORD *)(v36 + 28),
          *(_WORD *)v36 < *(_WORD *)(v36 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v36, (PSLIST_ENTRY)v15);
    }
    else
    {
      ++*(_DWORD *)(v36 + 32);
      sub_14042A5E0(v15, v35);
    }
    goto LABEL_56;
  }
  if ( (*(_DWORD *)v15 & (_DWORD)v10[9]) != 0 )
  {
    v16 = -1073741811;
    goto LABEL_62;
  }
  if ( (*(_DWORD *)v15 & 0x10) != 0 && !SeSinglePrivilegeCheck(stru_140D3CB68, 0) )
  {
    v16 = -1073741727;
    goto LABEL_62;
  }
  v19 = *((_DWORD *)v10 + 27);
  *(_DWORD *)(v15 + 20) = *((_DWORD *)v10 + 26);
  *(_DWORD *)(v15 + 24) = v19;
  v16 = sub_14072E5D0(v15, a5, (_DWORD)v10, (unsigned int)&v42, 216, (__int64)&v41, (__int64)&v40);
  if ( v16 < 0 )
  {
LABEL_62:
    if ( *((_QWORD *)&v42 + 1) )
      sub_14071F0D0((__int64)&v42);
    v37 = *(_QWORD *)(v15 + 32);
    if ( v37 )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(v37, *(unsigned __int8 *)(v15 + 16), v17, v18);
      *(_QWORD *)(v15 + 32) = 0LL;
    }
    v38 = KeGetCurrentPrcb();
    v39 = *((_QWORD *)v38 + 264);
    ++*(_DWORD *)(v39 + 28);
    if ( *(_WORD *)v39 < *(_WORD *)(v39 + 16)
      || (++*(_DWORD *)(v39 + 32),
          v39 = *((_QWORD *)v38 + 265),
          ++*(_DWORD *)(v39 + 28),
          *(_WORD *)v39 < *(_WORD *)(v39 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v39, (PSLIST_ENTRY)v15);
    }
    else
    {
      ++*(_DWORD *)(v39 + 32);
      sub_14042A5E0(v15, v38);
    }
    goto LABEL_56;
  }
  v20 = v41;
  if ( dword_140D05010 )
  {
    sub_140986424(v41);
    sub_1405C5EC8(v20, 1, 1u, 0x746C6644u);
  }
  v21 = (_DWORD *)(v20 + 48);
  memset(v21, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v21 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v21 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v21 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v21 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v21 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v31 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v31 )
      *((_QWORD *)v21 + 26) = v31;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v25 = *(_QWORD *)(a6 + 40)) == 0 || (Silo = IoGetSilo(v25), PsIsHostSilo(Silo))) )
    {
      v26 = a2;
    }
    else
    {
      v26 = a2;
      v16 = sub_14071CAFC((__int64)v21, a2, a6, a7, a9);
    }
    if ( v16 >= 0 && a5 )
    {
      if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
        || (*(_DWORD *)(v26 + 48) & 0x40000) == 0
        && ((v32 = *(unsigned int *)(v26 + 72), (unsigned int)v32 > 0x35)
         || (v33 = 0x20000100100108LL, !_bittest64(&v33, v32)))
        || (v16 = sub_14072B200(v26, a6, a9, (__int64)v21), v16 >= 0) )
      {
        if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
          v16 = sub_140280170((__int64)v21, *(_QWORD *)(a6 + 40));
      }
    }
    v14 = a3;
    v12 = v49;
  }
  *(_QWORD *)a1 = v21;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v27 = v21[20] | 2;
      v21[20] = v27;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v21[20] = v27 | 4;
    }
    if ( (v21[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v21 + 32), SynchronizationEvent, 0);
      v21[28] = 0;
      *((_QWORD *)v21 + 13) = 0LL;
    }
    v28 = *(_DWORD *)(a6 + 64);
    if ( (v28 & 8) != 0 )
    {
      v21[20] |= 8u;
      v28 = *(_DWORD *)(a6 + 64);
    }
    if ( (v28 & 2) != 0 )
    {
      v21[20] |= 0x10u;
      v28 = *(_DWORD *)(a6 + 64);
    }
    if ( (v28 & 4) != 0 )
    {
      v21[20] |= 0x20u;
      v28 = *(_DWORD *)(a6 + 64);
    }
    if ( (v28 & 0x800) != 0 )
    {
      v21[20] |= 0x100000u;
      v28 = *(_DWORD *)(a6 + 64);
    }
    if ( (v28 & 0x20000) != 0 )
      v21[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v21[20] |= 0x20000u;
  *v21 = 14155781;
  *((_QWORD *)v21 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v21 + 1) = v14;
  *((_QWORD *)v21 + 23) = 0LL;
  v29 = v21 + 48;
  v29[1] = v29;
  *v29 = v29;
  return (unsigned int)v16;
}
