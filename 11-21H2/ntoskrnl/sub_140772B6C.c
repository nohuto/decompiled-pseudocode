/*
 * XREFs of sub_140772B6C @ 0x140772B6C
 * Callers:
 *     sub_140772AF8 @ 0x140772AF8 (sub_140772AF8.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140772D80 @ 0x140772D80 (sub_140772D80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140772B6C(
        HANDLE Handle,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v10; // r13d
  int v12; // edi
  unsigned __int64 v14; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  unsigned __int64 v19; // rdi
  wchar_t *v20; // rax
  __int64 v21; // r9
  char v22; // cl
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-38h] BYREF
  __int64 v28; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v10 = a3;
  v28 = 0LL;
  v27 = 0LL;
  v12 = sub_140772D80(Handle, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v12 == -1073741772 )
  {
    v12 = sub_1402DF9D0(a2, 0x7FFFLL, &v28);
    if ( v12 >= 0 )
    {
      v14 = v28 + 1;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * (v28 + 1), 1279739218LL);
      v16 = Pool2;
      if ( Pool2 )
      {
        v12 = sub_1402E0340(Pool2, v14, a2, 0LL, 0LL, 256);
        if ( !v12 )
        {
          v17 = (unsigned __int64)v16;
          v18 = (__int64)Handle;
          if ( !Handle && !wcsnicmp(v16, L"\\REGISTRY\\MACHINE\\", 0x12uLL) )
          {
            v18 = 2147483650LL;
            v17 = (unsigned __int64)(v16 + 18);
          }
          while ( 1 )
          {
            v19 = v17;
            v20 = wcschr((const wchar_t *)v17, 0x5Cu);
            v17 = (unsigned __int64)v20;
            if ( v20 )
            {
              *v20 = 0;
              do
                v17 += 2LL;
              while ( *(_WORD *)v17 == 92 );
              v17 &= -(__int64)(*(_WORD *)v17 != 0);
            }
            v21 = v29;
            v22 = a6;
            v23 = a8;
            if ( v17 )
            {
              v21 = 4LL;
              v22 = 0;
            }
            v24 = a5;
            if ( v17 )
              v23 = 0LL;
            v25 = v10;
            if ( v17 )
              v24 = 0LL;
            LOBYTE(v26) = v22;
            if ( v17 )
              v25 = v10 & 0xFFFFFFFC;
            v12 = sub_140772D80(v18, v19, v25, v21, v24, v26, &v27, v23, a9);
            if ( (HANDLE)v18 != Handle && v18 != 2147483650LL )
              ZwClose((HANDLE)v18);
            if ( v12 )
              break;
            if ( !v17 )
            {
              *a7 = v27;
              break;
            }
            v18 = v27;
          }
        }
        ExFreePoolWithTag(v16, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v12;
}
