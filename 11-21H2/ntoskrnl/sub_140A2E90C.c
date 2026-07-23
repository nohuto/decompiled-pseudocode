/*
 * XREFs of sub_140A2E90C @ 0x140A2E90C
 * Callers:
 *     sub_140789110 @ 0x140789110 (sub_140789110.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140789AA4 @ 0x140789AA4 (sub_140789AA4.c)
 *     sub_140A2E04C @ 0x140A2E04C (sub_140A2E04C.c)
 */

__int64 __fastcall sub_140A2E90C(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *Handle)
{
  unsigned int *v6; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rsi
  unsigned int v11; // ebp
  int v12; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // r13
  __int64 (**v18)[3]; // r14
  unsigned int v19; // r12d
  const WCHAR *v20; // rdx
  int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ecx

  v6 = Handle;
  v8 = a5;
  Handle = 0LL;
  v9 = a4;
  *v6 = 0;
  v11 = v8;
  v12 = sub_140A2E04C((__int64)a1, (_OWORD **)off_140C093D8, 1u, a4, v8, v6);
  if ( v12 < 0 )
    return (unsigned int)v12;
  v15 = *v6;
  if ( (_DWORD)v15 )
  {
    if ( v14 )
      v9 = v14 + 20 * v15;
    if ( (unsigned int)v15 <= v8 )
      v11 = v8 - v15;
    else
      v11 = 0;
  }
  v16 = a3;
  if ( !a3 )
  {
    v12 = sub_140789AA4(a1, a2, v13, 0, (__int64)&Handle, 0LL);
    if ( v12 < 0 )
      goto LABEL_25;
    v16 = Handle;
    a3 = Handle;
  }
  v17 = 0LL;
  v18 = &off_140002D80;
  v19 = 0;
  while ( 1 )
  {
    v20 = (const WCHAR *)v18[2];
    LODWORD(a5) = 0;
    v21 = sub_14077FC64(v16, v20, 0LL, 0LL, (unsigned int *)&a5);
    v12 = v21;
    if ( v21 != -1073741772 )
      break;
LABEL_20:
    v16 = a3;
    v12 = 0;
    ++v19;
    v18 += 5;
    if ( v19 >= 4 )
      goto LABEL_21;
  }
  if ( !v21 || v21 == -1073741789 )
  {
    if ( v9 && (unsigned int)v17 < v11 )
    {
      v22 = (__int64 *)*v18;
      v23 = 5 * v17;
      v17 = (unsigned int)(v17 + 1);
      *(_OWORD *)(v9 + 4 * v23) = *(_OWORD *)*v18;
      *(_DWORD *)(v9 + 4 * v23 + 16) = *((_DWORD *)v22 + 4);
    }
    v24 = *v6 + 1;
    if ( v24 < *v6 )
    {
      *v6 = 0;
      v12 = -1073741675;
      goto LABEL_25;
    }
    *v6 = v24;
    goto LABEL_20;
  }
LABEL_21:
  if ( v12 >= 0 && v8 < *v6 )
    v12 = -1073741789;
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
