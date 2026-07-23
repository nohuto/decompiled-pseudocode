/*
 * XREFs of sub_140B050A8 @ 0x140B050A8
 * Callers:
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D9D04 @ 0x1402D9D04 (sub_1402D9D04.c)
 *     sub_1402DC0E8 @ 0x1402DC0E8 (sub_1402DC0E8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406E7320 @ 0x1406E7320 (sub_1406E7320.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 *     sub_140B05360 @ 0x140B05360 (sub_140B05360.c)
 *     sub_140B05434 @ 0x140B05434 (sub_140B05434.c)
 *     sub_140B05620 @ 0x140B05620 (sub_140B05620.c)
 *     sub_140B058D4 @ 0x140B058D4 (sub_140B058D4.c)
 *     sub_140B52A10 @ 0x140B52A10 (sub_140B52A10.c)
 *     sub_140B52AA8 @ 0x140B52AA8 (sub_140B52AA8.c)
 */

__int64 __fastcall sub_140B050A8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r14d
  PIMAGE_NT_HEADERS v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r15
  __int64 result; // rax
  __int64 **v12; // r8
  unsigned __int64 v13; // r11
  char v14; // bl
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rbp
  int v20; // ecx
  __int64 v21; // r14
  unsigned __int64 v22; // r14
  unsigned int v23; // esi
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 ***v27; // rdx
  __int64 **i; // rcx
  unsigned __int64 v29; // rax
  BOOL v30; // ebp
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v40; // eax
  bool v41; // zf
  PVOID v42; // rcx
  __int64 v43; // [rsp+30h] [rbp-88h]
  int v44; // [rsp+38h] [rbp-80h]
  int v45; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-70h]
  __int64 v47; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-60h]
  PIMAGE_NT_HEADERS v49; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-50h]
  __int64 v54; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = a2;
  v5 = (unsigned int)dword_140C4F478 >> 12;
  LODWORD(v54) = (unsigned int)dword_140C4F478 >> 12;
  v44 = dword_140C4F404;
  v50 = v3;
  v6 = RtlImageNtHeader((PVOID)v3);
  v7 = *(unsigned int *)(v4 + 64);
  v8 = (__int64)v6;
  v49 = v6;
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = v10;
  v43 = (unsigned int)v9;
  v46 = v10 + 8LL * (unsigned int)v9;
  result = sub_1402FDD20(v3);
  if ( (_DWORD)result )
  {
    result = ((_DWORD)v9 + 511) & 0xFFFFFE00;
    LODWORD(v9) = result;
    v5 = (v5 + 511) & 0xFFFFFE00;
    v43 = result;
    LODWORD(v54) = v5;
    v13 = v10 + 8 * result;
    v46 = v13;
  }
  else
  {
    v13 = v46;
  }
  v14 = 4;
  v15 = 2LL;
  if ( !dword_140C4F478 )
    goto LABEL_4;
  result = a1;
  v12 = 0LL;
  v27 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 3784LL);
  for ( i = *v27; i != (__int64 **)v27; i = (__int64 **)*i )
  {
    result = *((unsigned int *)i + 10);
    v12 = i;
    if ( (result & 1) != 0 && (i[9] == (__int64 *)v4 || i[10] == (__int64 *)v4) )
      break;
  }
  if ( i != (__int64 **)v27
    && v12
    && (v29 = 8LL * *((unsigned int *)v12 + 11),
        v30 = (v29 & 0xFFF) != 0,
        result = v29 >> 12,
        v16 = (unsigned int)(2 * (result + v30)),
        (_DWORD)v16) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v12 = (__int64 **)((-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v15 + 20));
      *(_DWORD *)(v15 + 20) = (_DWORD)v12;
    }
    if ( v13 < v13 + 8 * v16 )
    {
      v32 = v13 + 8 * v16;
      v33 = v13;
      do
      {
        v47 = sub_140317A10(v33);
        v37 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v47) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v45 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v45, v34, v35, v36);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        if ( !sub_140277C50(v37) )
          ++qword_140C53530;
        *(_WORD *)(v37 + 32) = 3;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v33 += 8LL;
      }
      while ( v33 < v32 );
      v4 = a2;
      v14 = 4;
      v3 = v50;
      v10 = v48;
      v5 = v54;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v41 = (v40 & *(_DWORD *)(v15 + 20)) == 0;
          v12 = (__int64 **)((unsigned int)v40 & *(_DWORD *)(v15 + 20));
          *(_DWORD *)(v15 + 20) = (_DWORD)v12;
          if ( v41 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    _InterlockedExchangeAdd64(&qword_140C50848, (unsigned int)v16);
    v42 = *(PVOID *)(v4 + 48);
    if ( v42 == qword_140D068F0 || v42 == qword_140D06988 )
    {
      result = qword_140C53528 - (unsigned int)v16;
      qword_140C53528 = result;
    }
    else
    {
      result = (unsigned int)_InterlockedExchangeAdd(&dword_140C53550, -(int)v16);
    }
    v13 = v46;
    v8 = (__int64)v49;
  }
  else
  {
LABEL_4:
    v16 = 0LL;
  }
  v17 = v13 + 8 * v16;
  v18 = v5 - v16;
  if ( (PVOID)v3 != qword_140D068F0 && (PVOID)v3 != qword_140D06988 )
    v18 += v44;
  if ( v18 )
    result = sub_140B05620(v3, v17, v18, 1, a3);
  if ( (PVOID)v3 != qword_140D068F0 && (PVOID)v3 != qword_140D06988 )
  {
    v19 = 0LL;
    *(_QWORD *)(v8 + 48) = v3;
    if ( (*(_DWORD *)(v4 + 104) & 0x800000) == 0 )
    {
      if ( (*(_BYTE *)(v8 + 22) & 1) != 0
        || *(_DWORD *)(v8 + 132) <= 5u
        || (v20 = *(_DWORD *)(v8 + 176)) != 0 && (unsigned int)(*(_DWORD *)(v8 + 180) + v20) > *(_DWORD *)(v4 + 64) )
      {
        v21 = v43;
        v14 = 0;
      }
      else
      {
        result = sub_140B058D4(v4, v17, v12, v15);
        if ( (_DWORD)result
          && !v5
          && (result = sub_1406E7320((PCUNICODE_STRING)(v4 + 88)), (_DWORD)result)
          && (sub_1402DC0E8((PCUNICODE_STRING)(v4 + 88), v3, 0xFFFFFFFFLL),
              v14 = 6,
              result = (__int64)sub_14098325C(0LL, v9, (const void *)v3),
              (v19 = result) != 0) )
        {
          v14 = 7;
          sub_140B52A10(a1, v4, v3, result, v8, v9);
          v21 = v43;
          sub_140B05620(v3, v10, v43, 0, a3);
          result = sub_140B52AA8(v3, (unsigned int)(v9 + v44));
        }
        else
        {
          v21 = v43;
        }
        if ( (v14 & 1) != 0 )
        {
LABEL_28:
          if ( (v14 & 2) != 0 )
          {
            result = sub_1402D9D04((PCUNICODE_STRING)(v4 + 88), v19);
            if ( (_DWORD)result )
              *(_DWORD *)(v4 + 104) |= 0x100000u;
          }
          return result;
        }
      }
      v49 = 0LL;
      v22 = v10 + 8 * v21;
      v19 = v3;
      v48 = v3;
      v23 = 0;
      if ( v10 < v22 )
      {
        do
        {
          v54 = sub_140317A10(v10);
          v24 = sub_140317A10((unsigned __int64)&v54);
          result = sub_140277C50(48 * ((v24 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          if ( !(_DWORD)result )
          {
            v26 = sub_140B05360(v23, v8, v25, &v49);
            result = sub_14079D08C(&StartContext, v26, 1);
            if ( result != -1 )
              result = sub_140B05434(v10, result);
          }
          v10 += 8LL;
          v23 += 4096;
        }
        while ( v10 < v22 );
        v4 = a2;
        v19 = v48;
      }
      goto LABEL_28;
    }
  }
  return result;
}
