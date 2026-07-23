/*
 * XREFs of sub_14024076C @ 0x14024076C
 * Callers:
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_14027031C @ 0x14027031C (sub_14027031C.c)
 *     sub_1402724C0 @ 0x1402724C0 (sub_1402724C0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_14027D364 @ 0x14027D364 (sub_14027D364.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_1402803FC @ 0x1402803FC (sub_1402803FC.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 */

__int64 __fastcall sub_14024076C(unsigned __int64 *a1, ULONG_PTR *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // r15
  bool v15; // zf
  __int64 *v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r14
  char v25; // al
  int v26; // ecx
  __int64 v27; // rdx
  unsigned __int64 v28; // r15
  ULONG_PTR v29; // rax
  __int64 v30; // rdx
  unsigned __int8 v31; // bl
  __int64 v32; // r15
  int v33; // eax
  __int64 v34; // rbx
  int v35; // ecx
  ULONG_PTR v36; // rbx
  unsigned int v37; // ebx
  int v38; // r12d
  unsigned __int64 v39; // r15
  __int64 v40; // rcx
  char v41; // al
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v44; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v46; // r9
  int v47; // eax
  unsigned __int8 v48; // cl
  struct _KPRCB *v49; // r10
  __int64 v50; // r9
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  __int64 v54; // r8
  int v55; // eax
  int v56; // [rsp+30h] [rbp-61h]
  __int64 v57; // [rsp+50h] [rbp-41h] BYREF
  __int64 v58; // [rsp+58h] [rbp-39h]
  __int64 v59; // [rsp+60h] [rbp-31h]
  unsigned __int64 v60; // [rsp+68h] [rbp-29h]
  __int64 v61; // [rsp+70h] [rbp-21h]
  __int64 v62; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v63; // [rsp+80h] [rbp-11h]
  unsigned __int64 v64; // [rsp+88h] [rbp-9h]
  __int64 v65[9]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 v66; // [rsp+E8h] [rbp+57h] BYREF
  ULONG_PTR *v67; // [rsp+F0h] [rbp+5Fh]
  int v68; // [rsp+F8h] [rbp+67h]
  __int64 v69; // [rsp+100h] [rbp+6Fh]

  v69 = a4;
  v68 = a3;
  v67 = a2;
  v6 = a1[7];
  CurrentThread = KeGetCurrentThread();
  v10 = *a1;
  v66 = 0;
  v15 = (*(_BYTE *)(v6 + 184) & 7) == 0;
  v11 = *((_QWORD *)CurrentThread + 23);
  v61 = v11;
  v63 = v6;
  v60 = v10;
  if ( !v15 || (v12 = *(struct _KTHREAD **)(v11 + 1248)) == 0LL )
  {
    v13 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v14 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v6 + 174));
    if ( v10 >= 0xFFFF800000000000uLL )
    {
      if ( (dword_140D06880 & 0x8000) == 0 || (dword_140D06880 & 0x2000) == 0 )
        goto LABEL_6;
      v15 = ((*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    else
    {
      v15 = (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL) & 1) == 0;
    }
    if ( !v15 )
    {
      v16 = 0LL;
      goto LABEL_7;
    }
LABEL_6:
    v16 = (__int64 *)sub_1403095B0(&qword_140C534C0, 1LL);
    if ( !v16 )
      return 3221225626LL;
LABEL_7:
    v59 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v62 = sub_140317A10(v59);
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
    v64 = v17;
    sub_140329630(v14, 1LL, 2LL);
    if ( v16 || v60 < 0xFFFF800000000000uLL )
    {
      v19 = *(_DWORD *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4)) + 8);
      v20 = sub_1402E8990(a4);
      v57 = sub_1403250B0(
              v14,
              (v20 << byte_140C506CD) | (v19 << byte_140C506CC) | dword_140C50738 & (unsigned int)v17,
              0LL);
      v21 = v57;
      if ( v57 == -1 )
      {
        v37 = -1073741670;
        goto LABEL_58;
      }
      v22 = v59;
    }
    else
    {
      LOBYTE(v18) = 1;
      v58 = sub_14027DA5C(a1 + 7, v18, &v66);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v44 = v66;
        if ( v66 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v46 = *((_QWORD *)CurrentPrcb + 4375);
          v44 = v66;
          v47 = ~(unsigned __int16)(-1LL << (v66 + 1));
          v15 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
          *(_DWORD *)(v46 + 20) &= v47;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      else
      {
        v44 = v66;
      }
      __writecr8(v44);
      v21 = sub_14079D08C(v14, v13, 0LL);
      v57 = v21;
      sub_14027D364(a1 + 7, v58);
      v22 = v59;
      if ( !(unsigned int)sub_1402803FC(a1, *a1, v59, &v62) )
      {
        v37 = -1073740748;
LABEL_58:
        if ( v21 != -1 )
          sub_140268408(48 * v21 - 0x220000000000LL);
        sub_14024AA58(v14, 1LL, 2LL);
        if ( v16 )
          sub_1402BB6D0(&qword_140C534C0, v16, 1LL);
        return v37;
      }
    }
    v23 = 48 * v21 - 0x220000000000LL;
    v24 = sub_14033C424(2LL);
    if ( v24 )
    {
      v25 = sub_1402E670C(CurrentThread);
      v26 = v60;
      v28 = (unsigned int)(v27 + 1);
      *(_DWORD *)(v24 + 192) |= 0x20u;
      *(_DWORD *)(v24 + 80) = v27;
      *(_QWORD *)(v24 + 88) = v27;
      *(_QWORD *)(v24 + 248) = v23;
      sub_1402724C0(v26, (unsigned int)&v57, v27 + 1, v22, v24, v25 & 7 | 0x48);
      if ( (*(_BYTE *)(v63 + 184) & 7) == 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 1272), (unsigned int)v28);
      v65[0] = sub_140317A10(v22);
      v58 = *v67;
      v29 = v58;
      *(_QWORD *)(v24 + 208) = v67;
      _InterlockedAdd64((volatile signed __int64 *)(v29 + 112), v28);
      LOBYTE(v30) = v28;
      v61 = sub_14027DA5C(a1 + 7, v30, &v66);
      --*((_WORD *)CurrentThread + 243);
      if ( dword_140D06B08
        && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v28) != 0
        && (v48 = KeGetCurrentIrql(), v48 <= 0xFu) )
      {
        v31 = v66;
        if ( v66 <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = *((_QWORD *)v49 + 4375);
          v31 = v66;
          v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + v66));
          v15 = (v51 & *(_DWORD *)(v50 + 20)) == 0;
          *(_DWORD *)(v50 + 20) &= v51;
          if ( v15 )
            sub_140418E4C(v49);
        }
      }
      else
      {
        v31 = v66;
      }
      __writecr8(v31);
      v32 = v57;
      sub_1402E7D60(v57, v64, 0LL, v16 != 0LL ? 73 : 17);
      if ( !v16 )
      {
        v36 = v58;
LABEL_24:
        sub_14027031C(v36, 0LL);
        v37 = 0;
        KeGetCurrentIrql();
        __writecr8(1uLL);
        v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        sub_14027D364(a1 + 7, v61);
        v38 = sub_1402803FC(a1, *a1, v59, v65);
        v39 = (unsigned __int8)sub_1402F2700(v23);
        *(_BYTE *)(v23 + 34) &= ~0x20u;
        v40 = *(_QWORD *)(v23 + 24);
        *(_QWORD *)v23 = 0LL;
        if ( (v40 & 0x4000000000000000LL) == 0 )
          *(_BYTE *)(v23 + 34) |= 0x10u;
        if ( v38 )
        {
          sub_140274508(v23, 3LL);
          v41 = *(_BYTE *)(v23 + 34) & 0xF8 | 6;
          *(_QWORD *)(v23 + 24) ^= ((*(_QWORD *)(v23 + 24) + 1LL) ^ *(_QWORD *)(v23 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v23 + 34) = v41;
          if ( !v16 && v60 >= 0xFFFF800000000000uLL )
            *(_BYTE *)(v23 + 35) |= 8u;
        }
        else
        {
          v37 = -1073740748;
        }
        sub_140336AD8(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v52 >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = *((_QWORD *)v53 + 4375);
              v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
              v15 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
              *(_DWORD *)(v54 + 20) &= v55;
              if ( v15 )
                sub_140418E4C(v53);
            }
          }
        }
        __writecr8(v39);
        *(_DWORD *)(v24 + 192) &= ~0x20u;
        if ( *(int *)(v24 + 176) > 1 )
          KeSetEvent((PRKEVENT)(v24 + 56), 0, 0);
        sub_14027456C((PSLIST_ENTRY)v24);
        return v37;
      }
      v33 = sub_14026C61C(4LL, v23);
      v34 = sub_1402CBD10(v16, v32, v33 | 0xA0000000);
      if ( (unsigned int)sub_140317A80(v16) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v35 = 1;
          if ( !HIBYTE(word_140C51864) && (v34 & 1) != 0 )
            v34 |= 0x8000000000000000uLL;
          goto LABEL_18;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v34 & 1) != 0 )
          v34 |= 0x8000000000000000uLL;
      }
      v35 = 0;
LABEL_18:
      *v16 = v34;
      if ( v35 )
        sub_1402294F0((__int64)v16, v34);
      if ( _bittest64((const signed __int64 *)(v69 + 40), 0x28u) || *(__int64 *)(v69 + 8) <= 0 )
      {
        v36 = v58;
        sub_1407BF070(v58, a5, v56, a6 | 0x24);
      }
      else
      {
        v36 = v58;
      }
      sub_1402BB6D0(&qword_140C534C0, v16, 1LL);
      goto LABEL_24;
    }
    if ( v16 )
      sub_1402BB6D0(&qword_140C534C0, v16, 1LL);
    sub_140268408(v23);
    sub_14024AA58(v14, 1LL, 2LL);
    return 3221225626LL;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
