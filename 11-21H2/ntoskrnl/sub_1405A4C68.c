/*
 * XREFs of sub_1405A4C68 @ 0x1405A4C68
 * Callers:
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 * Callees:
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_140591724 @ 0x140591724 (sub_140591724.c)
 *     sub_1405A473C @ 0x1405A473C (sub_1405A473C.c)
 *     sub_1405A4FB8 @ 0x1405A4FB8 (sub_1405A4FB8.c)
 */

unsigned __int64 __fastcall sub_1405A4C68(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // ebp
  __int16 v7; // bx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r12
  int v15; // esi
  unsigned __int8 CurrentIrql; // r10
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // r8
  int v23; // ecx
  char v24; // di
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned int v29; // r8d
  volatile signed __int64 *v30; // rsi
  unsigned __int64 v31; // rax
  _DWORD v33[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp+20h]

  v3 = qword_140C52BC8;
  v4 = 0;
  v7 = a1;
  if ( !qword_140C52BC8 || !(unsigned int)sub_1405A473C(a1, 1LL) )
    return 0LL;
  v12 = 2LL;
  v13 = v9 >> 12;
  v14 = v3 << 25 >> 16;
  v34 = v13;
  *(_DWORD *)a3 = 0;
  v15 = v11 + (((unsigned __int8)v11 & a2) != 0 ? 3 : 0);
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v11) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v8 = *(_DWORD *)(v10 + 20) | ~((unsigned __int8)(v11 << ((unsigned __int8)v11 + CurrentIrql)) - (_BYTE)v11) & 4u;
      *(_DWORD *)(v10 + 20) = v8;
      v12 = 2LL;
    }
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( v13 <= qword_140C50840 )
  {
    v17 = 6 * v13;
    if ( (*(_QWORD *)(8 * v17 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v18 = 8 * v17 - 0x220000000000LL;
      if ( (a2 & 4) != 0 )
      {
        *(_DWORD *)a3 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          if ( (a2 & 0x41) != 0 || (dword_140C31E20 & 3) == 0 )
            return 0LL;
          dword_140C52BD0 += v11;
          *(_DWORD *)a3 = 4;
        }
      }
      else
      {
        *(_DWORD *)a3 = 2;
        v33[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(v33, v8, v12, v10);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
      }
      *(_QWORD *)(a3 + 8) = v18;
      v19 = sub_14026C61C(v15, v18);
      v20 = v34;
      v15 = v19 | 8;
      if ( (*(_BYTE *)(v18 + 34) & 0xC0) != 0xC0 )
        v15 = v19;
      goto LABEL_51;
    }
    v13 = v34;
  }
  v21 = a3 + 16;
  v22 = a3 + 16;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)sub_140591724(v13, v11, v22) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    sub_140591724(v13, 0, v22);
  }
  v23 = 3;
  v20 = v34;
  if ( !*(_QWORD *)v21
    || (v23 = *(unsigned __int16 *)(*(_QWORD *)v21
                                  + 2
                                  * ((v34 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1))
                                   - *(_QWORD *)(*(_QWORD *)v21 + 24LL))
                                  + 80) >> 14,
        v23 == 3) )
  {
    if ( (a2 & 4) == 0 )
      v4 = v23;
    v23 = v4;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_38;
    v24 = a2 & 0xD7;
  }
  else
  {
    v24 = a2 & 0xC7;
    if ( v23 )
    {
      if ( v23 == 2 )
        a2 = v24 | 0x20;
      else
        a2 = v24 | 8;
      goto LABEL_38;
    }
  }
  a2 = v24 | 0x10;
LABEL_38:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v25 = __readcr4();
      if ( (v25 & 0x20080) != 0 )
      {
        __writecr4(v25 ^ 0x80);
        __writecr4(v25);
      }
      else
      {
        v26 = __readcr3();
        __writecr3(v26);
      }
      v15 |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_58:
        sub_1405A4FB8(a3);
        return 0LL;
      }
      v27 = __readcr4();
      if ( (v27 & 0x20080) != 0 )
      {
        __writecr4(v27 ^ 0x80);
        __writecr4(v27);
      }
      else
      {
        v28 = __readcr3();
        __writecr3(v28);
      }
      v15 |= 0x18u;
    }
  }
  if ( v23 == 3 )
    ++dword_140C52BD0;
LABEL_51:
  v29 = v15 | 0xA0000000;
  v30 = (volatile signed __int64 *)qword_140C52BC8;
  v31 = sub_1402CBD10(qword_140C52BC8, v20, v29);
  if ( (a2 & 0x41) != 0 )
    byte_140C52BC0 = 1;
  if ( _InterlockedCompareExchange64(v30, v31, 0LL) )
    goto LABEL_58;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v14, 0, 1u);
  else
    sub_1403AD304(v14, 0);
  return v14 + (v7 & 0xFFF);
}
