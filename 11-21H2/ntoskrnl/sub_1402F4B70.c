/*
 * XREFs of sub_1402F4B70 @ 0x1402F4B70
 * Callers:
 *     sub_1402F4850 @ 0x1402F4850 (sub_1402F4850.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_14056FE5C @ 0x14056FE5C (sub_14056FE5C.c)
 *     KeAllocateCalloutStackEx @ 0x1406EE1C0 (KeAllocateCalloutStackEx.c)
 *     sub_140701B0C @ 0x140701B0C (sub_140701B0C.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F50C0 @ 0x1402F50C0 (sub_1402F50C0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140429870 (FirstEntrySList.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_1405A5768 @ 0x1405A5768 (sub_1405A5768.c)
 */

__int64 __fastcall sub_1402F4B70(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  ULONG_PTR *v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  unsigned __int64 v9; // r13
  struct _KPRCB *v10; // rdx
  __int64 v11; // rbx
  ULONG_PTR v12; // rbx
  ULONG_PTR v13; // r9
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  ULONG_PTR Next; // r9
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 CurrentIrql; // cl
  __int64 v30; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v38; // r8
  int v39; // eax
  struct _KPRCB *v40; // r8
  __int64 v41; // rdx
  signed __int32 v42; // eax
  unsigned __int8 v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  int v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h] BYREF
  __int64 v47; // [rsp+58h] [rbp-50h]
  PSLIST_ENTRY v48; // [rsp+60h] [rbp-48h]
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]
  char v50; // [rsp+B0h] [rbp+8h]
  int v51; // [rsp+C8h] [rbp+20h] BYREF

  v50 = a1;
  v3 = a2;
  v46 = 0LL;
  v4 = a1;
  v5 = &StartContext;
  if ( (a1 & 0x10) != 0 )
  {
    v6 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else if ( a3 )
  {
    v6 = a3;
    v5 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else
  {
    v6 = -16LL;
  }
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      v8 = 2;
      v7 = 3;
    }
    else
    {
      v7 = (unsigned __int8)byte_140C5304C;
      v8 = 0;
    }
    v9 = v7;
    v49 = v7;
    if ( (a1 & 0x10) == 0
      || (v10 = KeGetCurrentPrcb(), v8 = 1, *(unsigned __int16 *)(*((_QWORD *)v10 + 24) + 138LL) != (_DWORD)v3)
      || !*((_QWORD *)v10 + 4169)
      || v5 != &StartContext
      || (v11 = _InterlockedExchange64((volatile __int64 *)v10 + 4169, 0LL)) == 0 )
    {
      v16 = 766 * v3;
      v17 = v8;
      v47 = 766 * v3;
      while ( 1 )
      {
        v44 = v17;
        v18 = v5[2] + 32 * (v16 + v17 + 718);
        if ( FirstEntrySList((PSLIST_HEADER)v18) )
        {
          if ( v44 == 1 )
          {
            v43 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v43 = CurrentIrql;
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v30 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
          v48 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v18);
          if ( v48 )
          {
            if ( !FirstEntrySList((PSLIST_HEADER)v18) && !*(_BYTE *)(v18 + 28) )
              *(_BYTE *)(v18 + 28) = 1;
            Next = (ULONG_PTR)v48[-1].Next;
            if ( Next != ((unsigned __int64)&v48[-255] ^ qword_140C53430) )
              KeBugCheckEx(
                0x1Au,
                0x3470uLL,
                (ULONG_PTR)&v48[-255],
                Next,
                (unsigned __int64)&v48[-255] ^ qword_140C53430);
            v20 = (((unsigned __int64)&v48[-255] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v14 = (__int64)((v20 << 25) + 0x10000000) >> 16;
            v48 = (PSLIST_ENTRY)v14;
            if ( v8 != 1 )
            {
              v21 = v20 - 8LL * v7 + 8;
              do
              {
                v46 = sub_140317A10(v20);
                v23 = 48 * (((unsigned __int64)sub_140317A10(&v46) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                v51 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
                {
                  do
                    sub_1402F32E0(&v51, v22, v24, v25);
                  while ( *(__int64 *)(v23 + 24) < 0 );
                }
                v26 = sub_140317A10(v20);
                if ( v46 == v26 )
                {
                  sub_1402F50C0(v23, v6);
                  v20 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v20 >= v21 );
              v14 = (__int64)v48;
              LOBYTE(v4) = v50;
              LODWORD(v9) = v49;
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v36 = KeGetCurrentIrql();
                  if ( v36 <= 0xFu && v43 <= 0xFu && v36 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v38 = *((_QWORD *)CurrentPrcb + 4375);
                    v39 = ~(unsigned __int16)(-1LL << (v43 + 1));
                    v35 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
                    *(_DWORD *)(v38 + 20) &= v39;
                    if ( v35 )
                      sub_140418E4C(CurrentPrcb);
                  }
                }
              }
              __writecr8(v43);
            }
            goto LABEL_14;
          }
          v27 = v44;
          if ( v44 != 1 )
          {
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v31 = KeGetCurrentIrql();
                if ( v31 <= 0xFu && v43 <= 0xFu && v31 >= 2u )
                {
                  v32 = KeGetCurrentPrcb();
                  v33 = *((_QWORD *)v32 + 4375);
                  v34 = ~(unsigned __int16)(-1LL << (v43 + 1));
                  v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
                  *(_DWORD *)(v33 + 20) &= v34;
                  if ( v35 )
                    sub_140418E4C(v32);
                }
              }
            }
            __writecr8(v43);
            ++*(_DWORD *)(v18 + 20);
            goto LABEL_36;
          }
        }
        else
        {
          v27 = v44;
        }
        ++*(_DWORD *)(v18 + 20);
        if ( v27 != 1 )
          goto LABEL_36;
        v16 = v47;
        v8 = 0;
        v17 = 0LL;
      }
    }
    v12 = v11 - 4080;
    v13 = *(_QWORD *)(v12 + 4064);
    if ( v13 != (v12 ^ qword_140C53430) )
      KeBugCheckEx(0x1Au, 0x3470uLL, v12, v13, v12 ^ qword_140C53430);
    v14 = (__int64)(((v12 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
    goto LABEL_14;
  }
  v7 = 18;
  v9 = 18LL;
  if ( (a1 & 4) == 0 )
    v9 = 6LL;
LABEL_36:
  if ( !(unsigned int)sub_14032A4B0(v5, v7, (v4 >> 1) & 1) )
    return 0LL;
  v28 = sub_1403095B0(&unk_140C52F98, v7 + 1);
  v49 = v28;
  if ( !v28 )
  {
LABEL_86:
    sub_14028CE10((__int64)v5, v7);
    return 0LL;
  }
  v45 = v28;
  v14 = ((v28 << 25) + ((v7 + 1LL) << 28)) >> 16;
  if ( (v4 & 5) == 1 )
    v45 = v28 + 96;
  if ( !(unsigned int)sub_1402821F4(v5, v9, 0LL) )
    goto LABEL_85;
  if ( !(unsigned int)sub_14033B770((_DWORD)v5, v45 + 8, v9, v6, v3, v4, 0LL) )
  {
    if ( v5 == &StartContext )
    {
      v40 = KeGetCurrentPrcb();
      v41 = *((int *)v40 + 8615);
      if ( (_DWORD)v41 != -1 )
      {
        if ( v41 + v9 <= 0x100 )
        {
          do
          {
            v42 = _InterlockedCompareExchange((volatile signed __int32 *)v40 + 8615, v41 + v9, v41);
            v35 = (_DWORD)v41 == v42;
            LODWORD(v41) = v42;
            if ( v35 )
              goto LABEL_85;
          }
          while ( v42 != -1 && v42 + v9 <= 0x100 );
        }
        if ( (int)v41 > 192
          && (_DWORD)v41 == _InterlockedCompareExchange((volatile signed __int32 *)v40 + 8615, 192, v41) )
        {
          v9 += (int)v41 - 192;
        }
      }
    }
    if ( v9 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 2120, v9);
LABEL_85:
    sub_1402BB6D0((__int64)&unk_140C52F98, (_QWORD *)v49, v7 + 1);
    goto LABEL_86;
  }
  if ( v5 == &StartContext )
    _InterlockedExchangeAdd64(&qword_140C53548, v7);
LABEL_14:
  if ( (BYTE4(xmmword_140D06900) & 1) != 0 && (v4 & 8) != 0 )
    sub_1405A5768(v14 - (v7 << 12), (unsigned int)v9, 1LL);
  return v14;
}
