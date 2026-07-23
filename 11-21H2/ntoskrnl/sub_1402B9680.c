/*
 * XREFs of sub_1402B9680 @ 0x1402B9680
 * Callers:
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_140343C60 @ 0x140343C60 (sub_140343C60.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140574678 @ 0x140574678 (sub_140574678.c)
 * Callees:
 *     sub_140571910 @ 0x140571910 (sub_140571910.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 */

void __fastcall sub_1402B9680(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // bl
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned __int8 v20; // al
  __int64 v21; // r10
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *i; // rcx
  __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // [rsp+58h] [rbp+10h]

  v5 = *(_BYTE *)(a2 + 2);
  v8 = 0;
  if ( v5 < 0 )
  {
    v9 = *(_QWORD *)(a2 + 544);
    v10 = *(_QWORD *)(a1 + 34480);
    v11 = (*(_QWORD *)(v9 + 1024) >> 4) & 0x1FFLL;
    LODWORD(v9) = ((unsigned int)*(_QWORD *)(v9 + 1024) >> 13) & 0x3FFFF;
    _BitScanReverse(&v12, v9);
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * (v12 - 2)) + 8LL * ((unsigned int)v9 ^ (1 << v12)) + 8);
    *(_QWORD *)(v13 + 8 * v11) += a3;
    v5 &= ~0x80u;
  }
  if ( (v5 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 33160) += a3;
    v5 &= ~0x10u;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v15 = *(_QWORD *)(a2 + 1608);
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 33968);
      v17 = *(_QWORD *)(a1 + 33976);
      if ( !v16 || !v17 )
        goto LABEL_20;
      if ( *(_BYTE *)(v17 + 100) )
      {
        v18 = *(_DWORD *)(v17 + 116);
      }
      else
      {
        v18 = *(_DWORD *)(v17 + 72);
        if ( v18 >= *(_DWORD *)(v16 + 512) )
          v18 = *(_DWORD *)(v16 + 512);
      }
      if ( v18 < 0x4B )
        v19 = v18 / 0x19;
      else
LABEL_20:
        v19 = 3;
      if ( dword_140D068FC )
        v20 = *(_BYTE *)(a1 + 34056);
      else
        v20 = *(_BYTE *)(a1 + 34059);
      v21 = v19;
      v22 = v20;
      v23 = v20 + 2LL * v19;
      v24 = *(_QWORD *)(v15 + 8 * v23);
      v25 = (_QWORD *)(v15 + 8 * v23);
      v26 = dword_140C2A820;
      *v25 = a3 + v24;
      v27 = *(_DWORD *)(v15 + 192);
      if ( v26 > v27 )
      {
        LODWORD(v36) = v26;
        if ( v26 - v27 >= 0x20 )
          HIDWORD(v36) = 1;
        else
          HIDWORD(v36) = (*(_DWORD *)(v15 + 196) << (v26 - v27)) | 1;
        *(_QWORD *)(v15 + 192) = v36;
      }
      else
      {
        v28 = v27 - v26;
        if ( v28 < 0x20 )
          *(_DWORD *)(v15 + 196) |= 1 << v28;
      }
      if ( !dword_140D06C30 )
      {
        v29 = (unsigned __int8)*(_DWORD *)(a2 + 512);
        if ( v29 == 2 || v29 == 5 )
          *(_QWORD *)(v15 + 16 * v21 + 8) += a3;
      }
      if ( *(_QWORD *)(a2 + 1552) )
      {
        *(_QWORD *)(v15 + 8 * (v22 + 2 * (v21 + 8))) += a3;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1552) + 1608LL) + 8 * (v22 + 2 * (v21 + 4))),
          a3);
      }
    }
    v5 &= ~0x20u;
  }
  if ( (v5 & 0x40) != 0 )
  {
    v32 = *(_QWORD *)(a2 + 968);
    if ( v32 )
      *(_BYTE *)(v32 + 64) = 0;
  }
  if ( byte_140D068F8 )
    sub_140575600(a1, a2, a3, a4);
  v14 = *(_QWORD *)(a1 + 33200);
  if ( v14 )
  {
    if ( *(_BYTE *)(a2 + 125) )
    {
      v33 = (unsigned __int8)*(_DWORD *)(a2 + 512);
      if ( v33 < 6 )
      {
        v34 = *(_DWORD *)(a2 + 80);
        if ( v34 <= *(_DWORD *)(a2 + 84) )
          v34 = *(_DWORD *)(a2 + 84);
        LOBYTE(v8) = v34 >= dword_140D05308;
        v35 = *(unsigned __int8 *)(a2 + 516) + (unsigned int)dword_140D05350 * (v8 + 2 * v33);
        *(_QWORD *)(v14 + 8 * v35) += a3;
      }
    }
  }
  if ( (v5 & 0xBE) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 104);
    if ( v30 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v30); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(a2 + 2) & 8) != 0
      && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
    {
      *(_QWORD *)(a1 + 33192) += a3;
    }
    if ( *(_QWORD *)(a2 + 360) )
      sub_140571910(a2);
  }
}
