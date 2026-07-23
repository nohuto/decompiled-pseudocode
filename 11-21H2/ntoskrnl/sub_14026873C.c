/*
 * XREFs of sub_14026873C @ 0x14026873C
 * Callers:
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1405AEA7C @ 0x1405AEA7C (sub_1405AEA7C.c)
 *     sub_1405B05D0 @ 0x1405B05D0 (sub_1405B05D0.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14026873C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v4; // r12d
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r9d
  unsigned __int8 v10; // di
  unsigned int v11; // esi
  int v12; // ebp
  int v13; // r14d
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+70h] [rbp+8h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = 1;
  result = 0xFFFFDE0000000000uLL;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = v6;
  v8 = v6 + 48 * a2;
  v23 = v6;
  v22 = v8;
  if ( v6 < v8 )
  {
    v9 = 0;
    v10 = 17;
    do
    {
      v11 = v9;
      v24 = v9;
      v12 = 1;
      v25 = v7;
      do
      {
        v13 = v12;
        if ( v11 >= 0x1000 )
          break;
        if ( v11 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v10 = sub_1402F2700(v7);
          v9 = 0;
        }
        v12 = v9;
        if ( (*(_BYTE *)(v7 + 34) & 0xC0) == 0xC0 )
          v12 = v13;
        sub_140268998(v7, a2);
        v9 = 0;
        if ( v4 && (unsigned int)sub_140268A70(v7, v3) )
          v4 = v9;
        ++v11;
        v7 += 48LL;
      }
      while ( v7 < v8 );
      if ( v12 )
      {
        a2 = v24;
      }
      else
      {
        sub_14026A230(a1, a2);
        if ( v11 < dword_140C5074C || v3 == 1 )
        {
          a2 = v24;
        }
        else
        {
          ++dword_140C50744;
          KeInvalidateAllCaches();
          a2 = 1LL;
          v24 = 1;
        }
        v9 = 0;
      }
      v7 = v25;
      v14 = v9;
      if ( v11 )
      {
        do
        {
          v15 = *(unsigned __int8 *)(v7 + 34);
          v16 = ((_BYTE)v3 << 6) | v15 & 0x3F;
          a1 = v15 >> 6;
          *(_BYTE *)(v7 + 34) = v16;
          if ( !(_DWORD)a2 && !v12 && v3 != 1 && (_DWORD)a1 == 1 )
          {
            ++dword_140C50748;
            sub_140268AB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x220000000000LL) >> 4), 1LL, v3);
            a2 = v24;
            v9 = 0;
          }
          *(_QWORD *)(v7 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
          if ( v14 < v11 - 1 )
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 += 48LL;
          ++v14;
        }
        while ( v14 < v11 );
        v8 = v22;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 - 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a1 = (unsigned int)v10 + 1;
            a2 = -1LL << (v10 + 1);
            v19 = *((_QWORD *)CurrentPrcb + 4375);
            v20 = ~(unsigned __int16)a2;
            v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
            a3 = (unsigned int)v20 & *(_DWORD *)(v19 + 20);
            *(_DWORD *)(v19 + 20) = a3;
            if ( v21 )
              sub_140418E4C(CurrentPrcb);
            v9 = 0;
          }
        }
      }
      result = v10;
      __writecr8(v10);
    }
    while ( v7 < v8 );
    v6 = v23;
    if ( !v4 )
      return sub_1402E89B0(v23 + 16, a2, a3);
  }
  *(_QWORD *)(v6 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  return result;
}
