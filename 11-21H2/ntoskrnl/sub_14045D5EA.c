/*
 * XREFs of sub_14045D5EA @ 0x14045D5EA
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 * Callees:
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045BA46 @ 0x14045BA46 (sub_14045BA46.c)
 *     sub_14045D4C6 @ 0x14045D4C6 (sub_14045D4C6.c)
 *     sub_1405BC2C4 @ 0x1405BC2C4 (sub_1405BC2C4.c)
 */

__int64 __fastcall sub_14045D5EA(_QWORD *a1)
{
  struct _MDL *v1; // rax
  struct _MDL *v2; // r10
  unsigned int v3; // r15d
  __int64 v4; // rcx
  unsigned int v5; // r13d
  struct _MDL *v6; // r14
  unsigned __int64 v7; // rbx
  char *MappedSystemVa; // rdi
  struct _MDL *Next; // r12
  char *v10; // rsi
  __int64 v11; // rbx
  signed __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  signed __int64 v26; // [rsp+38h] [rbp-160h]
  __int64 v27; // [rsp+40h] [rbp-158h]
  unsigned int v28; // [rsp+48h] [rbp-150h]
  unsigned __int64 v30; // [rsp+58h] [rbp-140h]
  _OWORD v31[16]; // [rsp+60h] [rbp-138h] BYREF

  v1 = (struct _MDL *)a1[32];
  v2 = (struct _MDL *)(a1 + 34);
  v3 = 0;
  v4 = a1[11];
  if ( v1 )
    v2 = v1;
  v5 = 0;
  v28 = 0;
  v27 = 0LL;
  v6 = v2 + 1;
  v7 = (unsigned __int64)&v2[1]
     + 8 * (((unsigned __int64)((LODWORD(v2->StartVa) + v2->ByteOffset) & 0xFFF) + v4 + 4095) >> 12);
  v26 = 8 * (((unsigned __int64)((LODWORD(v2->StartVa) + v2->ByteOffset) & 0xFFF) + v4 + 4095) >> 12);
  v30 = v7;
  if ( (v2->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)v2->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v6 < v7 )
  {
    do
    {
      Next = v6->Next;
      v10 = MappedSystemVa;
      v11 = 48 * (__int64)v6->Next - 0x220000000000LL;
      if ( !(unsigned int)sub_14045BA46(v11) )
      {
        v14 = (unsigned __int8)sub_1402F2700(v13);
        if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
        {
          v15 = *(_QWORD *)(v11 + 16);
          v16 = (v15 >> 5) & 0x1F;
          if ( (dword_140D051C0 & 1) != 0
            || (_DWORD)v16 == 31
            || ((unsigned int)v16 >> 3 != 3 || ((v15 >> 5) & 7) == 0) && (unsigned int)v16 >> 3 != 1 )
          {
            v17 = sub_1402E76C0(v11 + 16);
            if ( v17 )
            {
              v18 = v27;
              if ( !v27 )
              {
                v18 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL))
                                + 8LL * ((unsigned __int16)v15 >> 12)
                                + 16736);
                v27 = v18;
              }
              if ( v5 >= v28 )
              {
                v19 = v26 >> 3;
                if ( (unsigned int)(v26 >> 3) > 0x10 )
                  LODWORD(v19) = 16;
                v28 = v19;
                sub_14045D4C6(v18, v17, v19, (__int64)v31);
                v5 = 0;
              }
              if ( (unsigned int)sub_1405BC2C4(Next, &v31[v5], MappedSystemVa, 1LL) )
              {
                if ( v11 == a1[31] )
                  v3 = -1073741761;
                *(_BYTE *)(v11 + 35) |= 0x10u;
              }
            }
          }
          v10 = MappedSystemVa;
        }
        if ( (_BYTE)v14 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v22 = *((_QWORD *)CurrentPrcb + 4375);
                v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
                v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
                *(_DWORD *)(v22 + 20) &= v23;
                if ( v24 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v14);
        }
        v12 = v26;
      }
      MappedSystemVa = v10 + 4096;
      ++v5;
      v26 = v12 - 8;
      v6 = (struct _MDL *)((char *)v6 + 8);
      if ( !v10 )
        MappedSystemVa = 0LL;
    }
    while ( (unsigned __int64)v6 < v30 );
  }
  return v3;
}
