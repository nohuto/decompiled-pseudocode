/*
 * XREFs of sub_14024B4DC @ 0x14024B4DC
 * Callers:
 *     sub_14024B47C @ 0x14024B47C (sub_14024B47C.c)
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_1402983F0 @ 0x1402983F0 (sub_1402983F0.c)
 *     sub_1402D8EEC @ 0x1402D8EEC (sub_1402D8EEC.c)
 *     sub_1403A6A44 @ 0x1403A6A44 (sub_1403A6A44.c)
 *     sub_1403EB1A8 @ 0x1403EB1A8 (sub_1403EB1A8.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140AF2E90 @ 0x140AF2E90 (sub_140AF2E90.c)
 *     sub_140B2EB08 @ 0x140B2EB08 (sub_140B2EB08.c)
 */

__int64 __fastcall sub_14024B4DC(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned int v9; // r9d
  unsigned __int64 v10; // r8
  unsigned int *v11; // rcx
  int v12; // edx
  int v13; // r9d
  int v14; // r10d
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // r8d
  unsigned int i; // ecx
  _QWORD v20[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
    sub_14024B6F8();
  else
    _mm_lfence();
  result = sub_1403EB1A8(BugCheckParameter1);
  if ( !a4 )
  {
    _mm_lfence();
    sub_1402D8EEC(0x140000000uLL, v20, &v21);
    if ( !v20[0] )
      KeBugCheck(0x31u);
    v7 = sub_140AF2E90();
    v9 = v21 / 0xC;
    if ( !(v21 / 0xC) )
      goto LABEL_31;
    v10 = v7 - 0x140000000LL;
    v11 = (unsigned int *)(v8 + 12LL * (v9 - 1));
    if ( v10 < *v11 )
    {
      v12 = 0;
      v13 = v9 - 2;
      while ( v13 >= v12 )
      {
        v14 = (v12 + v13) >> 1;
        v11 = (unsigned int *)(v8 + 12LL * v14);
        if ( v10 < *v11 )
        {
          v13 = v14 - 1;
        }
        else
        {
          if ( v10 < v11[3] )
            break;
          v12 = v14 + 1;
        }
      }
    }
    if ( v10 < *v11 || v10 >= v11[1] )
      v11 = 0LL;
    if ( !v11 )
LABEL_31:
      KeBugCheck(0x31u);
    v15 = sub_1402983F0(v11, 0x140000000uLL);
    v17 = sub_1403A6A44(v15, 0x40000000u, 1, v16, 0LL, (__int64)v20);
    if ( v17 < 0 )
      KeBugCheckEx(0x31u, v17, 0LL, 0LL, 0LL);
    v18 = 1;
    for ( i = 0; i < *(_DWORD *)v20[0]; ++i )
    {
      if ( i )
      {
        if ( *(_DWORD *)(v20[0] + 16LL * i + 12) != v18 )
          KeBugCheck(0x31u);
      }
      v18 = *(_DWORD *)(v20[0] + 16LL * i + 12);
    }
    if ( v18 == 1 )
      KeBugCheck(0x31u);
    return sub_14042A5E0(0LL, 0LL);
  }
  return result;
}
