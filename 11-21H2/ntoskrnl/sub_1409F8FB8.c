/*
 * XREFs of sub_1409F8FB8 @ 0x1409F8FB8
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14066B42C @ 0x14066B42C (sub_14066B42C.c)
 */

__int64 __fastcall sub_1409F8FB8(__int64 a1, _QWORD *a2, int a3, int *a4)
{
  _QWORD *v5; // rdi
  unsigned int v6; // r13d
  int v7; // esi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned int v11; // r11d
  _QWORD *v12; // r14
  __int64 *v13; // rdx
  int v14; // r9d
  int v15; // r8d
  int v16; // r8d
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // r9d
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
  int v23; // [rsp+20h] [rbp-68h]
  int v24; // [rsp+24h] [rbp-64h]
  __int64 v25[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+A0h] [rbp+18h]

  v28 = a1;
  v25[0] = 0LL;
  v5 = a2 + 2;
  v25[1] = (unsigned int)(a3 - 16) / 0x28uLL;
  v6 = 0;
  v7 = 16;
  v8 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (_QWORD *)sub_14066B42C(a1, v9, v25);
    v12 = v10;
    if ( !v10 )
      break;
    if ( v6 >= v11 )
    {
      if ( (v25[0] & 0x3FC) != 0 && *v10 )
      {
        v7 += 40;
        v8 = -1073741820;
      }
    }
    else if ( sub_1402F344C(v28, v10) )
    {
      v13 = (__int64 *)(((__int64)*v12 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = *((_DWORD *)v12 + 2);
      v15 = ((__int64)*v12 >> 17) & 7 | 8;
      if ( (v14 & 0x2000000) == 0 )
        LOBYTE(v15) = ((__int64)*v12 >> 17) & 7;
      v16 = v15 & 7;
      v30 = v16;
      v17 = *(unsigned __int8 *)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)((((__int64)*v12 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v12) & 0xFFF0) >> 8)]
                               + 40);
      v24 = v17;
      v18 = *v13;
      v26 = *v13;
      v19 = v13[1];
      v27 = v19;
      v20 = v14 & 0x1FFFFFF;
      v23 = v20;
      _InterlockedExchangeAdd64(v12, 1uLL);
      _InterlockedOr(v22, 0);
      if ( *(_QWORD *)(v28 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(v28 + 48), 0LL);
        v16 = v30;
        v20 = v23;
        v17 = v24;
        v18 = v26;
        v19 = v27;
      }
      v7 += 40;
      ++v6;
      *v5 = v25[0];
      v5[1] = v19;
      v5[2] = v18;
      *((_DWORD *)v5 + 6) = v20;
      *((_DWORD *)v5 + 7) = v17;
      *((_DWORD *)v5 + 8) = v16;
      *((_DWORD *)v5 + 9) = 0;
      *a2 = v6;
      v5 += 5;
    }
    v9 = (__int64)v12;
    a1 = v28;
  }
  if ( a4 )
    *a4 = v7;
  return v8;
}
