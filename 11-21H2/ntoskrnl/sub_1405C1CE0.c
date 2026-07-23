/*
 * XREFs of sub_1405C1CE0 @ 0x1405C1CE0
 * Callers:
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_1405AED7C @ 0x1405AED7C (sub_1405AED7C.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 *     sub_1405C20CC @ 0x1405C20CC (sub_1405C20CC.c)
 */

__int64 __fastcall sub_1405C1CE0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // r12
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-1C8h]
  int v31; // [rsp+28h] [rbp-1C0h]
  _BYTE v32[12]; // [rsp+2Ch] [rbp-1BCh]
  __int64 v33; // [rsp+38h] [rbp-1B0h]
  __int64 v34; // [rsp+38h] [rbp-1B0h]
  __int64 v35; // [rsp+40h] [rbp-1A8h]
  unsigned int v36; // [rsp+48h] [rbp-1A0h]
  __int64 v37; // [rsp+50h] [rbp-198h]
  __int64 v38; // [rsp+58h] [rbp-190h]
  __int64 v39; // [rsp+60h] [rbp-188h]
  unsigned __int64 v40; // [rsp+68h] [rbp-180h]
  __int64 v42; // [rsp+78h] [rbp-170h]
  unsigned __int64 v43; // [rsp+80h] [rbp-168h]
  _QWORD v46[32]; // [rsp+A0h] [rbp-148h] BYREF

  v33 = 0LL;
  v5 = 0;
  v35 = 0LL;
  v6 = 0LL;
  *(_DWORD *)&v32[8] = 0;
  v7 = 0LL;
  v38 = 0LL;
  v9 = sub_1402CCC50(128LL);
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  v42 = *(_QWORD *)(*(_QWORD *)(v10 + 1680) + 328LL);
  v39 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v10 + 1838));
  *(_QWORD *)v32 = *(unsigned __int8 *)(a2 + 34) >> 6;
  v30 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v11 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 2);
LABEL_2:
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v40 = v12;
  v43 = sub_14024A35C((_QWORD *)a2);
  v37 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v31 = *(unsigned __int8 *)(a2 + 34) >> 6;
  v13 = *((_DWORD *)sub_1402C1550(v12) + 2);
  v14 = v30;
  if ( v37 == v30 && v31 == *(_DWORD *)v32 && v13 == v11 )
    goto LABEL_15;
  while ( 1 )
  {
    v34 = v7;
    v15 = v6;
    if ( v5 )
    {
      sub_1405C20CC(v46, v5);
      v14 = v30;
      v5 = 0;
    }
    if ( (a5 & 1) == 0 && v14 != v39 )
      sub_1405BF468(v14, 4, 1, *(__int64 *)&v32[4]);
    v6 += *(_QWORD *)&v32[4];
    if ( v30 != a1 )
      v6 = v15;
    v16 = v35 + v7;
    v11 = v13;
    if ( v30 != a1 )
      v16 = v34;
    v35 = 0LL;
    v30 = v37;
    *(_DWORD *)v32 = v31;
    v17 = *(_QWORD *)&v32[4] + v38;
    v33 = v16;
    v38 += *(_QWORD *)&v32[4];
    *(_QWORD *)&v32[4] = 0LL;
    if ( !a2 )
      break;
LABEL_15:
    v36 = sub_140235E10(a2);
    v18 = qword_14001C780[v36];
    if ( v36 != 2 || v30 != v39 || !v42 )
      goto LABEL_34;
    v19 = 0;
    if ( v18 )
    {
      v20 = 0LL;
      do
      {
        if ( *(_WORD *)(a2 + 48 * v20 + 32) != 2 )
          break;
        if ( (*(_BYTE *)(a2 + 48 * v20 + 35) & 0x40) != 0 )
          break;
        v20 = ++v19;
      }
      while ( v19 < v18 );
    }
    if ( v19 != v18 )
      goto LABEL_34;
    if ( v5 == 32 )
    {
      sub_1405C20CC(v46, 32LL);
      v5 = 0;
    }
    v21 = v5++;
    v46[v21] = v12;
    v22 = (unsigned __int8)sub_1402F2700(a2);
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
    *(_QWORD *)(a2 + 16) = v9;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = *((_QWORD *)CurrentPrcb + 4375);
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v27 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
    v12 = v40;
    v28 = v18;
    if ( !v18 )
LABEL_34:
      v28 = sub_14028CA70(v12, v36, 0);
    v35 += v28;
    *(_QWORD *)&v32[4] += v18;
    a2 = v43;
    v7 = v33;
    v14 = v30;
    if ( v43 )
      goto LABEL_2;
  }
  *a3 = v16;
  *a4 = v17;
  return v6 - v16;
}
