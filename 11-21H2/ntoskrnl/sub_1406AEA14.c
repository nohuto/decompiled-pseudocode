/*
 * XREFs of sub_1406AEA14 @ 0x1406AEA14
 * Callers:
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 * Callees:
 *     sub_140360A84 @ 0x140360A84 (sub_140360A84.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 *     sub_1407E0768 @ 0x1407E0768 (sub_1407E0768.c)
 *     sub_1407E0884 @ 0x1407E0884 (sub_1407E0884.c)
 */

__int64 sub_1406AEA14(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r13
  unsigned int *Src; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int16 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // esi
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r10
  unsigned int v21; // r10d
  int v22; // r10d
  size_t Size; // [rsp+38h] [rbp-A0h]
  SIZE_T Length; // [rsp+48h] [rbp-90h]
  __int64 v26[2]; // [rsp+68h] [rbp-70h] BYREF
  int v27[2]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v28; // [rsp+80h] [rbp-58h]
  __int64 v29; // [rsp+90h] [rbp-48h]
  __int64 v30; // [rsp+F8h] [rbp+20h] BYREF
  va_list va; // [rsp+F8h] [rbp+20h]
  __int64 v32; // [rsp+100h] [rbp+28h]
  __int64 v33; // [rsp+108h] [rbp+30h]
  va_list va1; // [rsp+110h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v3 = a1[5];
  Src = (unsigned int *)a1[3];
  *(_OWORD *)v26 = 0LL;
  LODWORD(v30) = 0;
  v29 = 0x200000000LL;
  v7 = *a1;
  v8 = 0LL;
  *(_QWORD *)v27 = 0LL;
  v28 = 0LL;
  v9 = *(_WORD *)(v7 + 30);
  *Src = 4;
  LOBYTE(v7) = v9;
  v10 = v32;
  v11 = (8 * (unsigned int)(v7 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  LODWORD(v7) = v33;
  *((_QWORD *)Src + 1) = v11;
  v12 = sub_1407DFC68((unsigned int)v27, v3, *(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 8), 1048577, v7, 0, a2);
  if ( v12 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v13, (__int64 *)va);
    v14 = 0;
    while ( v14 < *(_DWORD *)(a3 + 16) )
    {
      Src[1] = 0;
      if ( v14 >= *(_DWORD *)(a3 + 16) )
        break;
      v15 = *((_DWORD *)a1 + 8);
      v16 = 0;
      while ( 1 )
      {
        v17 = *(_QWORD *)(a3 + 24);
        v18 = *(_QWORD *)(v17 + 16LL * v14);
        v19 = v8;
        v20 = v18 + *(unsigned int *)(v17 + 16LL * v14 + 8);
        if ( v18 >= v8 )
          v19 = *(_QWORD *)(v17 + 16LL * v14);
        if ( v19 < v20 )
          break;
        v21 = v16;
        if ( v16 >= v15 )
          goto LABEL_14;
LABEL_13:
        if ( ++v14 >= *(_DWORD *)(a3 + 16) )
          goto LABEL_14;
      }
      while ( 1 )
      {
        *(_QWORD *)&Src[2 * Src[1] + 4] = v19;
        v19 += 4096LL;
        v16 = Src[1] + 1;
        Src[1] = v16;
        v15 = *((_DWORD *)a1 + 8);
        if ( v16 >= v15 )
          break;
        if ( v19 >= v20 )
        {
          v21 = v16;
          goto LABEL_13;
        }
      }
      v8 = v19;
      v21 = v16;
LABEL_14:
      if ( !v21 )
        break;
      if ( sub_140360A84(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0 && (unsigned __int64)(a1[6] + a1[7] + sub_1407E0884(a1 + 11, 0LL)) < 0x80 )
      {
        v12 = -1073741248;
        goto LABEL_24;
      }
      LODWORD(Length) = 0;
      LODWORD(Size) = 8 * v22 + 16;
      v12 = sub_1407308F0(v27[0], (__int64)v26, 590112, Src, Size, 0LL, Length, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        sub_1407E0768(a1 + 6, Src[1]);
      if ( v12 < 0 )
      {
        if ( v12 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v12 == 259 )
        KeBugCheckEx(0x191u, 0x14B0uLL, 0LL, 0LL, 0LL);
    }
    v12 = 0;
  }
LABEL_24:
  if ( (v29 & 0x400000000LL) != 0 )
    sub_1407DFFD8(v27, v3);
  return (unsigned int)v12;
}
