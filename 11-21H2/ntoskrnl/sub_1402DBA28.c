/*
 * XREFs of sub_1402DBA28 @ 0x1402DBA28
 * Callers:
 *     sub_1402DB994 @ 0x1402DB994 (sub_1402DB994.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402DBCA8 @ 0x1402DBCA8 (sub_1402DBCA8.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

unsigned __int64 __fastcall sub_1402DBA28(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rdi
  volatile LONG *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rbp
  unsigned int v16; // r15d
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-58h]
  KIRQL v24; // [rsp+80h] [rbp+8h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h]
  __int64 v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  if ( (unsigned int)sub_1402FDD20(*(_QWORD *)(a1 + 48)) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v4 = sub_140287970(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)sub_14027B080(v2) == 1 )
    v6 = sub_14027B520();
  else
    v6 = (__int64)sub_14026DFC0(1);
  v26 = v6;
  v7 = *(_DWORD *)(v4 + 56) & 0x800;
  v8 = v6;
  v9 = 0LL;
  v23 = sub_1402DBCA8(v2);
  v10 = (volatile LONG *)sub_140282AD0(v8);
  v11 = ExAcquireSpinLockExclusive(v10);
  *((_DWORD *)v10 + 1) = 0;
  v13 = v4 + 128;
  v24 = v11;
  v25 = v4 + 128;
  if ( v4 != -128LL )
  {
    v14 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v13 + 52) & 0x3FFFFFFF;
      v15 = (unsigned int)(*(_DWORD *)(v13 + 44) - v12);
      if ( (*(_BYTE *)(v13 + 32) & 0x3Eu) >= 8 )
      {
        v5 += 8LL * (unsigned int)(*(_DWORD *)(v13 + 44) - v12);
      }
      else
      {
        if ( !sub_14027B234((_QWORD *)v13) )
        {
          v16 = 0;
          if ( !v15 )
            goto LABEL_21;
          while ( 1 )
          {
            v17 = v9;
            if ( v23 )
            {
              v12 = (v5 - v14) >> 3;
              if ( _bittest(*(const signed __int32 **)(*(_QWORD *)(v23 + 40) + 8LL), v12) )
                goto LABEL_31;
            }
            v18 = sub_140317A10(v5);
            v27 = v18;
            if ( v18 )
              break;
LABEL_19:
            ++v16;
            v5 += 8LL;
            if ( v16 >= v15 )
            {
              v13 = v25;
              goto LABEL_21;
            }
          }
          if ( !v7 )
          {
            if ( (v18 & 1) != 0 )
            {
              sub_140317A10(&v27);
              if ( (sub_14033A410(0xFFFFFFFFFFLL, v5 << 25 >> 16) & 0xF) != 9 )
              {
                v21 = *(_QWORD *)(v20 + 40);
                if ( v21 < 0 )
                {
                  if ( (v21 & 0x10000000000LL) != 0 || (v22 = *(_QWORD *)(v20 + 8), v22 < 0) || !v22 )
                  {
                    ++v9;
                    if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
                      v9 = v17;
                    goto LABEL_19;
                  }
                }
              }
            }
            else if ( (v18 & 0x400) != 0 )
            {
              ++v9;
              if ( !sub_1402802DC(v18) )
                v9 = v17;
              goto LABEL_19;
            }
          }
LABEL_31:
          ++v9;
          goto LABEL_19;
        }
        v5 += 8 * v15;
      }
      v9 += v15;
LABEL_21:
      v13 = *(_QWORD *)(v13 + 16);
      v25 = v13;
      if ( !v13 )
      {
        v8 = v26;
        v11 = v24;
        break;
      }
    }
  }
  LOBYTE(v12) = v11;
  sub_14030FA80(v8, v12);
  return v9;
}
