/*
 * XREFs of sub_14072E210 @ 0x14072E210
 * Callers:
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14067F7A4 @ 0x14067F7A4 (sub_14067F7A4.c)
 *     sub_14068038C @ 0x14068038C (sub_14068038C.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 *     sub_14071F0D0 @ 0x14071F0D0 (sub_14071F0D0.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14072E5D0 @ 0x14072E5D0 (sub_14072E5D0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

__int64 __fastcall sub_14072E210(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7,
        bool *a8)
{
  char v8; // r13
  signed __int64 v12; // rax
  POBJECT_TYPE *v13; // rsi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rbx
  _DWORD *v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  _QWORD *v28; // rdi
  unsigned int i; // r8d
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  bool v33; // dl
  char v34; // bl
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KPRCB *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KPRCB *v41; // rdx
  __int64 v42; // rcx
  __int16 v43; // [rsp+40h] [rbp-68h] BYREF
  __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  __int128 v47; // [rsp+60h] [rbp-48h] BYREF

  v44 = 0LL;
  v8 = a5 & 1;
  v46 = 0LL;
  v12 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v44 = *(_QWORD *)(a4 + 56);
      v23 = sub_14067F7A4(v44);
      v17 = v23;
      if ( v23 < 0 )
      {
        sub_14068038C(a3, 131840, v23);
LABEL_47:
        sub_14071C0FC((volatile signed __int64 *)BugCheckParameter2);
        return (unsigned int)v17;
      }
    }
    else
    {
      v46 = a4 + 88;
    }
  }
  v13 = CmKeyObjectType;
  v45 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = 1;
  v47 = 0LL;
  v15 = *((_QWORD *)CurrentPrcb + 264);
  ++*(_DWORD *)(v15 + 20);
  v16 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
  if ( !v16 )
  {
    ++*(_DWORD *)(v15 + 24);
    v24 = *((_QWORD *)CurrentPrcb + 265);
    ++*(_DWORD *)(v24 + 20);
    v16 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v24);
    if ( !v16 )
    {
      v25 = *(unsigned int *)(v24 + 44);
      v26 = *(unsigned int *)(v24 + 36);
      ++*(_DWORD *)(v24 + 24);
      v16 = sub_14042A5E0(v26, v25);
      if ( !v16 )
      {
        v17 = -1073741670;
LABEL_49:
        sub_14068038C(a3, 132096, v17);
        v27 = v44;
        v34 = 1;
        goto LABEL_35;
      }
    }
  }
  *(_DWORD *)v16 = *((_DWORD *)CurrentPrcb + 9);
  v17 = sub_1407CCD80(a2, a2, 0, (unsigned int)&v47, v16, 0);
  if ( v17 < 0 )
  {
    v38 = KeGetCurrentPrcb();
    v39 = *((_QWORD *)v38 + 264);
    ++*(_DWORD *)(v39 + 28);
    if ( *(_WORD *)v39 < *(_WORD *)(v39 + 16)
      || (++*(_DWORD *)(v39 + 32),
          v39 = *((_QWORD *)v38 + 265),
          ++*(_DWORD *)(v39 + 28),
          *(_WORD *)v39 < *(_WORD *)(v39 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v39, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++*(_DWORD *)(v39 + 32);
      sub_14042A5E0(v16, v38);
    }
    goto LABEL_49;
  }
  if ( (*(_DWORD *)v16 & (_DWORD)v13[9]) != 0 )
  {
    v17 = -1073741811;
    goto LABEL_57;
  }
  if ( (*(_DWORD *)v16 & 0x10) != 0 && !SeSinglePrivilegeCheck(stru_140D3CB68, a2) )
  {
    v17 = -1073741727;
    goto LABEL_57;
  }
  v20 = *((_DWORD *)v13 + 27);
  *(_DWORD *)(v16 + 20) = *((_DWORD *)v13 + 26);
  *(_DWORD *)(v16 + 24) = v20;
  v17 = sub_14072E5D0(v16, a2, (_DWORD)v13, (unsigned int)&v47, 112, (__int64)&v45, (__int64)&v43);
  if ( v17 < 0 )
  {
LABEL_57:
    if ( *((_QWORD *)&v47 + 1) )
      sub_14071F0D0((__int64)&v47);
    v40 = *(_QWORD *)(v16 + 32);
    if ( v40 )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(v40, *(unsigned __int8 *)(v16 + 16), v18, v19);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v41 = KeGetCurrentPrcb();
    v42 = *((_QWORD *)v41 + 264);
    ++*(_DWORD *)(v42 + 28);
    if ( *(_WORD *)v42 < *(_WORD *)(v42 + 16)
      || (++*(_DWORD *)(v42 + 32),
          v42 = *((_QWORD *)v41 + 265),
          ++*(_DWORD *)(v42 + 28),
          *(_WORD *)v42 < *(_WORD *)(v42 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v42, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++*(_DWORD *)(v42 + 32);
      sub_14042A5E0(v16, v41);
    }
    goto LABEL_49;
  }
  v21 = v45;
  if ( dword_140D05010 )
  {
    sub_140986424(v45);
    sub_1405C5EC8(v21, 1, 1u, 0x746C6644u);
  }
  v22 = (_DWORD *)(v21 + 48);
  memset(v22, 0, 0x70uLL);
  *((_WORD *)v22 + 25) = *(_WORD *)(a3 + 20);
  *((_QWORD *)v22 + 1) = BugCheckParameter2;
  *((_QWORD *)v22 + 3) = PsGetCurrentThreadProcessId();
  *((_WORD *)v22 + 2) = 0;
  v22[24] = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v37 = *(int *)(BugCheckParameter2 + 96);
    *v22 = v37;
    *(_QWORD *)(a3 + 56) = v37;
  }
  else
  {
    *v22 = 1803104306;
  }
  v27 = v44;
  if ( a4 )
  {
    v36 = v46;
    *((_QWORD *)v22 + 7) = v44;
    v27 = 0LL;
    *((_QWORD *)v22 + 8) = v36;
  }
  *((_QWORD *)v22 + 10) = v22 + 18;
  *((_QWORD *)v22 + 9) = v22 + 18;
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v22 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
LABEL_34:
    v33 = (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0;
    *a7 = v22;
    v34 = 0;
    v17 = 0;
    *a8 = v33;
  }
  else
  {
    v28 = v22 + 8;
    do
    {
      while ( 1 )
      {
        *((_QWORD *)v22 + 5) = v22 + 8;
        *v28 = v28;
        for ( i = 0; i < 4; ++i )
        {
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)(*((_QWORD *)v22 + 1) + 8LL * i + 136),
                  (signed __int64)v22,
                  0LL) )
            goto LABEL_33;
        }
        v30 = *((_QWORD *)v22 + 1);
        if ( ((v8 + 1) & 2) != 0 )
        {
          v31 = v30 + 120;
          v32 = *(_QWORD **)(v30 + 128);
          if ( *v32 != v31 )
            __fastfail(3u);
          *v28 = v31;
          *((_QWORD *)v22 + 5) = v32;
          *v32 = v28;
          *(_QWORD *)(v31 + 8) = v28;
LABEL_33:
          *((_WORD *)v22 + 24) |= 0x40u;
          goto LABEL_34;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 48), 1LL, 17LL) != 17 )
          break;
        v8 = 1;
        *(_QWORD *)(v30 + 56) = KeGetCurrentThread();
      }
      sub_140AB4300(*((_QWORD *)v22 + 1));
      sub_1407C0854(*((_QWORD *)v22 + 1));
      v8 = 1;
    }
    while ( !sub_140720F74(a6) );
    v17 = -1073741444;
    sub_14068038C(a3, 132352, -1073741444);
    v34 = 1;
  }
LABEL_35:
  if ( v27 )
    ObfDereferenceObject((PVOID)(v27 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v34 )
    goto LABEL_47;
  return (unsigned int)v17;
}
