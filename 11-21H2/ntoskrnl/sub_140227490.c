/*
 * XREFs of sub_140227490 @ 0x140227490
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 * Callees:
 *     sub_140227DF0 @ 0x140227DF0 (sub_140227DF0.c)
 *     sub_140227E94 @ 0x140227E94 (sub_140227E94.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402297E4 @ 0x1402297E4 (sub_1402297E4.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14026C038 @ 0x14026C038 (sub_14026C038.c)
 *     sub_14026ED6C @ 0x14026ED6C (sub_14026ED6C.c)
 *     sub_14026EDC4 @ 0x14026EDC4 (sub_14026EDC4.c)
 *     sub_1402708F4 @ 0x1402708F4 (sub_1402708F4.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273250 @ 0x140273250 (sub_140273250.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_1405B6108 @ 0x1405B6108 (sub_1405B6108.c)
 *     sub_1405B6318 @ 0x1405B6318 (sub_1405B6318.c)
 */

__int64 __fastcall sub_140227490(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter2,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned __int8 v11; // r14
  __int64 v12; // r9
  ULONG_PTR *v13; // rsi
  ULONG_PTR **v14; // rdx
  ULONG_PTR *v15; // rax
  char v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // r13
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // r10
  char v33; // r14
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // r11
  unsigned __int64 v42; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v44; // rdx
  bool v45; // zf
  signed __int32 v46; // eax
  __int64 v47; // r11
  char v48; // dl
  char v49; // [rsp+20h] [rbp-78h]
  char v50; // [rsp+21h] [rbp-77h]
  char v51; // [rsp+22h] [rbp-76h]
  unsigned int v52; // [rsp+24h] [rbp-74h]
  __int64 v53; // [rsp+28h] [rbp-70h] BYREF
  ULONG_PTR *v54; // [rsp+30h] [rbp-68h]
  ULONG_PTR *v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h]
  __int64 v57; // [rsp+48h] [rbp-50h]
  ULONG_PTR *v58; // [rsp+50h] [rbp-48h] BYREF
  __int64 v61; // [rsp+A8h] [rbp+10h]
  __int64 *v62; // [rsp+A8h] [rbp+10h]
  int v65; // [rsp+C0h] [rbp+28h]
  int v66; // [rsp+C0h] [rbp+28h]

  v53 = 0LL;
  v52 = *(_DWORD *)(a5 + 40) & 0x1F;
  v8 = sub_1402CCC50(((a5 + 48) << 16) | 0x400, a2) | 0x800;
  v56 = v8;
  v10 = (__int64)(*(_QWORD *)(v9 + 56) << 25) >> 16;
  v49 = 0;
  v11 = 1;
  v50 = 1;
  v13 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v12 + 174));
  v55 = v13;
  v15 = *v14;
  v54 = v15;
  v58 = v15;
  if ( a8 == -1 )
  {
    v16 = 1;
    v50 = 1;
    if ( v15 != v13 )
    {
      v49 = 1;
      if ( !(unsigned int)sub_1405B6108(v15, 1LL) )
        goto LABEL_29;
      v16 = 0;
      v50 = 0;
    }
    v17 = sub_140273AF0(a5 + 48, 0LL);
    v19 = v17;
    v57 = v17;
    if ( v17 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        LOBYTE(v18) = 17;
        sub_140334790(v17, v18);
      }
      else
      {
        if ( a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
          && v13 == *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
          && (unsigned int)sub_140227DF0(a2, a4, BugCheckParameter2, a1)
          && (sub_1402708F4(a5 + 48, 1LL, &v53), (v20 = v53) != 0) )
        {
          if ( (*(_BYTE *)(v53 + 35) & 0x40) == 0
            && !(unsigned int)sub_140273354(v53)
            && v54 == *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL))
            && ((*(_BYTE *)(v20 + 34) & 7) == 6 || (*(_BYTE *)(v20 + 34) & 0x20) == 0)
            && (v61 = sub_1402CC7C0(0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL),
                v51 = sub_140273250(v61, v10),
                LOBYTE(v21) = 17,
                sub_1402BEDD0(v61, v21, 0x80000000LL),
                v51)
            && (**(_BYTE **)(a3 + 56) & 1) != 0
            && ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) == v52 )
          {
            if ( (sub_140326870(BugCheckParameter2) & 3) == 0 )
            {
              *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
              v22 = sub_140273234(BugCheckParameter2);
              sub_14027428C(v20, v22, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              sub_140227E94(v19);
              if ( !v16 && _InterlockedIncrement64((volatile signed __int64 *)(a5 + 56)) != 1 )
                sub_1405B6318(v54, 1LL);
              v23 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
              v24 = (__int64 *)(sub_1402CC7C0(v23, 0LL, 0x80000000LL) + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
              v65 = 0;
              if ( !(unsigned int)sub_140317A80(v24) )
                goto LABEL_19;
              if ( (unsigned int)sub_140229550(v26, v25) )
              {
                v65 = 1;
                if ( !HIBYTE(word_140C51864) )
                {
LABEL_123:
                  if ( (v8 & 1) != 0 )
                    v8 |= 0x8000000000000000uLL;
                }
              }
              else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
              {
                goto LABEL_123;
              }
LABEL_19:
              *v24 = v8;
              if ( v65 )
                sub_1402294F0(v24, v8);
              LOBYTE(v25) = 17;
              sub_1402BEDD0(v24, v25, 0x80000000LL);
              *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
              sub_140338500(
                BugCheckParameter2,
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
              sub_140239060(48 * v23 - 0x220000000000LL);
              sub_140273FD0(48 * v23 - 0x220000000000LL);
              _InterlockedAnd64((volatile signed __int64 *)(48 * v23 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
              if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1272LL),
                  0xFFFFFFFFFFFFFFFFuLL);
              return 1LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            sub_140227E94(v19);
            sub_1403941B0(BugCheckParameter2, 0LL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            sub_140227E94(v19);
          }
        }
        else
        {
          sub_140227E94(v19);
        }
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    goto LABEL_28;
  }
  v53 = 48 * a8 - 0x220000000000LL;
  if ( (unsigned int)sub_14026C038(a8, v53, BugCheckParameter2, v10) )
  {
    v28 = sub_1402E4D28(a8, v52);
    v56 = (a5 + 48) & 0x7FFFFFFFFFFFFFFFLL;
    v29 = 0LL;
    v57 = sub_14033AC10();
    if ( v54 != v55 )
    {
      if ( !(unsigned int)sub_1405B6108(v54, 0LL) )
        goto LABEL_89;
      v11 = 0;
      v50 = 0;
    }
    LODWORD(v58) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v58);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    if ( (**(_BYTE **)(a3 + 56) & 1) != 0
      && (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 1u
      && v55 == *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
      && a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
      && (unsigned int)sub_140227DF0(a2, a4, BugCheckParameter2, a1)
      && ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) == v52 )
    {
      if ( (sub_140326870(BugCheckParameter2) & 3) == 0 )
      {
        v32 = (_QWORD *)(BugCheckParameter2 + 16);
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && !(unsigned int)sub_14033FD38(*v32) )
          *(_BYTE *)(BugCheckParameter2 + 34) = v48 | 0x10;
        LOBYTE(v31) = 0;
        if ( (*v32 & 2) != 0 )
        {
          if ( !v11 || (unsigned int)sub_1402297E4(v55, v32, v30, v31) )
            LOBYTE(v31) = 1;
          else
            v29 = v47;
          v33 = 1;
        }
        else
        {
          if ( !v11 )
            LOBYTE(v31) = (*v32 & 4) != 0;
          v33 = 0;
        }
        if ( (_BYTE)v31 )
        {
          v29 = sub_140232694(v32, 1LL, 1LL);
          *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
          v32 = (_QWORD *)(BugCheckParameter2 + 16);
        }
        if ( v33 )
          *v32 &= ~2uLL;
        v34 = 48 * v57 - 0x220000000000LL;
        sub_140239060(v34);
        *(_QWORD *)(v34 + 24) ^= (((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v34 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        sub_140239060(v53);
        sub_1402E5708(v53, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL);
        sub_1402E8154(v53, BugCheckParameter2);
        if ( (unsigned int)sub_140273234(v53) < 5 )
          *(_BYTE *)(v53 + 35) = *(_BYTE *)(v53 + 35) & 0xF8 | 5;
        v35 = v53;
        *(_QWORD *)(v53 + 8) = v56;
        *(_QWORD *)(v35 + 40) |= 0x8000000000000000uLL;
        sub_14033C3E0(v35, v57);
        *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
        sub_14026ED6C(v35 + 16);
        if ( !v50 )
          *(_QWORD *)(a5 + 56) = 1LL;
        *(_QWORD *)(a5 + 48) = 0LL;
        if ( (unsigned int)sub_140317A80(a5 + 48) )
        {
          if ( (unsigned int)sub_140229550(v37, v36) )
          {
            v38 = 1;
            if ( !HIBYTE(word_140C51864) && (v28 & 1) != 0 )
              v28 |= 0x8000000000000000uLL;
          }
          else
          {
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v28 & 1) != 0 )
              v28 |= 0x8000000000000000uLL;
            v38 = 0;
          }
        }
        else
        {
          v38 = 0;
        }
        *(_QWORD *)(a5 + 48) = v28;
        if ( v38 )
          sub_1402294F0(a5 + 48, v28);
        v56 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
        v62 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + sub_1402CC7C0(v56, 0LL, 0x80000000LL));
        v66 = 0;
        if ( !(unsigned int)sub_140317A80(v62) )
          goto LABEL_61;
        if ( (unsigned int)sub_140229550(v40, v39) )
        {
          v66 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
LABEL_105:
            if ( (v8 & 1) != 0 )
              v8 |= 0x8000000000000000uLL;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          goto LABEL_105;
        }
LABEL_61:
        v41 = v62;
        *v62 = v8;
        if ( v66 )
          sub_1402294F0(v62, v8);
        LOBYTE(v39) = 17;
        sub_1402BEDD0(v41, v39, 0x80000000LL);
        *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
        sub_14026EDC4(v53, a7);
        sub_140338500(v53, a8);
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v50 )
        {
          if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
          {
            *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
            if ( v29 )
              v29 &= ~4uLL;
          }
        }
        *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
        sub_140338500(
          BugCheckParameter2,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v50 )
          goto LABEL_72;
        sub_14028CE10(v55, 1LL);
        v42 = 1LL;
        if ( v55 != &StartContext )
          goto LABEL_82;
        CurrentPrcb = KeGetCurrentPrcb();
        v44 = *((int *)CurrentPrcb + 8615);
        if ( (_DWORD)v44 == -1 )
          goto LABEL_82;
        if ( (unsigned __int64)(v44 + 1) <= 0x100 )
        {
          do
          {
            v46 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v44 + 1, v44);
            v45 = (_DWORD)v44 == v46;
            LODWORD(v44) = v46;
            if ( v45 )
              goto LABEL_70;
          }
          while ( v46 != -1 && (unsigned __int64)(v46 + 1LL) <= 0x100 );
        }
        if ( (int)v44 > 192
          && (_DWORD)v44 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v44) )
        {
          v42 = (int)v44 - 192 + 1LL;
        }
        if ( v42 )
LABEL_82:
          _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 2120, v42);
LABEL_70:
        if ( v54 == &StartContext )
          _InterlockedExchangeAdd64(&qword_140C53530, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_72:
        sub_140228660(48 * v56 - 0x220000000000LL, 0LL);
        if ( v29 )
          sub_1402E20D0(v55, v29, 1LL);
        goto LABEL_22;
      }
      sub_1403941B0(BugCheckParameter2, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_89:
    v11 = 0;
    goto LABEL_29;
  }
LABEL_28:
  v11 = v49;
LABEL_29:
  if ( !v50 )
    sub_1405B6318(v54, v11);
  return 0LL;
}
