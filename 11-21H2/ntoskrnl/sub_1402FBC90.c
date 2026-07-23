/*
 * XREFs of sub_1402FBC90 @ 0x1402FBC90
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_1406B539C @ 0x1406B539C (sub_1406B539C.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407B3CD0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1407B4BA0 (SeAdjustAccessStateForAccessConstraints.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_1402A4660 @ 0x1402A4660 (sub_1402A4660.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall sub_1402FBC90(__int64 a1, __int64 *a2, _DWORD *a3, char a4, int *a5)
{
  int *v5; // r13
  void *v6; // r11
  int v7; // r12d
  char v8; // r15
  _DWORD *v9; // r10
  unsigned int v10; // ebx
  int v11; // r14d
  __int16 v12; // ax
  __int64 v13; // rsi
  __int64 *p_P; // rdi
  char v15; // cl
  __int64 v16; // rbp
  unsigned int v17; // ecx
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned __int16 v21; // cx
  int v22; // r14d
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  void *v34; // r9
  char v35; // al
  int v36; // [rsp+60h] [rbp-58h]
  int v37; // [rsp+64h] [rbp-54h]
  PVOID P; // [rsp+68h] [rbp-50h] BYREF
  char v39; // [rsp+C0h] [rbp+8h]
  int v40; // [rsp+C8h] [rbp+10h] BYREF
  _DWORD *v41; // [rsp+D0h] [rbp+18h]
  char v42; // [rsp+D8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v5 = a5;
  v6 = 0LL;
  v7 = -1;
  P = 0LL;
  v40 = 0;
  v8 = 0;
  v9 = a3;
  v10 = 0;
  *a5 = -1;
  v11 = 0;
  v12 = *(_WORD *)(a1 + 2);
  if ( (v12 & 0x10) != 0 )
  {
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v19 )
        v13 = a1 + v19;
      else
        v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  p_P = (__int64 *)&P;
  if ( a2 )
    p_P = a2;
  v15 = 0;
  v39 = 0;
  while ( v13 )
  {
    v16 = v13 + 8;
    v17 = 0;
    if ( !*(_WORD *)(v13 + 4) )
      goto LABEL_11;
    while ( v17 < v10 || *(_BYTE *)v16 != 21 )
    {
      ++v17;
      v16 += *(unsigned __int16 *)(v16 + 2);
      if ( v17 >= *(unsigned __int16 *)(v13 + 4) )
        goto LABEL_11;
    }
    v20 = v17;
    if ( (*(_BYTE *)(v16 + 1) & 8) != 0 )
    {
      v15 = v39;
    }
    else
    {
      v21 = 4 * (*(unsigned __int8 *)(v16 + 9) + 2);
      v22 = v21;
      v23 = *(unsigned __int16 *)(v16 + 2) - v21;
      LOWORD(a5) = v21;
      v36 = v21;
      if ( v23 - 8 <= 0 || (v37 = *(_DWORD *)(v16 + 4), (v37 & 0xFF000000) != 0) )
      {
        v11 = -1073741705;
LABEL_11:
        v15 = v39;
        break;
      }
      if ( a4 && !v8 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceSharedLite(*((PERESOURCE *)v9 + 6), 1u);
        v9 = v41;
        v6 = 0LL;
        v21 = (unsigned __int16)a5;
        v8 = 1;
      }
      if ( !*p_P )
      {
        v11 = sub_140218B60(v13, p_P);
        if ( v11 < 0 )
          goto LABEL_11;
        v9 = v41;
        v6 = 0LL;
        v21 = (unsigned __int16)a5;
        v22 = v36;
      }
      v25 = (_QWORD *)*((_QWORD *)v9 + 137);
      v40 = -1;
      if ( v25 )
      {
        v26 = v25[75];
        v27 = v25[73];
        v28 = v25[74];
        v6 = (void *)v25[72];
      }
      else
      {
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
      }
      v29 = *(unsigned __int16 *)(v16 + 2) - v22;
      a5 = (int *)(v21 + v16 + 8);
      v11 = sub_140219130(v9, *((void **)v9 + 97), (void *)*p_P, v6, v28, v27, v26, a5, v29 - 8, 1, 0, &v40);
      if ( v11 < 0 )
        goto LABEL_11;
      v15 = v39;
      if ( v40 != 1 )
      {
        v15 = v39;
        if ( (*(_BYTE *)(v16 + 1) & 0x40) != 0 )
          v15 = 1;
        v39 = v15;
        v7 &= v37 | 0x1000000;
      }
      v9 = v41;
      if ( (v41[50] & 0x10) != 0 )
      {
        v30 = (_QWORD *)*((_QWORD *)v41 + 137);
        v40 = -1;
        if ( v30 )
        {
          v31 = v30[75];
          v32 = v30[73];
          v33 = v30[74];
          v34 = (void *)v30[72];
        }
        else
        {
          v31 = 0LL;
          v32 = 0LL;
          v33 = 0LL;
          v34 = 0LL;
        }
        v11 = sub_140219130(
                v41,
                *((void **)v41 + 97),
                (void *)*p_P,
                v34,
                v33,
                v32,
                v31,
                a5,
                (unsigned int)*(unsigned __int16 *)(v16 + 2) - v36 - 8,
                1,
                1,
                &v40);
        if ( v11 < 0 )
          goto LABEL_11;
        a4 = v42;
        v9 = v41;
        if ( v40 == 1 )
        {
          v15 = v39;
        }
        else
        {
          v35 = v39;
          if ( (*(_BYTE *)(v16 + 1) & 0x40) != 0 )
            v35 = 1;
          v15 = v35;
          v39 = v35;
          v7 &= v37 | 0x1000000;
        }
      }
      else
      {
        a4 = v42;
      }
      v6 = 0LL;
    }
    v10 = v20 + 1;
    if ( !v16 )
      break;
  }
  if ( v7 != -1 )
  {
    *v5 = v7;
    *((_BYTE *)v5 + 4) = v15;
  }
  if ( v8 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v41 + 6));
    KeLeaveCriticalRegion();
  }
  if ( P )
    sub_1402A4660(P);
  return (unsigned int)v11;
}
