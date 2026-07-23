/*
 * XREFs of sub_140A1E354 @ 0x140A1E354
 * Callers:
 *     sub_140A1E7F0 @ 0x140A1E7F0 (sub_140A1E7F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 *     sub_140A207C4 @ 0x140A207C4 (sub_140A207C4.c)
 *     sub_140A2089C @ 0x140A2089C (sub_140A2089C.c)
 *     sub_140A20B1C @ 0x140A20B1C (sub_140A20B1C.c)
 *     sub_140A20B84 @ 0x140A20B84 (sub_140A20B84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1E354(__int64 a1, __int64 a2)
{
  void *v4; // r14
  int v5; // ebx
  PVOID PoolWithTag; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0;
  v15 = 0;
  v20 = 0LL;
  v16 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  if ( (int)sub_140812B74(a1, (unsigned int *)&qword_14003C210, &v14) >= 0 )
  {
    sub_140A1CC1C(v14);
    v14 = 0LL;
  }
  v18[1] = 269484033;
  v18[0] = 1;
  v5 = sub_140A1CB84(a1, (int)&qword_14003C210, (int)v18, (__int64 *)&v14);
  if ( v5 >= 0 )
  {
    v5 = sub_140A207C4(&v16, &v15);
    if ( v5 >= 0 )
    {
      if ( v15 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v15, 0x4B444342u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v5 = -1073741670;
          goto LABEL_19;
        }
        sub_140A20B84(a2, v16, PoolWithTag, &v15);
        if ( v15 )
        {
          v5 = sub_140803250(v14, 0x24000001u, v7, (__int64)v4, 16 * v15);
          if ( v5 < 0 )
            goto LABEL_19;
        }
      }
      v8 = sub_140A2089C(&P, &v17);
      v10 = (unsigned int *)P;
      v5 = v8;
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)P + 2) == -1
          || (v20 = *((unsigned int *)P + 2), v5 = sub_140803250(v14, 0x25000004u, v9, (__int64)&v20, 8u), v5 >= 0) )
        {
          v11 = v10[4];
          if ( (_DWORD)v11 == -2
            || (int)sub_140A20B1C(a2, v11, &v21) < 0
            || (v5 = sub_140803250(v14, 0x24000002u, v12, (__int64)&v21, 0x10u), v5 >= 0) )
          {
            v5 = 0;
          }
        }
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4B444342u);
    }
LABEL_19:
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( v14 )
  {
    if ( v5 < 0 )
    {
      sub_140A1CC1C(v14);
LABEL_28:
      sub_1408138F0(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v5);
      return (unsigned int)v5;
    }
    sub_140812D00((__int64)v14);
  }
  else if ( v5 < 0 )
  {
    goto LABEL_28;
  }
  return (unsigned int)v5;
}
