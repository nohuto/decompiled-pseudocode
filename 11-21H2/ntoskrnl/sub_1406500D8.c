/*
 * XREFs of sub_1406500D8 @ 0x1406500D8
 * Callers:
 *     sub_1406515AC @ 0x1406515AC (sub_1406515AC.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14064FBF4 @ 0x14064FBF4 (sub_14064FBF4.c)
 *     sub_14064FC7C @ 0x14064FC7C (sub_14064FC7C.c)
 *     sub_1406516CC @ 0x1406516CC (sub_1406516CC.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_1406500D8(__int64 *a1, char a2)
{
  __int64 v2; // rax
  __int16 *v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // r14
  bool v7; // cf
  unsigned int v8; // r13d
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 *v17; // rbx
  __int64 *v18; // rsi
  __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  BOOL v22; // r12d
  int v23; // eax
  __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  __int128 *v31; // rdi
  __int64 v32; // rsi
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF
  __int128 v36; // [rsp+40h] [rbp-10h] BYREF
  __int16 v37; // [rsp+90h] [rbp+40h] BYREF
  char v38; // [rsp+98h] [rbp+48h]

  v38 = a2;
  v2 = *a1;
  v3 = &v37;
  v37 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = (*(_BYTE *)(v2 + 200) & 1) != 0;
  v36 = 0LL;
  v8 = 2 - v7;
  v35 = 0LL;
  v34 = 0LL;
  do
  {
    v9 = *(_QWORD *)(*a1 + 264);
    *(_QWORD *)((char *)&v34 + v6) = v9;
    if ( (int)sub_14064FC7C(a1, v5, (_QWORD *)v9) >= 0 )
    {
      v10 = -*(_DWORD *)(*a1 + 236) & (*(_DWORD *)(v9 + 80) * *(_DWORD *)(v9 + 84) + *(_DWORD *)(*a1 + 236) - 1);
      v11 = sub_140930250(v10 + (1 << *(_DWORD *)(*a1 + 240)));
      *(_QWORD *)((char *)&v36 + v6) = v11;
      v12 = (void *)v11;
      if ( !v11 )
      {
        v14 = -1073741670;
        goto LABEL_34;
      }
      if ( v5 )
      {
        v13 = (void *)v11;
        v12 = (void *)((1 << *(_DWORD *)(*a1 + 240)) + v11);
      }
      else
      {
        v13 = (void *)(v11 + v10);
      }
      *(_QWORD *)((char *)&v34 + v6) = v13;
      *(_QWORD *)((char *)&v35 + v6) = v12;
      memmove(v13, *(const void **)(*a1 + 264), 1 << *(_DWORD *)(*a1 + 240));
      if ( (int)sub_14064FBF4(a1, (__int64)v13, v12) >= 0 )
        *(_BYTE *)v3 = 1;
    }
    ++v5;
    v6 += 8LL;
    v3 = (__int16 *)((char *)v3 + 1);
  }
  while ( v5 < v8 );
  v14 = 0;
  if ( !v37 )
  {
LABEL_11:
    v14 = -1073741774;
    goto LABEL_34;
  }
  v15 = *a1;
  if ( (*(_DWORD *)(*a1 + 200) & 1) == 0 )
  {
    if ( !(_BYTE)v37
      || !HIBYTE(v37)
      || __PAIR128__(*(_QWORD *)(*((_QWORD *)&v34 + 1) + 24LL), *(_QWORD *)(*((_QWORD *)&v34 + 1) + 32LL)) != *(_OWORD *)(v34 + 24)
      || *(_OWORD *)(*((_QWORD *)&v34 + 1) + 40LL) != *(_OWORD *)(v34 + 40)
      || *(_QWORD *)(*((_QWORD *)&v34 + 1) + 80LL) != *(_QWORD *)(v34 + 80)
      || *(_DWORD *)(*((_QWORD *)&v34 + 1) + 88LL) != *(_DWORD *)(v34 + 88) )
    {
      goto LABEL_23;
    }
    v16 = *(_QWORD *)(*((_QWORD *)&v34 + 1) + 56LL) - *(_QWORD *)(v34 + 56);
    if ( !v16 )
      v16 = *(_QWORD *)(*((_QWORD *)&v34 + 1) + 64LL) - *(_QWORD *)(v34 + 64);
    if ( v16 )
    {
LABEL_23:
      if ( !v38 )
        goto LABEL_11;
      if ( (_BYTE)v37 )
      {
        v17 = (__int64 *)&v34;
        v18 = (__int64 *)&v35;
      }
      else
      {
        v17 = (__int64 *)&v34 + 1;
        v18 = (__int64 *)&v35 + 1;
      }
      v19 = *v17;
      v20 = *(_DWORD *)(v15 + 236);
      v21 = *(_DWORD *)(v15 + 240);
      v22 = (_BYTE)v37 != 0;
      v23 = *(_DWORD *)(v19 + 80) * *(_DWORD *)(v19 + 84);
      *(_DWORD *)(v19 + 16) = 0;
      v24 = *(_QWORD *)(v19 + 32);
      v25 = v23 + v20 - 1;
      v26 = *(_QWORD *)(v19 + 24);
      *(_QWORD *)(v19 + 24) = v24;
      v27 = (-v20 & (unsigned int)v25) >> v21;
      *(_QWORD *)(v19 + 32) = v26;
      if ( v22 )
        v28 = v24 - v27;
      else
        v28 = v24 + 1;
      *(_QWORD *)(v19 + 72) = v28;
      *(_DWORD *)(v19 + 16) = RtlComputeCrc32(0, (PVOID)v19, *(_DWORD *)(v19 + 12));
      if ( v22 )
      {
        v30 = *v18;
        v29 = v28;
      }
      else
      {
        v29 = *(_QWORD *)(v19 + 24);
        v30 = v19;
      }
      v14 = sub_1406516CC(*a1, v27 + 1, v29, v30);
    }
  }
LABEL_34:
  v31 = &v36;
  v32 = 2LL;
  do
  {
    if ( *(_QWORD *)v31 )
      sub_1406D9550(*(_QWORD *)v31);
    v31 = (__int128 *)((char *)v31 + 8);
    --v32;
  }
  while ( v32 );
  return v14;
}
