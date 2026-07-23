/*
 * XREFs of sub_1403523C0 @ 0x1403523C0
 * Callers:
 *     sub_14035225C @ 0x14035225C (sub_14035225C.c)
 *     sub_14059A86C @ 0x14059A86C (sub_14059A86C.c)
 * Callees:
 *     sub_140228AA0 @ 0x140228AA0 (sub_140228AA0.c)
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_14026A718 @ 0x14026A718 (sub_14026A718.c)
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403523C0(
        __int64 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // r11
  int v14; // eax
  __int16 v15; // r8
  unsigned __int64 v16; // rsi
  int v17; // edx
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  volatile signed __int32 *v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v24; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int128 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  unsigned __int64 v28; // [rsp+50h] [rbp-28h]
  __int128 v29; // [rsp+58h] [rbp-20h]

  v8 = *a1;
  *(_WORD *)(a8 + 78) = 0;
  *(_QWORD *)a8 = v8;
  v10 = sub_14032BCC0(a4);
  if ( v10 > 0x18 || (v14 = 16777298, !_bittest(&v14, v10)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v12, v13, v11);
  v15 = 8 * (v10 & 0x1F);
  *(_WORD *)(a8 + 78) = v15;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_QWORD *)(a8 + 48) = &unk_140C53BC0;
  *(_QWORD *)(a8 + 40) = 5LL;
  *(_QWORD *)(a8 + 56) = (((v12 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((__int64)((((v12 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v12 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (a5 & 1) == 0 )
  {
    if ( (a3 & 0x20000000) != 0 )
    {
      if ( !(unsigned int)sub_14026A718(v16, 0) )
        return 3221225626LL;
      v24 = sub_140266158(a6, v16);
      *(_QWORD *)(a8 + 16) = v24;
      if ( !v24 )
      {
        v27 = 0LL;
        v28 = v16;
        v25 = v16;
        v26 = 0LL;
        v29 = 0LL;
        sub_140228AA0(&v25, 0, 0);
        return 3221225626LL;
      }
      *(_WORD *)(a8 + 78) |= 4u;
    }
    else if ( a7 )
    {
      *(_QWORD *)(a8 + 16) = a7;
      *(_DWORD *)(a8 + 40) = 15;
      *(_WORD *)(a8 + 78) = v15 | 0x100;
    }
    else
    {
      v22 = sub_140284A20(a3, a6, v16);
      *(_QWORD *)(a8 + 16) = v22;
      if ( !v22 )
        return 3221225626LL;
    }
LABEL_7:
    *(_QWORD *)(a8 + 24) = 0LL;
    result = 0LL;
    *(_QWORD *)(a8 + 8) = v16;
    *(_DWORD *)(a8 + 72) = a6;
    *(_QWORD *)(a8 + 64) = 0LL;
    *(_QWORD *)(a8 + 32) = 0LL;
    return result;
  }
  *(_WORD *)(a8 + 78) = v15 | 2;
  if ( (a5 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 1;
    *(_DWORD *)(a8 + 44) = 2;
    v18 = (unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 1368LL) + 192LL);
  }
  else
  {
    v17 = 6;
    v18 = (unsigned __int16 *)&unk_140C53800;
  }
  v19 = v18[87];
  *(_QWORD *)(a8 + 48) = v18;
  v20 = qword_140C51F48;
  *(_DWORD *)(a8 + 40) = v17;
  if ( (unsigned int)sub_14032A4B0(*(_QWORD *)(v20 + 8 * v19), v16, 1u) )
    goto LABEL_7;
  return 3221225626LL;
}
