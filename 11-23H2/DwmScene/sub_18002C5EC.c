/*
 * XREFs of sub_18002C5EC @ 0x18002C5EC
 * Callers:
 *     sub_18002CE40 @ 0x18002CE40 (sub_18002CE40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001338C @ 0x18001338C (sub_18001338C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001CA2C @ 0x18001CA2C (sub_18001CA2C.c)
 *     sub_18001D2D8 @ 0x18001D2D8 (sub_18001D2D8.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18001E8C0 @ 0x18001E8C0 (sub_18001E8C0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18002A80C @ 0x18002A80C (sub_18002A80C.c)
 *     sub_18002AAE4 @ 0x18002AAE4 (sub_18002AAE4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002C5EC(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  const void **v8; // rbx
  int v9; // ecx
  double v10; // xmm6_8
  void **v11; // rdx
  size_t v12; // r8
  const void *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 *v17; // rbx
  void **v18; // rax
  __int64 v19; // rdx
  __int64 **v20; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v28; // [rsp+38h] [rbp-69h] BYREF
  __int64 v29; // [rsp+40h] [rbp-61h]
  int v30; // [rsp+48h] [rbp-59h] BYREF
  __int64 v31; // [rsp+50h] [rbp-51h] BYREF
  __int64 v32; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v34[32]; // [rsp+88h] [rbp-19h] BYREF

  v29 = 0LL;
  v2 = (_QWORD *)sub_18001C190();
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  v28 = v2;
  v3 = *(_QWORD *)(a1 + 416);
  v4 = *(_QWORD *)(a1 + 424);
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(v3 + 120) )
    {
      sub_18002A80C(
        *(_QWORD **)(a1 + 384),
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderoutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v3 + 128));
      v5 = v28;
      sub_18001CA2C((__int64)&v28, (__int64)&v28, v28[1]);
      v5[1] = v5;
      *v5 = v5;
      v5[2] = v5;
      v29 = 0LL;
      v7 = **(_QWORD **)(v3 + 136);
      v31 = v7;
      while ( !*(_BYTE *)(v7 + 25) )
      {
        v8 = (const void **)(v7 + 32);
        v9 = *(_DWORD *)(v7 + 64);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *(double *)(v7 + 80) - *(double *)(v7 + 72);
            v30 = 0;
            sub_18002AAE4((__int64 *)&v28, (__int64)&v32, (_QWORD *)(v7 + 32), &v30);
            *(double *)(v32 + 64) = v10 + *(double *)(v32 + 64);
          }
        }
        else
        {
          v11 = &Buf2;
          if ( (unsigned __int64)qword_1801D88A0 >= 0x10 )
            v11 = (void **)Buf2;
          v12 = *(_QWORD *)(v7 + 48);
          v13 = (const void *)(v7 + 32);
          if ( *(_QWORD *)(v7 + 56) >= 0x10uLL )
            v13 = *v8;
          if ( v12 == qword_1801D8898 && !memcmp(v13, v11, v12) )
          {
            sub_18002A740(*(_QWORD **)(a1 + 384), v14, 618LL);
          }
          else
          {
            v15 = *(_QWORD **)(a1 + 384);
            sub_18001338C(v33, (__int64)&unk_1801D3EB8, v8);
            sub_18002A740(v15, v16, 623LL);
            sub_180011B24((__int64)v33);
          }
        }
        sub_18001D3F8(&v31);
        v7 = v31;
      }
      v17 = (__int64 *)*v28;
      while ( !*((_BYTE *)v17 + 25) )
      {
        v18 = (void **)sub_18001338C(v34, (__int64)&unk_1801D3EB8, v17 + 4);
        sub_18001E8C0(v33, v18, qword_1801D8868);
        sub_180011B24((__int64)v34);
        sub_18002A740(*(_QWORD **)(a1 + 384), v19, 644LL);
        sub_180011B24((__int64)v33);
        v20 = (__int64 **)v17[2];
        if ( *((_BYTE *)v20 + 25) )
        {
          for ( i = (__int64 *)v17[1]; !*((_BYTE *)i + 25) && v17 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v17 = i;
          v17 = i;
        }
        else
        {
          v17 = (__int64 *)v17[2];
          for ( j = *v20; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v17 = j;
        }
      }
      sub_18002A740(*(_QWORD **)(a1 + 384), v6, 648LL);
      sub_18002A740(*(_QWORD **)(a1 + 384), v23, 649LL);
      sub_18002A740(*(_QWORD **)(a1 + 384), v24, 650LL);
      sub_18002A740(*(_QWORD **)(a1 + 384), v25, 651LL);
      sub_18002A740(*(_QWORD **)(a1 + 384), v26, 652LL);
    }
    v3 += 152LL;
  }
  return sub_18001D2D8((void **)&v28);
}
