/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x180071E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x18007213C (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        void *a4,
        unsigned int *a5,
        void *a6,
        unsigned int *a7,
        void *a8,
        unsigned int *a9,
        void *a10,
        unsigned int *a11)
{
  const void *v14; // rcx
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  unsigned int *v17; // r8
  unsigned int *v18; // r9
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  unsigned __int8 *v23; // rdx
  void *v24; // rbx
  void *v25; // rbx
  __int64 result; // rax
  void *v27; // rbx
  unsigned int v28; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-2Ch] BYREF
  void *Src; // [rsp+58h] [rbp-28h] BYREF
  void *v31; // [rsp+60h] [rbp-20h] BYREF
  void *v32; // [rsp+68h] [rbp-18h] BYREF
  void *v33; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+38h] BYREF

  if ( *(__int16 *)(a1 + 2) >= 0 )
    return 3221225703LL;
  RtlpQuerySecurityDescriptor(
    a1,
    (unsigned int)&Src,
    (unsigned int)&v29,
    (unsigned int)&v31,
    (__int64)&v28,
    (__int64)&v33,
    (__int64)&v35,
    (__int64)&v32,
    (__int64)&v34);
  v15 = a11;
  v16 = a9;
  v17 = a7;
  v18 = a5;
  v19 = v34;
  v20 = v35;
  v21 = v28;
  v22 = v29;
  if ( a2 && *a3 >= 0x28u && v29 <= *a9 && v35 <= *a5 && v34 <= *a7 && v28 <= *a11 )
  {
    memmove((void *)a2, v14, 0x14uLL);
    v23 = (unsigned __int8 *)Src;
    *(_WORD *)(a2 + 2) &= ~0x8000u;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    if ( v23 )
    {
      v24 = a8;
      memmove(a8, v23, 4LL * v23[1] + 8);
      *(_QWORD *)(a2 + 8) = v24;
    }
    if ( v31 )
    {
      v25 = a10;
      memmove(a10, v31, 4LL * *((unsigned __int8 *)v31 + 1) + 8);
      *(_QWORD *)(a2 + 16) = v25;
    }
    if ( v32 )
    {
      v27 = a6;
      memmove(a6, v32, *((unsigned __int16 *)v32 + 1));
      *(_QWORD *)(a2 + 24) = v27;
    }
    if ( v33 )
    {
      memmove(a4, v33, *((unsigned __int16 *)v33 + 1));
      *(_QWORD *)(a2 + 32) = a4;
    }
    return 0LL;
  }
  else
  {
    *a3 = 40;
    *v15 = v21;
    result = 3221225507LL;
    *v16 = v22;
    *v17 = v19;
    *v18 = v20;
  }
  return result;
}
