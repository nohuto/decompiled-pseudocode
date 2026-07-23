/*
 * XREFs of sub_140A29D04 @ 0x140A29D04
 * Callers:
 *     sub_140A29C1C @ 0x140A29C1C (sub_140A29C1C.c)
 *     sub_140A2A8B4 @ 0x140A2A8B4 (sub_140A2A8B4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406D0858 @ 0x1406D0858 (sub_1406D0858.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A29D04(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5, _DWORD *a6)
{
  ULONG v6; // r14d
  _WORD *v7; // r15
  unsigned int v8; // ebx
  int v9; // edi
  void *Pool2; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v20; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+30h] BYREF
  ULONG v22; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  Handle = 0LL;
  v7 = a4;
  v20 = a4;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  *a6 = 0;
  Pool2 = 0LL;
  v21 = 0;
  v11 = 0;
  if ( a1 )
    v12 = *(_QWORD *)(a1 + 224);
  else
    v12 = 0LL;
  v13 = sub_14077FFEC(v12, a2, a3, 0, 0x80000000, (__int64)&Handle);
  if ( v13 < 0 || (v13 = sub_1406994BC(v14, (int)Handle, 0, 0, (__int64)&v22, (__int64)&v21, 0LL), v13 < 0) )
  {
    v8 = v13;
  }
  else if ( !v7 || (v11 = v21 + 1, (Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (v21 + 1), 1380994640LL)) != 0LL) )
  {
    if ( v22 )
    {
      do
      {
        v21 = v11;
        v16 = sub_14069946C(v15, Handle, v6, Pool2, (__int64)&v21, 0LL, 0LL, 0LL);
        v15 = 3221225507LL;
        if ( v16 == -1073741789 )
        {
          v9 += v21;
          v8 = -1073741789;
        }
        else
        {
          if ( v16 < 0 )
          {
            v8 = v16;
            break;
          }
          v9 += v21;
          if ( v7 )
          {
            v21 = a5;
            ++v9;
            v17 = sub_1406D0858(v7, &v21, (const WCHAR *)Pool2, &v20);
            v7 = v20;
            if ( !v17 )
              v8 = -1073741789;
          }
        }
        ++v6;
      }
      while ( v6 < v22 );
    }
    *a6 = 2 * v9;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    v8 = -1073741801;
  }
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
