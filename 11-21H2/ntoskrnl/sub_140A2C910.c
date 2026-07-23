/*
 * XREFs of sub_140A2C910 @ 0x140A2C910
 * Callers:
 *     sub_140A2C51C @ 0x140A2C51C (sub_140A2C51C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 */

__int64 __fastcall sub_140A2C910(__int64 a1, __int64 a2, void *a3, __int64 a4, unsigned int a5, _BYTE *a6, ULONG a7)
{
  int v7; // r11d
  int v8; // ebx
  __int64 (**v10)[6]; // r9
  unsigned int i; // r10d
  __int64 *v15; // rdx
  __int64 (**v16)[6]; // rsi
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  const WCHAR *v20; // r14
  ULONG v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r9
  HANDLE v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  HANDLE v32; // rdx
  __int64 v33; // rax
  HANDLE v34; // rcx
  int v35; // eax
  __int64 v37; // [rsp+28h] [rbp-38h]
  int v38; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v39; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v38 = 0;
  v39 = 0LL;
  v10 = &off_140A39F60;
  Handle = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v15 = (__int64 *)*v10;
    v16 = v10;
    if ( v7 == LODWORD((**v10)[2]) )
    {
      v17 = *(_QWORD *)a4 - *v15;
      if ( *(_QWORD *)a4 == *v15 )
        v17 = *(_QWORD *)(a4 + 8) - v15[1];
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v10 += 4;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a5 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( a3 || (v8 = sub_140789460(a1, a2, 0LL, (__int64)v10, 3, 0, (__int64)&v39, 0LL), v8 >= 0) )
  {
    v19 = *(_DWORD *)(a4 + 16);
    v20 = (const WCHAR *)v16[2];
    v21 = *((_DWORD *)v16 + 6);
    if ( v19 == 7 )
    {
      v22 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
      if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
        v22 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v22 )
        goto LABEL_36;
    }
    if ( v19 == 8 )
    {
      v23 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
      if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
        v23 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v23 )
        goto LABEL_36;
    }
    if ( v19 == 9 )
    {
      v24 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
      if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
        v24 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v24 )
        goto LABEL_36;
    }
    if ( v19 == 10 )
    {
      v25 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
      if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
        v25 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v25 )
        goto LABEL_36;
    }
    switch ( v19 )
    {
      case 15:
        v26 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
        if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
          v26 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
        if ( !v26 )
        {
LABEL_36:
          if ( !a7 )
          {
LABEL_37:
            v8 = -1073741811;
            goto LABEL_70;
          }
          if ( *a6 == 0xFF )
          {
            v27 = qword_1408681D0;
          }
          else
          {
            if ( *a6 )
              goto LABEL_37;
            v27 = (__int64 *)a0_7;
          }
          v28 = v39;
          if ( a3 )
            v28 = a3;
LABEL_44:
          v29 = sub_1406D5A30(v28, v20, v21, v27, 4u);
          if ( v29 == -1073741444 )
          {
            v8 = -1073741772;
          }
          else if ( v29 < 0 )
          {
            v8 = v29;
          }
          goto LABEL_70;
        }
        break;
      case 2:
        v30 = *(_QWORD *)a4 - 0x4BA266CFD14D3EF3LL;
        if ( *(_QWORD *)a4 == 0x4BA266CFD14D3EF3LL )
          v30 = *(_QWORD *)(a4 + 8) - 0x147AB37DB0D389DLL;
        if ( !v30 )
        {
          if ( !a7 )
            goto LABEL_37;
          if ( *a6 == 0xFF )
          {
            v31 = 1;
          }
          else
          {
            if ( *a6 )
              goto LABEL_37;
            v31 = 0;
          }
          v32 = v39;
          v38 = v31;
          if ( a3 )
            v32 = a3;
          v8 = sub_14077EF20(a1, (__int64)v32, 0LL, 2u, 1, v37, &Handle);
          if ( v8 < 0 )
            goto LABEL_70;
          v28 = Handle;
          v27 = (__int64 *)&v38;
          goto LABEL_44;
        }
        break;
      case 3:
        v33 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
        if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
          v33 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
        if ( !v33 && a7 > 0x40 )
          goto LABEL_37;
        break;
    }
    v34 = v39;
    if ( a3 )
      v34 = a3;
    v35 = sub_1406D5A30(v34, v20, v21, a6, a7);
    if ( v35 < 0 )
      v8 = v35;
  }
LABEL_70:
  if ( Handle )
    ZwClose(Handle);
  if ( v39 )
    ZwClose(v39);
  return (unsigned int)v8;
}
