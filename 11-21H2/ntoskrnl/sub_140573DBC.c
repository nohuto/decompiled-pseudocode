/*
 * XREFs of sub_140573DBC @ 0x140573DBC
 * Callers:
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056AAA4 @ 0x14056AAA4 (sub_14056AAA4.c)
 *     sub_140573B50 @ 0x140573B50 (sub_140573B50.c)
 *     sub_140574294 @ 0x140574294 (sub_140574294.c)
 *     sub_140574648 @ 0x140574648 (sub_140574648.c)
 */

__int64 __fastcall sub_140573DBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, __int64 a7)
{
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  _DWORD v29[10]; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0;
  if ( (unsigned __int8)sub_140574648(a5) )
  {
    v12 = *(_QWORD *)(a6 + 8);
    if ( (v12 & *(_QWORD *)(a4 + 200)) == 0 || (v9 & *(_QWORD *)(a4 + 34912)) != *(_QWORD *)(a4 + 34912) )
    {
      v13 = v12 & ~v9;
      if ( (v9 & *(_QWORD *)(a4 + 34912)) == *(_QWORD *)(a4 + 34912) )
        v13 &= *(_QWORD *)(v10 + 24);
      if ( v13 )
      {
        if ( (v13 & *(_QWORD *)(a2 + 34880)) != 0 )
        {
          v14 = a2;
        }
        else
        {
          v15 = *(unsigned __int8 *)(a2 + 208);
          v14 = qword_140D088C0[dword_140D105E0[64 * v15
                                              + (unsigned int)sub_14056AAA4(v13, *(unsigned __int8 *)(a2 + 209))]];
        }
        v17 = sub_140574294(*(_QWORD *)(v14 + 34888), a2, a4, v13, (__int64)a5);
        if ( v17 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29[0] = 0;
          while ( 1 )
          {
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v21 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v22 = *(_DWORD *)(v21 + 24);
                *(_DWORD *)(v21 + 24) = v22 + 1;
                if ( v22 == -1 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
              break;
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v23 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v24 = *(_DWORD *)(v23 + 24) - 1;
                *(_DWORD *)(v23 + 24) = v24;
                if ( !v24 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
            do
              sub_1402F32E0(v29, v16, v18, v19);
            while ( *(_QWORD *)(v17 + 48) );
          }
          if ( sub_140573B50(v17, a4, a5) )
          {
            *(_DWORD *)(a7 + 8) = (*(_BYTE *)(v17 + 35) & 1) == 0;
            *(_QWORD *)a7 = v17;
            *(_DWORD *)(a7 + 12) = 1;
            return v11;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          if ( v26 )
          {
            if ( *((_BYTE *)v25 + 32) <= 1u )
            {
              v27 = *(_DWORD *)(v26 + 24) - 1;
              *(_DWORD *)(v26 + 24) = v27;
              if ( !v27 )
                sub_140418E4C((__int64)v25);
            }
          }
        }
      }
    }
  }
  return (unsigned int)-1073741823;
}
