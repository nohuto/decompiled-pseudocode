/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180005990
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x180005980 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, struct SaDeviceParams **a2)
{
  struct SaDeviceParams **v2; // rbp
  unsigned __int128 v4; // rax
  __int64 v5; // r14
  unsigned int v6; // r13d
  SaDeviceParams *v7; // rbx
  _WORD *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  char *v14; // rsi
  __int16 v15; // cx
  __int64 v16; // r15
  bool v17; // cf
  __int64 v18; // rax
  __int64 v19; // rdi
  LPVOID v20; // rsi
  size_t v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  LPVOID v24; // rsi
  size_t v25; // rbx
  LPMALLOC ppMalloc; // [rsp+60h] [rbp+8h] BYREF
  struct SaDeviceParams **v28; // [rsp+68h] [rbp+10h]
  __int64 v29; // [rsp+70h] [rbp+18h]

  v28 = a2;
  v2 = a2;
  *(_QWORD *)&v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0;
  if ( (_QWORD)v4 )
    memset_0((void *)v4, 0, 0x60uLL);
  else
    v5 = 0LL;
  v7 = (SaDeviceParams *)v5;
  v29 = v5;
  v8 = *(_WORD **)a1;
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  *(_QWORD *)v5 = 0LL;
  v10 = v9 + 1;
  if ( v9 + 1 >= v9 )
  {
    v4 = v10 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v10, 2uLL) )
    {
      *(_QWORD *)&v4 = CoTaskMemAlloc(2 * v10);
      v11 = v4;
      *(_QWORD *)v5 = v4;
      if ( !(_QWORD)v4 )
        goto LABEL_38;
      if ( v10 > 0x7FFFFFFF )
        goto LABEL_35;
      if ( v9 < 0x7FFFFFFF )
      {
        if ( !v8 )
        {
          v8 = &unk_18017F160;
          v9 = 0LL;
        }
        if ( v10 )
        {
          *(_QWORD *)&v4 = v10;
          *((_QWORD *)&v4 + 1) = v11;
          v12 = 0LL;
          v13 = v9 - v10;
          v14 = (char *)v8 - v11;
          while ( (_QWORD)v4 + v13 )
          {
            v15 = *(_WORD *)&v14[*((_QWORD *)&v4 + 1)];
            if ( !v15 )
              break;
            **((_WORD **)&v4 + 1) = v15;
            *((_QWORD *)&v4 + 1) += 2LL;
            ++v12;
            *(_QWORD *)&v4 = v4 - 1;
            if ( !(_QWORD)v4 )
            {
              *(_WORD *)(*((_QWORD *)&v4 + 1) - 2LL) = 0;
              goto LABEL_19;
            }
          }
          **((_WORD **)&v4 + 1) = 0;
          v17 = v10 == v12;
          v16 = v10 - v12;
          if ( !v17 && v16 != 1 && (unsigned __int64)(2 * v16) > 2 )
            memset_0((void *)(v11 + 2 * (v12 + 1)), 0, 2 * v16 - 2);
        }
        goto LABEL_19;
      }
      if ( v9 != -1LL )
LABEL_35:
        *(_WORD *)v4 = 0;
LABEL_19:
      v18 = *((_QWORD *)a1 + 2);
      if ( !v18 )
      {
LABEL_24:
        v22 = *((_QWORD *)a1 + 3);
        if ( !v22 )
        {
LABEL_29:
          *(_OWORD *)(v5 + 64) = *((_OWORD *)a1 + 4);
          *(_OWORD *)(v5 + 48) = *((_OWORD *)a1 + 3);
          *(_DWORD *)(v5 + 8) = *((_DWORD *)a1 + 2);
          *(_QWORD *)(v5 + 32) = *((_QWORD *)a1 + 4);
          *(_QWORD *)(v5 + 40) = *((_QWORD *)a1 + 5);
          *(_OWORD *)(v5 + 80) = *((_OWORD *)a1 + 5);
          v7 = 0LL;
          *v2 = (struct SaDeviceParams *)v5;
          goto LABEL_30;
        }
        v23 = *(unsigned __int16 *)(v22 + 16);
        v24 = CoTaskMemAlloc(v23 + 18);
        *(_QWORD *)(v5 + 24) = v24;
        if ( v24 )
        {
          v25 = 0LL;
          if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
          {
            v25 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v24);
            ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          }
          memset_0(*(void **)(v5 + 24), 0, v25);
          memcpy_0(*(void **)(v5 + 24), *((const void **)a1 + 3), v23 + 18);
          goto LABEL_29;
        }
        goto LABEL_38;
      }
      v19 = *(unsigned __int16 *)(v18 + 16);
      v20 = CoTaskMemAlloc(v19 + 18);
      *(_QWORD *)(v5 + 16) = v20;
      if ( v20 )
      {
        v21 = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v21 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v20);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        }
        memset_0(*(void **)(v5 + 16), 0, v21);
        memcpy_0(*(void **)(v5 + 16), *((const void **)a1 + 2), v19 + 18);
        v2 = v28;
        goto LABEL_24;
      }
LABEL_38:
      v6 = -2147024882;
      goto LABEL_30;
    }
  }
  v6 = -2147024362;
LABEL_30:
  if ( v7 )
    SaDeviceParams::`scalar deleting destructor'(v7, DWORD2(v4));
  return v6;
}
