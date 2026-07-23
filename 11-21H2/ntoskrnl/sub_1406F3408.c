/*
 * XREFs of sub_1406F3408 @ 0x1406F3408
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140596090 @ 0x140596090 (sub_140596090.c)
 *     sub_140596204 @ 0x140596204 (sub_140596204.c)
 *     sub_1406F363C @ 0x1406F363C (sub_1406F363C.c)
 *     sub_1406F367C @ 0x1406F367C (sub_1406F367C.c)
 *     sub_14097F0F0 @ 0x14097F0F0 (sub_14097F0F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406F3408(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, __int64 a7, int a8)
{
  unsigned int v8; // r12d
  _QWORD *v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // rbx
  int v16; // esi
  void *v17; // rsi
  int v18; // ebx
  int v19; // eax
  __int64 v20; // r8
  int v21; // r12d
  __int64 v22; // rax
  int v23; // ebx
  char v24; // dl
  __int64 result; // rax
  bool v26; // zf
  int v27; // [rsp+78h] [rbp+10h]
  char v29; // [rsp+90h] [rbp+28h]

  v27 = a2;
  v8 = a4;
  v10 = *(_QWORD **)(a1 + 96);
  v11 = 48 * a7 - 0x220000000000LL;
  v12 = v10[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v10[7] )
  {
    result = sub_14097F0F0(*(_QWORD *)(a1 + 96), a2, a3, a4);
    if ( (int)result < 0 )
      return result;
  }
  v13 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
  if ( v13 )
  {
    v29 = 0;
  }
  else
  {
    if ( ((dword_140D06880 & 0x2000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0) && v8 != -1 )
      return 3221225626LL;
    v13 = sub_140596204();
    if ( !v13 )
      return 3221225626LL;
    v29 = 1;
  }
  v14 = sub_14026C61C(1, v11);
  v15 = sub_1402CBD10(v13, a7, v14 | 0x20000000u);
  v16 = 0;
  if ( sub_140317A80(v13) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v26 = (v15 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v26 = (v15 & 1) == 0;
    }
    if ( !v26 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)v13 = v15;
  if ( v16 )
    sub_1402294F0(v13, v15);
  v17 = 0LL;
  v18 = a8 | 2;
  if ( (a6 & 2) == 0 )
    v18 = a8;
  if ( (dword_140D06880 & 0x2000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v19 = v18;
    if ( v8 != -1 )
    {
      v21 = (__int64)(v13 << 25) >> 16;
      if ( v10[4] )
        v19 = v18 | 1;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v19 = v18;
  if ( v8 == -1 )
  {
LABEL_25:
    v21 = (__int64)(v13 << 25) >> 16;
LABEL_14:
    v23 = sub_1406F363C(v12, v21, 4096, v27, v19, a3);
    if ( v23 < 0 )
    {
      _InterlockedIncrement(&dword_140C4F454);
    }
    else
    {
      v24 = 0;
      if ( (dword_140D06880 & 0x20000) != 0
        && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0
        && ((*(_BYTE *)(v11 + 16) >> 5) & 2) != 0 )
      {
        v24 = 3;
      }
      if ( (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
        sub_14026C644(v11, v24);
    }
    goto LABEL_18;
  }
  v20 = v8;
  v21 = (__int64)(v13 << 25) >> 16;
  v22 = sub_1406F367C((__int64)(v13 << 25) >> 16, a1, v20);
  v17 = (void *)v22;
  if ( v22 == -1 )
  {
    v17 = 0LL;
LABEL_13:
    v19 = v18;
    goto LABEL_14;
  }
  if ( v22 )
  {
    v21 = v22;
    goto LABEL_13;
  }
  v23 = -1073741670;
LABEL_18:
  if ( v29 )
    sub_140596090(v13);
  else
    sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v13, 1u);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v23;
}
