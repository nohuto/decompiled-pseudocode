/*
 * XREFs of sub_14027A1F0 @ 0x14027A1F0
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140234EB4 @ 0x140234EB4 (sub_140234EB4.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140236E68 @ 0x140236E68 (sub_140236E68.c)
 *     sub_140239F04 @ 0x140239F04 (sub_140239F04.c)
 *     sub_14027A818 @ 0x14027A818 (sub_14027A818.c)
 *     sub_14027A9D0 @ 0x14027A9D0 (sub_14027A9D0.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 *     sub_14027B334 @ 0x14027B334 (sub_14027B334.c)
 *     sub_14027D364 @ 0x14027D364 (sub_14027D364.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CD940 @ 0x1402CD940 (sub_1402CD940.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14027A1F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int8 v13; // r14
  int v14; // r8d
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 result; // rax
  int v20; // ebx
  int v21; // edi
  __int64 v22; // r12
  ULONG_PTR v23; // rcx
  unsigned __int64 v24; // rcx
  int v25; // edx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rbx
  _BYTE *v32; // r8
  BOOL v33; // edx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  bool v36; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v39; // r9
  int v40; // eax
  _QWORD *v41; // rdx
  __int64 v43; // [rsp+0h] [rbp-70h]
  _BYTE v44[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v45; // [rsp+50h] [rbp-20h]
  unsigned __int8 v46; // [rsp+70h] [rbp+0h]
  __int64 v47; // [rsp+78h] [rbp+8h]
  __int64 v48; // [rsp+80h] [rbp+10h]
  _BYTE *v49; // [rsp+88h] [rbp+18h] BYREF
  __int64 v50; // [rsp+90h] [rbp+20h] BYREF
  __int64 v51; // [rsp+98h] [rbp+28h]
  __int64 v52; // [rsp+A0h] [rbp+30h]

  v2 = *(_QWORD *)(a2 + 152);
  v4 = *(_QWORD *)a1;
  v50 = 0LL;
  v6 = 0;
  v52 = v2;
  *(_QWORD *)(a2 + 224) = v4;
  v7 = sub_1402CD940(a1, v4);
  v8 = *(__int64 **)(a2 + 208);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  v10 = sub_14027A818(a2, v7);
  v47 = *(_QWORD *)(a1 + 56);
  v48 = *(_QWORD *)(a1 + 72);
  sub_14027A9D0(a1 + 56);
  LOBYTE(v11) = 1;
  v46 = *(_BYTE *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
    sub_14030FA80(v47, v11);
  else
    sub_1402B0CE0(v47, v11);
  v47 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 200) = v10;
    v6 = (*(_DWORD *)(v9 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v12 = *(_QWORD *)(a1 + 16);
  if ( (v12 & 1) == 0 || *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v2 + 1390);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v2 + 486);
  else
    --*(_WORD *)(v2 + 484);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v13 = v46;
    if ( v46 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v39 = *((_QWORD *)CurrentPrcb + 4375);
      v40 = ~(unsigned __int16)(-1LL << (v46 + 1));
      v36 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
      *(_DWORD *)(v39 + 20) &= v40;
      if ( v36 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v13 = v46;
  }
  __writecr8(v13);
  v14 = *(_DWORD *)(a2 + 312);
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    v23 = *(_QWORD *)(a2
                    + 8LL * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                    + 312);
    sub_1402359C4(v23, 3, *(unsigned __int8 *)(48 * v23 - 0x220000000000LL + 34) >> 6);
    v14 = *(_DWORD *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v14;
  v49 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v6 = 2;
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 192);
    if ( (v15 & 0x200108) != 0x200008 )
    {
      if ( ((xmmword_140D06900 & 0x2000) != 0 || (dword_140CF5E54 & 1) != 0) && (v15 & 0x100) == 0 && (v15 & 8) == 0 )
      {
        v28 = *(_QWORD *)(a2 + 96);
        v29 = *(_QWORD *)(a2 + 224);
        v43 = *(_QWORD *)(a2 + 200);
        v49 = v44;
        sub_14027B334((unsigned int)v44, v28, v14, v29, v43, v2);
      }
      v30 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v30 + 187) & 0x60) == 0x60 && !*(_QWORD *)(sub_140282AD0(v30) + 32) )
        sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess);
      v6 |= 2u;
      sub_14027AEA0(a2, v6 & 1, *(_QWORD *)(a1 + 16));
    }
  }
  v16 = *(_QWORD *)(a1 + 16);
  if ( (v16 & 1) != 0 )
  {
    v24 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v24 == 1 )
    {
      v25 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 184LL);
      if ( (v25 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v25 - 2)) & 6;
      if ( v6 < 2 )
      {
        v41 = *(_QWORD **)(v24 + 64);
        if ( *v41 == v24 + 56 )
        {
          *(_QWORD *)a2 = v24 + 56;
          *(_QWORD *)(a2 + 8) = v41;
          *v41 = a2;
          *(_QWORD *)(v24 + 64) = a2;
          *(_QWORD *)(v24 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_44;
        }
      }
      else
      {
        v26 = *(_QWORD **)(v24 + 48);
        v27 = v24 + 40;
        if ( *v26 == v27 )
        {
          *(_QWORD *)a2 = v27;
          *(_QWORD *)(a2 + 8) = v26;
          *v26 = a2;
          *(_QWORD *)(v27 + 8) = a2;
LABEL_44:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
          {
            v36 = (*(_WORD *)(v2 + 486))++ == 0xFFFF;
            if ( v36 && *(_QWORD *)(v2 + 152) != v2 + 152 )
              KiCheckForKernelApcDelivery();
          }
          else
          {
            sub_1402AC800(v2);
          }
          sub_14027D364(a1 + 56, v48);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v17 = *(_QWORD *)(a2 + 248);
  v18 = *(_QWORD *)(a2 + 232);
  if ( !_bittest64((const signed __int64 *)(v17 + 40), 0x28u) && *(__int64 *)(v17 + 8) > 0 )
    v17 = 0LL;
  sub_14027AA30(a1, a2, &v49);
  result = sub_140334C40(a1, v48, a2, &v50, v45);
  v20 = (int)v49;
  v21 = result;
  --*(_BYTE *)(v2 + 1390);
  LODWORD(v48) = v20;
  if ( !(_DWORD)result )
  {
    if ( !v17 )
      v17 = 48 * (((unsigned __int64)sub_140317A10(&v50) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v22 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v17 + 40) < 0 )
    {
      v18 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = sub_1403203D0(a1, v50, v22, 0, v47);
      if ( v21 >= 0 )
        goto LABEL_26;
      return (unsigned int)v21;
    }
    v51 = v47 & 1;
    if ( (v47 & 1) != 0 && *(_BYTE *)(v47 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v35 = sub_140317A10(v18) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( !(unsigned int)sub_140317A80(v18) )
      {
LABEL_72:
        *(_QWORD *)v18 = v35;
        goto LABEL_58;
      }
      if ( !(unsigned int)sub_140229550() )
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v35 & 1) != 0 )
          v35 |= 0x8000000000000000uLL;
        goto LABEL_72;
      }
      if ( !HIBYTE(word_140C51864) && (v35 & 1) != 0 )
        v35 |= 0x8000000000000000uLL;
      *(_QWORD *)v18 = v35;
      sub_1402294F0(v18, v35);
    }
LABEL_58:
    v31 = sub_140234EB4(v18);
    if ( (unsigned int)sub_140239F04((_QWORD *)(v17 + 16)) )
      v31 |= 0x40uLL;
    if ( v22 )
    {
      if ( sub_140236E68(v31, *(_QWORD *)a1) && (v31 & 0x800) != 0 )
      {
        v31 |= 0x42uLL;
        if ( (*(_BYTE *)(v17 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)sub_1402E76C0(v17 + 16) )
            sub_14033E534(v17, 1LL);
        }
      }
    }
    v32 = (_BYTE *)(v47 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v51 )
      goto LABEL_62;
    if ( *v32 != 4 )
    {
      if ( *v32 == 5 )
      {
        v34 = v47 & 0xFFFFFFFFFFFFFFFEuLL;
        v33 = 0;
LABEL_64:
        if ( (unsigned int)sub_140322F10(*(_QWORD *)(a1 + 56), v18, v17, 0, v31, v33, v34) )
        {
          v20 = v48;
LABEL_26:
          if ( dword_140C52B68 && v20 != 2 && (unsigned int)sub_1402E670C(v52) >= dword_140C52B6C )
            sub_140333040(*(_QWORD *)(a1 + 56), v18 | 1);
          if ( !v21 )
            return 276;
          return (unsigned int)v21;
        }
        sub_140228660(v17, 0);
        return (unsigned int)-1073741801;
      }
LABEL_62:
      v33 = 0;
      v34 = 0LL;
      if ( v51 )
        v33 = *v32 == 3;
      goto LABEL_64;
    }
    if ( (unsigned int)sub_140317A80(v18) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v31 & 1) != 0 )
          v31 |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = v31;
        sub_1402294F0(v18, v31);
        return 276LL;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v31 & 1) != 0 )
        v31 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v18 = v31;
    return 276LL;
  }
  return result;
}
