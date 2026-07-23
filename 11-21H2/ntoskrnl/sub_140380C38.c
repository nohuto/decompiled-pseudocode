/*
 * XREFs of sub_140380C38 @ 0x140380C38
 * Callers:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_14037EC24 @ 0x14037EC24 (sub_14037EC24.c)
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_140380900 @ 0x140380900 (sub_140380900.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_1403903B8 @ 0x1403903B8 (sub_1403903B8.c)
 *     sub_14039042C @ 0x14039042C (sub_14039042C.c)
 *     sub_1403904D4 @ 0x1403904D4 (sub_1403904D4.c)
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 *     sub_1405F6054 @ 0x1405F6054 (sub_1405F6054.c)
 *     sub_1405F9270 @ 0x1405F9270 (sub_1405F9270.c)
 *     sub_1405F9E38 @ 0x1405F9E38 (sub_1405F9E38.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140380D84 @ 0x140380D84 (sub_140380D84.c)
 *     sub_140383620 @ 0x140383620 (sub_140383620.c)
 *     sub_1403839C0 @ 0x1403839C0 (sub_1403839C0.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_140380C38(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // eax
  int *v13; // r8
  __int64 *v15; // rcx
  int v16; // eax
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  sub_140237ED8((__int64 *)a1, a3);
  v7 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v10 = (__int64 *)(a3 + 8);
  }
  else
  {
    v8 = 1;
    v9 = 0LL;
    if ( *(_QWORD *)a1 )
      v9 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v9 && !(unsigned int)sub_140383620(v9, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a3;
  }
  v11 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( !v8 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v12 = sub_140380D84(a1, v11, a2);
    if ( *(_BYTE *)(v11 + 3) )
      break;
    if ( v8 )
    {
      *v10 = v11;
      v10[1] = v11 + 16 * (v12 + 1LL);
      v10 += 2;
    }
    if ( v12 )
      v15 = (__int64 *)(v11 + 16LL * (v12 - 1) + 24);
    else
      v15 = (__int64 *)(v11 + 8);
    if ( **(_DWORD **)(a1 + 16) == -1 || *(_BYTE *)(v11 + 2) != 2 )
    {
      v11 = *v15;
    }
    else
    {
      v11 = sub_1405F67D0(a1 + 16, v15, 2 * (*(_DWORD *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  *v10 = v11;
  v13 = (int *)(v11 + 4 * (v12 + 4LL));
  v10[1] = (__int64)v13;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v10 - *(_QWORD *)a3) >> 4) + 1;
  if ( v12 >= (unsigned __int16)*(_DWORD *)v11 )
    return (unsigned int)-1073741275;
  v16 = *v13;
  v17 = a2;
  v18 = v16;
  if ( (unsigned int)sub_1403839C0(a1, &v18, &v17) )
    return (unsigned int)-1073741275;
  return v7;
}
