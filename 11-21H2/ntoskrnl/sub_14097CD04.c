/*
 * XREFs of sub_14097CD04 @ 0x14097CD04
 * Callers:
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140287450 @ 0x140287450 (sub_140287450.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     sub_1405AAEC8 @ 0x1405AAEC8 (sub_1405AAEC8.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AC580 @ 0x1405AC580 (sub_1405AC580.c)
 *     sub_14097CC1C @ 0x14097CC1C (sub_14097CC1C.c)
 */

int __fastcall sub_14097CD04(__int64 a1, int a2, __int64 a3, _WORD *a4)
{
  PVOID v4; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  char v11; // r10
  unsigned int v12; // r9d
  KPROCESSOR_MODE v13; // r8
  ACCESS_MASK v14; // edx
  int result; // eax
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rsi
  int v24; // eax
  unsigned int v25; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+38h] [rbp-30h] BYREF
  PVOID v28; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v6 = *(void **)(a3 + 104);
  v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 112);
  v28 = 0LL;
  v11 = a2;
  if ( v6 )
  {
    v12 = (a2 & 4 | 8u) >> 1;
    v13 = *((_BYTE *)KeGetCurrentThread() + 562);
    v14 = v12 | 8;
    if ( (v11 & 2) == 0 )
      v14 = v12;
    result = sub_1405AC580(v6, v14, v13, &Object, &v28);
    if ( result >= 0 )
    {
      v4 = v28;
      if ( !v28 )
      {
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
        return -1073741816;
      }
      v7 = sub_140287970((__int64)v28);
      v16 = *(_QWORD *)(v7 + 8);
      v17 = sub_1405AAF90(v16);
      v18 = v17;
      if ( (v8 & 2) != 0 )
      {
        v19 = 16LL;
      }
      else if ( (v8 & 8) != 0 )
      {
        v19 = 512LL;
      }
      else
      {
        if ( (v8 & 0x10) == 0 )
        {
          v19 = v17;
LABEL_23:
          v20 = v19 << 12;
          if ( *(_QWORD *)(a3 + 16) < v19 << 12 )
            *(_QWORD *)(a3 + 16) = v20;
          v21 = *(_QWORD *)(a3 + 24);
          if ( (v21 & (v20 - 1)) != 0
            || *(_QWORD *)(a3 + 8) - *(_QWORD *)a3 + 1LL == v21 && (*(_QWORD *)a3 & (v20 - 1)) != 0 )
          {
            goto LABEL_20;
          }
          goto LABEL_34;
        }
        v19 = 0x40000LL;
      }
      if ( v19 <= v17 || v19 % v17 || ((v19 - 1) & v19) != 0 || v19 != 512 || v17 != 16 )
      {
LABEL_20:
        ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        return -1073741811;
      }
      goto LABEL_23;
    }
  }
  else
  {
    if ( (v8 & 0x1A) != 0 )
      return -1073741811;
    if ( a2 != 4 )
      return -1073741755;
    result = sub_14097CC1C(*(_BYTE *)(a3 + 57), &v27);
    if ( result >= 0 )
    {
      v16 = v27;
      v18 = 1LL;
      v19 = 1LL;
LABEL_34:
      v22 = (unsigned __int64 *)sub_1402828F0(64, 0x48uLL, 0x76706D4Du);
      v23 = v22;
      if ( v22 )
      {
        *((_DWORD *)v22 + 16) = 256;
        v22[4] = a1;
        v22[5] = v16;
        *a4 = *(_WORD *)sub_1405AAEC8(v16);
        if ( v4 )
        {
          sub_140287450(v7);
          v23[6] = v7;
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        }
        if ( v19 != v18 )
        {
          v24 = *((_DWORD *)v23 + 12);
          if ( v19 == 16 )
          {
            v25 = v24 & 0xFFFFFFFC | 1;
          }
          else if ( v19 == 0x40000 )
          {
            v25 = v24 | 3;
          }
          else
          {
            v25 = v24 & 0xFFFFFFFC | 2;
          }
          *((_DWORD *)v23 + 12) = v25;
        }
        v23[3] = 0LL;
        sub_14030BA20(a1, v23, 0);
        return 0;
      }
      else
      {
        if ( v4 )
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        return -1073741670;
      }
    }
  }
  return result;
}
