/*
 * XREFs of sub_1402C6AA0 @ 0x1402C6AA0
 * Callers:
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C15F0 @ 0x1402C15F0 (sub_1402C15F0.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403D5CF4 @ 0x1403D5CF4 (sub_1403D5CF4.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     sub_14058D990 @ 0x14058D990 (sub_14058D990.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_140B04C20 @ 0x140B04C20 (sub_140B04C20.c)
 *     sub_140B0681C @ 0x140B0681C (sub_140B0681C.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 */

__int64 __fastcall sub_1402C6AA0(__int64 a1, int a2, int a3, int a4, __int64 a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r15
  char v13; // r13
  ULONG_PTR v14; // rdi
  unsigned __int8 CurrentIrql; // cl
  char v16; // al
  char v17; // al
  __int64 v18; // rax
  bool v19; // zf
  __int64 result; // rax
  __int64 v21; // r15
  unsigned __int8 v22; // r10
  __int64 v23; // r9
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v33; // [rsp+20h] [rbp-58h]
  __int128 v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-38h]
  unsigned __int64 v36; // [rsp+48h] [rbp-30h]
  unsigned __int8 v37; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+88h] [rbp+10h] BYREF

  v10 = qword_14001C780[a2];
  v11 = a1 + 48 * v10;
  v12 = 0x3FFFFFFFFFLL;
  v13 = 0;
  v14 = v10 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  if ( a3 == 1 )
  {
    v13 = (a4 != 0) + 1;
    if ( a6 )
      *a6 = 0LL;
    if ( a7 )
      *a7 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    v11 -= 48LL;
    v38 = 0;
    --v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v38);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v16 = *(_BYTE *)(v11 + 34);
    *(_BYTE *)(v11 + 35) &= 0xF8u;
    v17 = v16 & 0xEF;
    *(_BYTE *)(v11 + 34) = v17;
    if ( v11 != a1 )
    {
      *(_BYTE *)(v11 + 34) = v17 ^ (v17 ^ *(_BYTE *)(a1 + 34)) & 7;
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1 + 16);
    }
    v18 = *(_QWORD *)(v11 + 40);
    *(_BYTE *)(v11 + 36) &= 0xFCu;
    v35 = 0LL;
    v36 = v18 & 0xFFFFFEFFFFFFFFFFuLL;
    v33 = 0LL;
    v34 = 0LL;
    *(_QWORD *)(v11 + 40) = v18 & 0xFFFFFEFFFFFFFFFFuLL;
    if ( a4 <= 1 )
    {
      *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
      v19 = *(_WORD *)(v11 + 32) == 2;
      *(_WORD *)(v11 + 32) -= 2;
      if ( v19 )
      {
        _InterlockedOr(v32, 0);
        *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ ((unsigned __int64)(unsigned int)dword_140D31080 << 59)) & 0x3800000000000000LL;
      }
    }
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( v11 == a5 )
        {
          *(_QWORD *)v11 = 0LL;
          *(_QWORD *)(v11 + 8) |= 0x8000000000000000uLL;
          *(_QWORD *)(v11 + 16) = 0LL;
          if ( (v13 & 1) != 0 )
          {
            if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
              sub_1405AD468(v14);
          }
          else
          {
            sub_1402E89B0(v11 + 16, 0xC000000000000000uLL, 0LL);
          }
        }
        else
        {
          if ( a7 && (*(_BYTE *)(v11 + 35) & 0x40) != 0 )
            ++*a7;
          if ( *(_WORD *)(v11 + 32) )
          {
            if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
              *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
            *(_BYTE *)(v11 + 34) |= 7u;
          }
          else
          {
            if ( a6 )
              ++*a6;
            sub_1402C6EB0(v14);
          }
        }
      }
      else if ( a3 == 2 )
      {
        v21 = *(_QWORD *)(v11 + 24) ^ v12;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 24) ^= v21 & 0xFFFFFFFFFFLL;
        v12 = v14;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v14 & 0xF) == 0 && v37 < 2u && KeShouldYieldProcessor() )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = *((_QWORD *)CurrentPrcb + 4375);
          v26 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v19 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(v37);
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v22 <= 0xFu )
      {
        v27 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v27 + 20) |= (-1 << (v22 + 1)) & 4;
      }
      v37 = v22;
    }
  }
  while ( v11 != a1 );
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && v37 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = *((_QWORD *)v29 + 4375);
        v31 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v19 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v19 )
          sub_140418E4C(v29);
      }
    }
  }
  result = v37;
  __writecr8(v37);
  return result;
}
