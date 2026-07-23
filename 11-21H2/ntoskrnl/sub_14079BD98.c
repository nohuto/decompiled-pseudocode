/*
 * XREFs of sub_14079BD98 @ 0x14079BD98
 * Callers:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_14065C3B8 @ 0x14065C3B8 (sub_14065C3B8.c)
 *     sub_14065DDC4 @ 0x14065DDC4 (sub_14065DDC4.c)
 *     sub_14065DE48 @ 0x14065DE48 (sub_14065DE48.c)
 *     sub_14065E7EC @ 0x14065E7EC (sub_14065E7EC.c)
 *     sub_14065E880 @ 0x14065E880 (sub_14065E880.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_1406BE2FC @ 0x1406BE2FC (sub_1406BE2FC.c)
 *     sub_1406BEFA0 @ 0x1406BEFA0 (sub_1406BEFA0.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1406E3D54 @ 0x1406E3D54 (sub_1406E3D54.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_1407166AC @ 0x1407166AC (sub_1407166AC.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_140716F80 @ 0x140716F80 (sub_140716F80.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079B758 @ 0x14079B758 (sub_14079B758.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079CF44 @ 0x14079CF44 (sub_14079CF44.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091F7C8 @ 0x14091F7C8 (sub_14091F7C8.c)
 *     sub_14091F87C @ 0x14091F87C (sub_14091F87C.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 *     sub_1409211E4 @ 0x1409211E4 (sub_1409211E4.c)
 *     sub_140921510 @ 0x140921510 (sub_140921510.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14079BF50 @ 0x14079BF50 (sub_14079BF50.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_14079C440 @ 0x14079C440 (sub_14079C440.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14079BD98(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rsi
  int *v11; // rbx
  int v12; // edi
  int *v14; // rdx
  int v15; // ecx
  __int64 v16; // r9
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // r11d
  __int64 v26; // rax
  int v27; // r8d
  _DWORD v28[2]; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter3a; // [rsp+38h] [rbp-8h]
  __int16 v30; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h]
  int *v32; // [rsp+98h] [rbp+58h]

  v2 = (unsigned int)BugCheckParameter3;
  v30 = 0;
  v32 = 0LL;
  v4 = 0LL;
  sub_140AB4534(&v30);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v5 = sub_140AB44C0(BugCheckParameter2, (unsigned int)v2);
  if ( !v5 )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v2, 0x654uLL);
  v7 = sub_140AB451C(v6, v5, &v30);
  v10 = v7;
  if ( (*(_BYTE *)(v9 + 8) & 4) != 0 )
  {
    v24 = *(_DWORD *)(v7 + 4);
    v25 = v24 + *(_DWORD *)(v7 + 8);
    while ( v24 < v25 )
    {
      v26 = sub_140AB44C0(BugCheckParameter2, v24);
      *(_QWORD *)(v26 + 8) &= ~4uLL;
      v24 = v27 + 4096;
    }
  }
  v11 = (int *)(v10 + *v8 + (v2 & 0xFFF));
  *v11 = -*v11;
  do
  {
    if ( (unsigned __int8)sub_14079BF50(BugCheckParameter2, (unsigned int)v2 >> 31) != 1 )
      break;
    v14 = v32;
    v15 = *v11;
    v16 = (unsigned int)v4;
    v4 = (unsigned int)(v4 + 1);
    v17 = *v32;
    if ( v32 <= v11 )
    {
      *v32 = v17 + v15;
      v18 = v2 - v17;
      v11 = v14;
    }
    else
    {
      *v11 = v15 + v17;
      v18 = v15 + v2;
    }
    v28[v16] = v17;
    *((_DWORD *)&BugCheckParameter3a + v16) = v18;
  }
  while ( (unsigned int)v4 < 2 );
  v12 = (_DWORD)v11 + *(_DWORD *)(v10 + 4) + ((unsigned int)v2 >> 31 << 31) - v10;
  if ( (_DWORD)v4 )
  {
    v19 = 0LL;
    do
    {
      v20 = v28[v19];
      v31 = 0;
      v21 = (v20 >> 3) - 1;
      if ( v21 >= 0x10 )
      {
        v22 = v21 >> 4;
        if ( v22 <= 0xFF )
        {
          _BitScanReverse(&v23, v22);
          v31 = v23;
        }
      }
      sub_14079C290(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v19 * 4), v12);
      ++v19;
      --v4;
    }
    while ( v4 );
  }
  sub_14079C440(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2 + 80);
  return sub_1402AFC00(BugCheckParameter2 + 80);
}
