/*
 * XREFs of sub_1406DA4DC @ 0x1406DA4DC
 * Callers:
 *     sub_1406DA264 @ 0x1406DA264 (sub_1406DA264.c)
 *     sub_1407857F0 @ 0x1407857F0 (sub_1407857F0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 */

__int64 __fastcall sub_1406DA4DC(int a1, int a2, void *a3, __int64 a4, __int64 a5, __int64 a6, int a7, _DWORD *a8)
{
  _DWORD *v8; // r13
  int v9; // ebx
  _DWORD *v10; // rax
  HANDLE v11; // r10
  __int64 v13; // r15
  int v15; // r14d
  int v16; // r11d
  __int64 **v17; // rdx
  unsigned int i; // r9d
  __int64 *v19; // r8
  __int64 **v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  int v24; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF

  v8 = (_DWORD *)a5;
  v9 = 0;
  v10 = a8;
  v11 = 0LL;
  v13 = a6;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  Handle = 0LL;
  if ( v13 )
    v15 = a7;
  else
    v15 = 0;
  v16 = *(_DWORD *)(a4 + 16);
  v17 = &off_140A38610;
  for ( i = 0; i < 2; ++i )
  {
    v19 = *v17;
    v20 = v17;
    if ( v16 == *((_DWORD *)*v17 + 4) )
    {
      v21 = *(_QWORD *)a4 - *v19;
      if ( *(_QWORD *)a4 == *v19 )
        v21 = *(_QWORD *)(a4 + 8) - v19[1];
      if ( !v21 )
        break;
    }
    v20 = 0LL;
    v17 += 4;
  }
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v9 = sub_14077F2EC(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( v9 < 0 )
      goto LABEL_18;
    v11 = Handle;
  }
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_24;
  v22 = *(_QWORD *)a4 - 0x48B98C7380497100LL;
  if ( *(_QWORD *)a4 == 0x48B98C7380497100LL )
    v22 = *(_QWORD *)(a4 + 8) - 0x6EC5197E38CED9AALL;
  if ( v22 )
  {
LABEL_24:
    LODWORD(a5) = v15;
    if ( a3 )
      v11 = a3;
    v24 = sub_14077FC64(v11, (__int64)&a5);
    if ( v24 != -1073741772 && v24 != -1073741444 )
    {
      if ( !v24 || v24 == -1073741789 )
      {
        if ( *((_DWORD *)v20 + 6) )
        {
          v9 = -1073741811;
        }
        else
        {
          *a8 = a5;
          *v8 = *((_DWORD *)v20 + 2);
          if ( v24 || !v15 )
            v9 = -1073741789;
        }
      }
      else
      {
        v9 = v24;
      }
      goto LABEL_18;
    }
  }
  else
  {
    LODWORD(a6) = 0;
    LODWORD(a5) = 4;
    if ( a3 )
      v11 = a3;
    sub_14077FC64(v11, (__int64)&a5);
  }
  v9 = -1073741275;
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
