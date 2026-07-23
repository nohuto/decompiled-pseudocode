/*
 * XREFs of sub_1406A26A8 @ 0x1406A26A8
 * Callers:
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     sub_14022B1D0 @ 0x14022B1D0 (sub_14022B1D0.c)
 *     sub_1406A28A8 @ 0x1406A28A8 (sub_1406A28A8.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 */

char __fastcall sub_1406A26A8(__int64 a1, char a2, __int64 a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // edi
  char v7; // r12
  char v8; // bp
  unsigned int v9; // esi
  __int64 v13; // r9
  __int64 v14; // r14
  int v15; // r11d
  __int64 v17; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // r10d
  unsigned int v24; // [rsp+70h] [rbp+18h]

  v24 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      v14 = 16LL * v9;
      if ( (*(_DWORD *)(v14 + v13 + 8) & 0x30) == 0
        && (unsigned __int8)sub_1406A28A8(a4, (unsigned int)a3, a3, *(_QWORD *)(v14 + v13)) )
      {
        goto LABEL_14;
      }
      if ( (a2 & 4) != 0 && RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(v14 + *(_QWORD *)(a1 + 152))) )
        break;
LABEL_5:
      a3 = v24;
      if ( ++v9 >= *(_DWORD *)(a1 + 124) )
      {
        v6 = 0;
        goto LABEL_7;
      }
    }
    v7 = 1;
LABEL_14:
    v17 = 2LL * v9;
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v17 + 8) &= 0xFFFFFFF0;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v17 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v9 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_5;
  }
LABEL_7:
  v15 = *(_DWORD *)(a1 + 200) & 0x800;
  if ( !v15 )
    v6 = sub_14022B1D0(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v8 = 1;
      v20 = 0x602880000LL;
      if ( !v7 )
        v20 = 0xFFFFFFEEDFE9F97BuLL;
      v21 = v20 & *(_QWORD *)(a1 + 72);
      v22 = v20 & *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 80) &= v20;
      *(_QWORD *)(a1 + 64) = v22;
      *(_QWORD *)(a1 + 72) = v21;
    }
    if ( a5 )
    {
      v19 = a5;
      do
      {
        if ( (unsigned int)(*a6 - 2) <= 0x22 )
        {
          *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
          *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
        }
        a6 += 3;
        --v19;
      }
      while ( v19 );
    }
  }
  if ( !v15 && (unsigned int)sub_14022B1D0(a1) < v6 )
    *(_DWORD *)(a1 + 200) = v23 | 0x800;
  return v8;
}
