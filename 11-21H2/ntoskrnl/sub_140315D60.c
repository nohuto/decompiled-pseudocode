/*
 * XREFs of sub_140315D60 @ 0x140315D60
 * Callers:
 *     sub_140239CA8 @ 0x140239CA8 (sub_140239CA8.c)
 *     sub_14023EE78 @ 0x14023EE78 (sub_14023EE78.c)
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14032E970 @ 0x14032E970 (sub_14032E970.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 *     sub_14045BFE4 @ 0x14045BFE4 (sub_14045BFE4.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140581640 @ 0x140581640 (sub_140581640.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 */

__int64 __fastcall sub_140315D60(ULONG_PTR BugCheckParameter2, _BYTE *a2, char a3)
{
  unsigned int v3; // r15d
  ULONG_PTR v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  signed __int8 v14; // al
  unsigned __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  __int64 v27; // r8
  int v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = sub_140317A10(BugCheckParameter2);
      if ( (unsigned __int64)a2 > 1 && ((v7 & 1) != 0 || (v7 & 0x400) != 0) || (v7 & 0x800) == 0 )
        return 0LL;
      if ( (v7 & 1) == 0 && (!v7 || !qword_140C50780 || (qword_140C50780 & v7) != 0) )
      {
        v10 = v7;
        if ( qword_140C50780 )
        {
          if ( (v7 & 0x10) != 0 )
            v10 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v10 = v7 & ~qword_140C50780;
        }
        v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v11 <= qword_140C50840 )
        {
          v12 = 6 * v11;
          if ( _bittest64((const signed __int64 *)(48 * v11 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v13 = 48 * v11 - 0x220000000000LL;
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = sub_1402F2700(v13);
    }
    else
    {
      v14 = _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL);
      if ( a2 == (_BYTE *)1 )
      {
        if ( v14 )
          return 0LL;
      }
      else
      {
        v28 = 0;
        if ( v14 )
        {
          do
          {
            do
              sub_1402F32E0(&v28, v12, v8, v9);
            while ( *(__int64 *)(v13 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        }
      }
    }
    if ( sub_140317A10(BugCheckParameter2) == v7 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v16 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = *((_QWORD *)CurrentPrcb + 4375);
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
            *(_DWORD *)(v19 + 20) &= v20;
            if ( v21 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
  {
    LOBYTE(v3) = a2 == (_BYTE *)1;
    v22 = v3 | 2;
    if ( (a3 & 1) == 0 )
      v22 = v3;
    v13 = sub_14059A31C(v13, v22);
    if ( !v13 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v23 = (unsigned __int8)*a2;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
              v27 = *((_QWORD *)v25 + 4375);
              v21 = (v26 & *(_DWORD *)(v27 + 20)) == 0;
              *(_DWORD *)(v27 + 20) &= v26;
              if ( v21 )
                sub_140418E4C(v25);
            }
          }
        }
        __writecr8(v23);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && !_bittest64((const signed __int64 *)(v13 + 40), 0x28u) )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v7, *(_QWORD *)(v13 + 8));
  }
  return v13;
}
