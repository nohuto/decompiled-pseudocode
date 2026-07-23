/*
 * XREFs of sub_14023B8E8 @ 0x14023B8E8
 * Callers:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_14045E06E @ 0x14045E06E (sub_14045E06E.c)
 * Callees:
 *     sub_14023BA30 @ 0x14023BA30 (sub_14023BA30.c)
 *     sub_14023BABC @ 0x14023BABC (sub_14023BABC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14023B8E8(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // r10
  __int64 v5; // rbp
  char v6; // r9
  char v9; // di
  char v10; // r13
  signed int v11; // esi
  int v12; // edx
  _DWORD *v13; // rcx
  int v15; // eax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // r10
  unsigned __int64 v20; // r11

  v3 = *(_QWORD *)(a1 + 33976);
  v5 = *(_QWORD *)(a1 + 33968);
  v6 = a3;
  v9 = 1;
  v10 = 0;
  if ( byte_140D068E1 )
    v11 = *(_DWORD *)(a1 + 34112);
  else
    v11 = 0;
  v12 = *(_DWORD *)(v5 + 728);
  if ( v11 == *(_DWORD *)(a1 + 34116) )
  {
    v13 = (_DWORD *)(v3 + 104);
    if ( *(_DWORD *)(v3 + 104) != v12 )
    {
      if ( !v11 )
      {
LABEL_6:
        *v13 = v12;
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(v5 + 483) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        a2 = 1;
        goto LABEL_6;
      }
      return 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(v5 + 483) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
      return 0;
    v15 = *(unsigned __int16 *)(a1 + 34120);
    v13 = (_DWORD *)(v3 + 104);
    if ( !_bittest(&v15, v11) || *v13 != v12 )
    {
      *v13 = v12;
      v6 = 1;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 34116) = v11;
    v10 = 1;
  }
  if ( !v6 )
    goto LABEL_14;
LABEL_8:
  if ( a3 )
    *v13 = 0;
  *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 72);
  *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 76);
  *(_OWORD *)(v3 + 64) = *(_OWORD *)(v5 + 40LL * v11 + 736);
  *(_OWORD *)(v3 + 80) = *(_OWORD *)(v5 + 40LL * v11 + 752);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)(v5 + 40LL * v11 + 768);
  sub_14042A5E0(*(_QWORD *)(v3 + 8), v3 + 64);
  if ( dword_140D0696C )
  {
    v16 = *(_WORD *)(v5 + 2LL * v11 + 712);
    v17 = *(_WORD *)(a1 + 34120);
    if ( v16 != v17 )
    {
      *(_WORD *)(a1 + 34120) = v16;
      v18 = 0;
      v19 = *(_QWORD *)(a1 + 192);
      do
      {
        if ( (v16 & 1) != (v17 & 1) )
        {
          v20 = *(unsigned __int8 *)(a1 + 209);
          if ( (v16 & 1) != 0 )
            _interlockedbittestandset64((volatile signed __int32 *)(v19 + 8LL * v18 + 200), v20);
          else
            _interlockedbittestandreset64((volatile signed __int32 *)(v19 + 8LL * v18 + 200), v20);
        }
        v16 >>= 1;
        ++v18;
        v17 >>= 1;
      }
      while ( v18 < 6 );
    }
  }
  sub_14023BA30(a1, (unsigned int)v11);
  if ( a3 )
  {
LABEL_14:
    if ( !v10 )
      return v9;
  }
  sub_14023BABC(a1 + 33968, a2, *(unsigned int *)(a1 + 34116));
  return v9;
}
