/*
 * XREFs of OffGradientFill @ 0x1C00D6ECC
 * Callers:
 *     ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C00D6CD0 (-SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A1830 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C002D358 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffGradientFill(
        __int64 (__fastcall *a1)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, __int128 *, __int64 *, int),
        LONG *a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int128 *a10,
        __int64 *a11,
        int a12)
{
  LONG v12; // esi
  LONG v14; // edi
  LONG v15; // edx
  _DWORD *v16; // rbx
  __int128 *v17; // r12
  __int64 *v18; // r15
  _DWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r15d
  __int64 v22; // rcx
  __int64 v24; // [rsp+60h] [rbp-41h] BYREF
  __int64 v25; // [rsp+68h] [rbp-39h]
  __int64 v26; // [rsp+70h] [rbp-31h]
  __int64 v27; // [rsp+78h] [rbp-29h]
  __int64 (__fastcall *v28)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, __int128 *, __int64 *, int); // [rsp+80h] [rbp-21h]
  __int128 v29; // [rsp+88h] [rbp-19h] BYREF

  v12 = a2[1];
  v14 = *a2;
  v15 = *a2;
  v16 = a6;
  v17 = a10;
  v18 = a11;
  v26 = a5;
  v27 = a3;
  v28 = a1;
  v25 = a8;
  CLIPOBJ_vOffset(a4, v15, v12);
  v29 = 0LL;
  if ( a10 )
  {
    LODWORD(v29) = v14 + *(_DWORD *)a10;
    DWORD2(v29) = v14 + *((_DWORD *)a10 + 2);
    DWORD1(v29) = v12 + *((_DWORD *)a10 + 1);
    v17 = &v29;
    HIDWORD(v29) = v12 + *((_DWORD *)a10 + 3);
  }
  v24 = 0LL;
  if ( a11 )
  {
    LODWORD(v24) = *(_DWORD *)a11 - v14;
    v18 = &v24;
    HIDWORD(v24) = *((_DWORD *)a11 + 1) - v12;
  }
  v19 = a6;
  if ( a7 )
  {
    v20 = a7;
    do
    {
      *v19 += v14;
      v19[1] += v12;
      v19 += 4;
      --v20;
    }
    while ( v20 );
  }
  v21 = v28(v27, a4, v26, a6, a7, v25, a9, v17, v18, a12);
  CLIPOBJ_vOffset(a4, -v14, -v12);
  if ( a7 )
  {
    v22 = a7;
    do
    {
      *v16 -= v14;
      v16[1] -= v12;
      v16 += 4;
      --v22;
    }
    while ( v22 );
  }
  return v21;
}
