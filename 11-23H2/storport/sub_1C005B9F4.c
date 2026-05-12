/*
 * XREFs of sub_1C005B9F4 @ 0x1C005B9F4
 * Callers:
 *     sub_1C005276C @ 0x1C005276C (sub_1C005276C.c)
 *     sub_1C0054830 @ 0x1C0054830 (sub_1C0054830.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007AB88 @ 0x1C007AB88 (sub_1C007AB88.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 */

__int64 __fastcall sub_1C005B9F4(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        _BYTE *a7)
{
  size_t v9; // r12
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v15; // r13
  unsigned int v16; // eax
  size_t v17; // r14
  void *v18; // rax
  void *v19; // rsi
  int v20; // r9d
  _OWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  _BYTE Dst[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+C8h] [rbp-38h]
  _OWORD v28[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+100h] [rbp+0h]

  v9 = a3;
  memset_0(Dst, 0, 0x50uLL);
  v24 = 0;
  v29 = 0LL;
  v10 = *(_DWORD *)a1;
  memset(v23, 0, sizeof(v23));
  memset(v28, 0, sizeof(v28));
  if ( v10 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 3496);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 6008);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v12 )
    return (unsigned int)-1073741637;
  v15 = *(_QWORD *)(a1 + 8);
  v13 = sub_1C005A04C((int *)a1, a2, (__int64)Dst, a7);
  if ( v13 >= 0 )
  {
    if ( (v26 || v27)
      && (v16 = *(_DWORD *)(v12 + 140) / (unsigned int)*(unsigned __int16 *)(v12 + 136),
          v17 = v16,
          (unsigned int)v9 <= v16) )
    {
      v18 = (void *)sub_1C0007CF4(256LL, v16, 1129603410LL, v15);
      v19 = v18;
      if ( v18 )
      {
        memset_0(v18, 0, v17);
        if ( (_DWORD)v9 )
          memmove(v19, a4, v9);
        v13 = sub_1C00596F4(v11, 0, a5, a6, (unsigned int *)v23, a7);
        if ( v13 >= 0 )
        {
          v13 = sub_1C007A484(v11, 2LL, v28);
          if ( v13 >= 0 )
          {
            v13 = sub_1C007B138(v11, v28);
            if ( v13 >= 0 )
            {
              v13 = sub_1C007AB88(v11, (unsigned int)v28, a2, v20, v17, (__int64)v19, (__int64)v23);
              sub_1C007B1C8(v11, v28, (unsigned int)v13);
              if ( v13 < 0 )
                sub_1C0042880(a7, 32LL, (__int64)"TcglibSetBandMetadata");
            }
            sub_1C0079C54(v11, v28);
          }
          else
          {
            sub_1C0042880(a7, 32LL, (__int64)"TcglibOpenSession");
          }
        }
        ExFreePoolWithTag(v19, 0x43546152u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v13;
}
