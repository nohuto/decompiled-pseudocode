/*
 * XREFs of sub_14035C1C0 @ 0x14035C1C0
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 * Callees:
 *     sub_140291EB8 @ 0x140291EB8 (sub_140291EB8.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140292A04 @ 0x140292A04 (sub_140292A04.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 */

char __fastcall sub_14035C1C0(__int64 a1, unsigned __int16 *a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  unsigned __int16 *v9; // rbx
  _WORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  _WORD *v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int FirstSetLeftAffinity; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v24; // rcx
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  int v32; // [rsp+50h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+20h]

  v5 = *(_QWORD *)(a1 + 8);
  v7 = a4;
  if ( a2 )
  {
    sub_140300030(*(_QWORD *)(v5 + 576), *(_WORD *)(*(_QWORD *)(v5 + 576) + 2LL), a2);
  }
  else
  {
    v9 = *(unsigned __int16 **)(v5 + 576);
    memset(v9 + 4, 0, 8LL * *v9);
    *v9 = 1;
    v10 = *(_WORD **)(v5 + 576);
    v11 = *((unsigned __int16 *)a3 + 4);
    v12 = *a3;
    if ( *v10 > (unsigned __int16)v11 )
    {
LABEL_3:
      *(_QWORD *)&v10[4 * v11 + 4] |= v12;
      goto LABEL_4;
    }
    if ( v10[1] > (unsigned __int16)v11 )
    {
      *v10 = v11 + 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( (unsigned int)v7 < 0x800 )
  {
    _mm_lfence();
    *(_DWORD *)(v5 + 588) = v7;
    v13 = qword_140D088C0[v7];
  }
  else
  {
    v13 = qword_140D088C0[*(unsigned int *)(v5 + 588)];
    if ( !sub_140291EB8(*(_WORD **)(v5 + 576), v13) )
    {
      v15 = *(_QWORD *)(v13 + 192);
      v16 = *(unsigned __int16 *)(v15 + 136);
      if ( (unsigned __int16)v16 >= *v14 )
        v17 = 0LL;
      else
        v17 = *(_QWORD *)&v14[4 * v16 + 4];
      if ( (v17 & *(_QWORD *)(v15 + 128)) != 0 )
      {
        _BitScanReverse64((unsigned __int64 *)&v17, v17 & *(_QWORD *)(v15 + 128));
        v33 = v17;
        FirstSetLeftAffinity = dword_140D105E0[(unsigned int)(v17 + ((_DWORD)v16 << 6))];
      }
      else
      {
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(v14);
      }
      *(_DWORD *)(v5 + 588) = FirstSetLeftAffinity;
      v13 = qword_140D088C0[FirstSetLeftAffinity];
    }
  }
  *(_WORD *)(v5 + 584) = *(unsigned __int8 *)(v13 + 208);
  if ( (*(_DWORD *)(v5 + 116) & 8) != 0 || !(unsigned int)sub_140292884(v5) )
  {
    sub_140292818(v13, v5);
    sub_140292A04(v5);
  }
  LOBYTE(v19) = sub_140291EB8(*(_WORD **)(v5 + 576), a1);
  if ( !(_BYTE)v19 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xCu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        v24 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v24 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v28 = *(_DWORD *)(v24 + 24);
            v29 = v28 == -1;
            LODWORD(v19) = v28 + 1;
            *(_DWORD *)(v24 + 24) = v19;
            if ( v29 )
              LOBYTE(v19) = sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v27 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v27 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v30 = *(_DWORD *)(v27 + 24) - 1;
            *(_DWORD *)(v27 + 24) = v30;
            if ( !v30 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
        {
          sub_1402F32E0(&v32, v20, v21, v22);
          v19 = *(_QWORD *)(a1 + 48);
        }
        while ( v19 );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        LOBYTE(v19) = sub_14035C3FC(a1, a5, v21);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v25 = KeGetCurrentPrcb();
      v26 = *((_QWORD *)v25 + 4375);
      if ( v26 )
      {
        if ( *((_BYTE *)v25 + 32) <= 1u )
        {
          LODWORD(v19) = *(_DWORD *)(v26 + 24) - 1;
          *(_DWORD *)(v26 + 24) = v19;
          if ( !(_DWORD)v19 )
            LOBYTE(v19) = sub_140418E4C(v25);
        }
      }
    }
  }
  return v19;
}
