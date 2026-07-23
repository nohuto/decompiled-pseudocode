/*
 * XREFs of sub_140A2C368 @ 0x140A2C368
 * Callers:
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_140A2C368(__int64 a1, __int64 a2, void *a3, __int64 a4, int a5, _BYTE *a6, ULONG a7)
{
  int v7; // r14d
  int v8; // ebx
  int v9; // r11d
  HANDLE v11; // rcx
  __int64 **v15; // r9
  unsigned int i; // r10d
  __int64 *v17; // r8
  __int64 **v18; // rdi
  __int64 v19; // rdx
  const WCHAR *v20; // rdx
  ULONG v21; // r8d
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v26; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = 0;
  v11 = 0LL;
  v26 = 0;
  Handle = 0LL;
  v15 = &off_140A38610;
  for ( i = 0; i < 2; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v7 == *((_DWORD *)*v15 + 4) )
    {
      v19 = *(_QWORD *)a4 - *v17;
      if ( *(_QWORD *)a4 == *v17 )
        v19 = *(_QWORD *)(a4 + 8) - v17[1];
      if ( !v19 )
        break;
    }
    v18 = 0LL;
    v15 += 4;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  if ( a5 != *((_DWORD *)v18 + 2) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v8 = sub_14077F2EC(a1, a2, 16, 0, 2, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_31;
    v11 = Handle;
    v9 = v26;
  }
  v20 = (const WCHAR *)v18[2];
  v21 = *((_DWORD *)v18 + 6);
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_26;
  v22 = *(_QWORD *)a4 - 0x48B98C7380497100LL;
  if ( *(_QWORD *)a4 == 0x48B98C7380497100LL )
    v22 = *(_QWORD *)(a4 + 8) - 0x6EC5197E38CED9AALL;
  if ( v22 )
  {
LABEL_26:
    if ( a3 )
      v11 = a3;
    v24 = sub_1406D5A30(v11, v20, v21, a6, a7);
    if ( v24 != -1073741444 )
    {
      if ( v24 < 0 )
        v8 = v24;
      goto LABEL_31;
    }
  }
  else
  {
    if ( *a6 == 0xFF )
      v9 = 1;
    v26 = v9;
    if ( a3 )
      v11 = a3;
    v23 = sub_1406D5A30(v11, v20, v21, &v26, 4u);
    if ( v23 != -1073741444 )
    {
      if ( v23 < 0 )
        v8 = v23;
      goto LABEL_31;
    }
  }
  v8 = -1073741810;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
