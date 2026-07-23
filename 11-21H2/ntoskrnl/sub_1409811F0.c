/*
 * XREFs of sub_1409811F0 @ 0x1409811F0
 * Callers:
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 *     sub_140982688 @ 0x140982688 (sub_140982688.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     sub_140586854 @ 0x140586854 (sub_140586854.c)
 *     sub_140587304 @ 0x140587304 (sub_140587304.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 *     sub_1405B2DA0 @ 0x1405B2DA0 (sub_1405B2DA0.c)
 *     sub_1405BD580 @ 0x1405BD580 (sub_1405BD580.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_1405BE614 @ 0x1405BE614 (sub_1405BE614.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_140982150 @ 0x140982150 (sub_140982150.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409811F0(ULONG_PTR *a1, __int64 a2, __int64 a3, int a4, __int16 a5, unsigned int a6)
{
  __int64 v6; // rbx
  ULONG_PTR *v7; // r13
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r15
  int v14; // r10d
  int v16; // r14d
  unsigned int v17; // edi
  unsigned int *v18; // r12
  unsigned __int64 v19; // rax
  BOOL v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  BOOL v24; // ecx
  __int64 i; // rax
  __int64 v26; // rdx
  int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // ebx
  int v31; // edi
  unsigned int v32; // edi
  bool v33; // cf
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int *v39; // r15
  int v40; // eax
  unsigned int v41; // [rsp+58h] [rbp-69h] BYREF
  BOOL v42; // [rsp+5Ch] [rbp-65h]
  unsigned int v43; // [rsp+60h] [rbp-61h]
  __int64 v44; // [rsp+68h] [rbp-59h]
  __int64 v45; // [rsp+70h] [rbp-51h]
  int v46; // [rsp+78h] [rbp-49h]
  unsigned __int64 v47; // [rsp+80h] [rbp-41h] BYREF
  __int64 v48; // [rsp+88h] [rbp-39h]
  unsigned __int64 v49; // [rsp+90h] [rbp-31h]
  __int64 v50; // [rsp+98h] [rbp-29h]
  __int64 v51; // [rsp+A0h] [rbp-21h]
  int v52; // [rsp+A8h] [rbp-19h]
  int v53; // [rsp+ACh] [rbp-15h]
  _OWORD v54[5]; // [rsp+B0h] [rbp-11h] BYREF

  v6 = 0LL;
  v7 = &StartContext;
  v47 = 0LL;
  if ( a1 )
    v7 = a1;
  v50 = 0LL;
  v9 = 0x100000;
  v53 = a5 & 0x400;
  memset(v54, 0, 32);
  if ( (a5 & 0x400) != 0 )
  {
    v10 = 1048577;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 4) & 0x40) == 0 )
      v9 = 1048577;
    v10 = v9;
  }
  v11 = v10 | 0x8000;
  v46 = a5 & 4;
  if ( (a5 & 4) == 0 )
    v11 = v10;
  v12 = v11;
  LODWORD(v12) = v11 | 0x4000;
  if ( (a5 & 0x12) != 0 )
    v12 = v11;
  v13 = 0LL;
  v14 = a5 & 0x200;
  v43 = v12;
  v44 = 0LL;
  if ( (a5 & 0x200) == 0 )
  {
    if ( (int)sub_14026A784((__int64)v7, a3, 0LL, 0) < 0 )
      return 3221225626LL;
    v12 = v43;
    v14 = 0;
  }
  v16 = 1;
  v17 = a4;
  v52 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v18 = (unsigned int *)(qword_140C506D8 + 4LL * a4 * (unsigned int)(unsigned __int16)word_140D05000);
    v48 = (__int64)&v18[(unsigned __int16)word_140D05000];
  }
  else
  {
    v18 = 0LL;
    v48 = 4LL;
  }
  v51 = 0x40000LL;
  while ( 1 )
  {
    v19 = a3 - v13;
    v49 = a3 - v13;
    if ( (unsigned __int64)(a3 - v13) < 0x200 )
      goto LABEL_53;
    v20 = 1;
    if ( (a5 & 0x60) == 0 )
      v20 = v19 < 0x40000;
    v41 = v20;
    v6 &= 0xFFFFFFFFFFC00000uLL;
    v42 = 0;
    if ( v14 )
    {
      v21 = a5 & 0x800;
      v41 = v21;
      while ( 1 )
      {
        if ( v21 )
          v22 = sub_140586854((__int64)v7, v17);
        else
          v22 = sub_14025C1B4((__int64)v7, v17, (v12 & 1) == 0, 0LL);
        v6 = v22;
        if ( (v22 & 0x3FFFFF) != 0 )
        {
          v41 = 0;
          v23 = (v22 & 0x3FFFFF) << 18;
          v24 = sub_140587304(v22);
          goto LABEL_38;
        }
        if ( ++v18 == (unsigned int *)v48 )
          break;
        v17 = *v18;
        v21 = v41;
        LOBYTE(v12) = v43;
      }
      v13 = v44;
LABEL_52:
      v19 = v49;
LABEL_53:
      v27 = a5 & 0x200;
      goto LABEL_54;
    }
    LODWORD(v45) = (a5 & 0x580) == 0;
    for ( i = sub_1403D6C20((__int64)v7, v17, &v41, v45, v12, 1, 1u);
          !i;
          i = sub_1403D6C20((__int64)v7, *v18, &v41, v45, v43, 1, 1u) )
    {
      if ( ++v18 == (unsigned int *)v48 )
        goto LABEL_52;
      v17 = *v18;
    }
    v23 = 0xAAAAAAAAAAAAAAABuLL * ((i + 0x220000000000LL) >> 4);
    if ( (*(_DWORD *)(i + 16) & 0x3E0LL) != 0 )
    {
      if ( (v43 & 1) != 0 )
      {
        LOBYTE(v24) = v42;
        goto LABEL_42;
      }
      sub_14026A28C(i, v41, 1);
    }
    v24 = 1;
LABEL_38:
    v42 = v24;
LABEL_42:
    v45 = qword_14001C780[v41];
    if ( !sub_1405BD66C(&v47, v23, v45, v24) )
      break;
    v14 = a5 & 0x200;
    if ( v7 == &StartContext && (a5 & 0x200) == 0 )
      _InterlockedExchangeAdd64(&qword_140C53530, v45);
    v13 = v45 + v44;
    v26 = a3;
    v44 = v13;
    if ( v13 == a3 )
      goto LABEL_61;
    v12 = v43;
  }
  v27 = a5 & 0x200;
  if ( (a5 & 0x200) == 0 )
  {
    v28 = sub_1402C3410(v23, v45, v42);
    v13 = v44;
    v29 = v28;
    v19 = v49;
    goto LABEL_55;
  }
  sub_1405875A0(0LL, v6, 2 * v42);
  v19 = v49;
  v13 = v44;
LABEL_54:
  v29 = v50;
LABEL_55:
  v26 = a3;
  if ( v13 != a3 )
  {
    if ( v27 )
    {
      v30 = -1073741801;
LABEL_85:
      sub_1405BE614((__int16 *)v7, &v47, 1u, 1);
      return (unsigned int)v30;
    }
    sub_1405B2DA0((__int64)v7, v19 - v29);
    if ( (a5 & 0xA2) != 0 || v29 )
    {
LABEL_82:
      v30 = -1073741670;
      goto LABEL_85;
    }
    v26 = a3;
  }
LABEL_61:
  v31 = v43 & 1 | 2;
  if ( v52 )
    v31 = v43 & 1;
  v32 = v31 | 0x10;
  v33 = v46 != 0;
  v46 = -v46;
  v34 = 0LL;
  v35 = -(__int64)v33 & 0x100000000LL;
  v48 = v35;
  if ( (a5 & 0x10) != 0 )
  {
    v32 |= 0x40u;
    v34 = 0x200000LL;
    v36 = 0x40000LL;
  }
  else
  {
    if ( (a5 & 0x40) != 0 )
    {
      v32 |= 0x40u;
      v36 = 512LL;
      v34 = 0x200000LL;
    }
    else if ( (a5 & 0x100) != 0 )
    {
      v32 |= 0x40u;
      v36 = 0x40000LL;
      v34 = 0x40000000LL;
    }
    else
    {
      v36 = 0xFFFFFLL;
    }
    v51 = v36;
  }
  if ( v13 != v26 )
  {
    while ( 1 )
    {
      v37 = v26 - v13;
      if ( v37 > v36 )
        v37 = v36;
      v38 = sub_140265428(
              (__int64)v7,
              v35,
              0xFFFFFFFFFFFFFFFFuLL,
              v34,
              v37 << 12,
              1,
              a4,
              v32,
              *((_QWORD *)KeGetCurrentThread() + 23));
      v39 = (unsigned int *)v38;
      if ( v38 )
      {
        if ( !(unsigned int)sub_1405BD580((__int64)&v47, v38, v32) )
        {
          sub_140221A30((ULONG_PTR)v39, 0);
          ExFreePoolWithTag(v39, 0);
          goto LABEL_82;
        }
        v44 += (unsigned __int64)v39[10] >> 12;
        ExFreePoolWithTag(v39, 0);
      }
      else
      {
        if ( (v32 & 0x40) == 0 )
          goto LABEL_82;
        v32 = v32 & 0xFFFFFF9F | 0x20;
      }
      v13 = v44;
      v26 = a3;
      if ( v44 == a3 )
        break;
      v35 = v48;
      v36 = v51;
    }
  }
  v40 = a5 & 0x200;
  if ( (a5 & 0x200) == 0 )
  {
    v30 = sub_140982150(a2, &v47, a3, v12);
    if ( v30 < 0 )
      goto LABEL_85;
    v40 = 0;
  }
  *(_QWORD *)&v54[0] = &v47;
  if ( v53 )
    v16 = 33;
  DWORD2(v54[1]) = v16;
  *(_OWORD *)((char *)v54 + 8) = 0LL;
  if ( v7 != (ULONG_PTR *)a2 )
  {
    v16 |= 2u;
    DWORD2(v54[1]) = v16;
  }
  if ( (a5 & 8) != 0 )
  {
    v16 |= 4u;
    DWORD2(v54[1]) = v16;
  }
  if ( v40 )
  {
    v16 |= 0x10u;
    DWORD2(v54[1]) = v16;
  }
  if ( (*((_DWORD *)v7 + 1) & 0x100) != 0 )
    DWORD2(v54[1]) = v16 | 0x400;
  return (unsigned int)sub_1405BE81C((__int16 *)v7, a2, (__int64)v54, v13, a6);
}
