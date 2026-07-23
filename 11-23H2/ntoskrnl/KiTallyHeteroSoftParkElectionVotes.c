/*
 * XREFs of KiTallyHeteroSoftParkElectionVotes @ 0x14057E8DC
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x14057E5F8 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiGenerateHeteroSets @ 0x140461AA0 (KiGenerateHeteroSets.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x1405777D8 (KiHeteroReduceToMaximallyPreferredByClass.c)
 */

__int64 __fastcall KiTallyHeteroSoftParkElectionVotes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        _QWORD *a7)
{
  __int64 v8; // rsi
  __int64 result; // rax
  int v10; // ebp
  __int64 v11; // r12
  int v12; // edi
  __int64 v13; // r14
  unsigned __int8 v14; // bl
  __int64 v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // r15d
  unsigned __int64 v21; // rdx
  bool v22; // r9
  __int64 v23; // r8
  unsigned __int8 v24; // cl
  __int64 v25; // r10
  unsigned __int8 v26; // al
  unsigned int i; // r8d
  __int64 v29; // [rsp+58h] [rbp-80h]
  __int64 v30; // [rsp+60h] [rbp-78h]
  __int128 v33; // [rsp+80h] [rbp-58h] BYREF
  __int64 v34; // [rsp+90h] [rbp-48h]

  v34 = 0LL;
  v8 = a2;
  v33 = 0LL;
  result = (__int64)memset(a6, 0, 0x200uLL);
  *a7 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v30 = 0LL;
  do
  {
    v12 = 0;
    v13 = 0LL;
    v29 = 0LL;
    do
    {
      v14 = 0;
      if ( !*(_BYTE *)(a1 + 185) )
        goto LABEL_34;
      v15 = v11 + v13;
      v16 = a7;
      v17 = v15;
      v18 = 8 * v15;
      do
      {
        result = v18 + v14;
        v19 = *(_QWORD *)(v8 + 8 * result);
        if ( !v19 )
          goto LABEL_32;
        v20 = KiDynamicHeteroCpuPolicy[v17];
        KiGenerateHeteroSets(a1, a4, v20, v14, v10, v12, (__int64 *)&v33);
        v21 = a3 & v34;
        if ( (a3 & v34) == 0 )
          goto LABEL_21;
        v22 = KeSoftParkSmtPolicy && KeSoftParkSmtPolicy == 3;
        v23 = 0LL;
        v24 = -!v22;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v25, v21);
          v26 = *(_BYTE *)(v25 + a5);
          if ( v26 == v24 )
          {
            _bittestandset64(&v23, (unsigned int)v25);
            goto LABEL_19;
          }
          if ( !v22 )
          {
            if ( v26 >= v24 )
              goto LABEL_19;
LABEL_18:
            v23 = 1LL << v25;
            v24 = *(_BYTE *)(v25 + a5);
            goto LABEL_19;
          }
          if ( v26 > v24 )
            goto LABEL_18;
LABEL_19:
          v21 &= ~(1LL << v25);
        }
        while ( v21 );
        v16 = a7;
        v21 = v23;
LABEL_21:
        if ( (v21 & (unsigned __int64)v33) != 0 )
        {
          v21 &= v33;
          goto LABEL_26;
        }
        result = v21 & *((_QWORD *)&v33 + 1);
        if ( (v21 & *((_QWORD *)&v33 + 1)) != 0 )
        {
          result = KiHeteroReduceToMaximallyPreferredByClass(
                     *(_WORD *)(a1 + 136),
                     v21 & *((_QWORD *)&v33 + 1),
                     v20,
                     v14);
          v21 = result;
        }
        if ( v21 )
        {
LABEL_26:
          result = (__int64)a6;
          for ( i = 0; i < 0x40; ++i )
          {
            if ( _bittest64((const __int64 *)&v21, i) )
              *(_QWORD *)result += v19;
            result += 8LL;
          }
          *v16 += v19;
        }
        v18 = 8 * v17;
LABEL_32:
        v8 = a2;
        ++v14;
      }
      while ( v14 < *(_BYTE *)(a1 + 185) );
      v13 = v29;
      v11 = v30;
LABEL_34:
      ++v13;
      ++v12;
      v29 = v13;
    }
    while ( v12 < 2 );
    v11 += 2LL;
    ++v10;
    v30 = v11;
  }
  while ( v10 < 7 );
  return result;
}
