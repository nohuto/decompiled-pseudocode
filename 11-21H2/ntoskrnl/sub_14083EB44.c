/*
 * XREFs of sub_14083EB44 @ 0x14083EB44
 * Callers:
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     sub_1403D0BA8 @ 0x1403D0BA8 (sub_1403D0BA8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_1406CB590 @ 0x1406CB590 (sub_1406CB590.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083EB44(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  void *v5; // rdi
  unsigned int v7; // eax
  unsigned __int64 v8; // rsi
  char *v9; // r15
  ULONG v10; // r14d
  unsigned int v11; // eax
  int v12; // eax
  __int64 Pool2; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-49h] BYREF
  char v21; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  v18 = 0;
  HighLimit = 0LL;
  v5 = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)sub_1406CB590(KeyHandle, 0LL, &v18, 0LL, 0LL, 0LL) )
    goto LABEL_8;
  v7 = v18;
  if ( v18 )
  {
    if ( v18 + 1 < v18 )
      return (unsigned int)-1073741675;
    v7 = v18 + 1;
  }
  v8 = 2LL * v7;
  if ( v8 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v8 > 0x50 )
  {
    Pool2 = ExAllocatePool2(256LL, (unsigned int)v8, 1279739218LL);
    v5 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = (char *)Pool2;
    goto LABEL_9;
  }
LABEL_8:
  v9 = &v21;
  LODWORD(v8) = 80;
LABEL_9:
  v10 = 0;
  while ( 1 )
  {
    v18 = (unsigned int)v8 >> 1;
    v11 = sub_1406CB3B4(KeyHandle, v10, v9, &v18);
    if ( v11 == -2147483622 )
      break;
    if ( v11 == -1073741444 )
    {
      v3 = 0;
      break;
    }
    if ( v11 == -1073741789 )
    {
      v8 = 2LL * v18;
      if ( v8 > 0xFFFFFFFF )
      {
        v3 = -1073741675;
        break;
      }
      v3 = 0;
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v15 = ExAllocatePool2(256LL, (unsigned int)v8, 1279739218LL);
      v5 = (void *)v15;
      if ( !v15 )
        return (unsigned int)-1073741801;
      v9 = (char *)v15;
    }
    else
    {
      v3 = 0;
      if ( v11 )
      {
        v3 = v11;
        break;
      }
      *(_WORD *)&v9[2 * ((unsigned __int64)(unsigned int)v8 >> 1) - 2] = 0;
      v12 = sub_1403D0BA8((__int64)KeyHandle, (__int64)v9, a3);
      if ( v12 )
      {
        v16 = v12 - 1;
        if ( !v16 )
          goto LABEL_9;
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            v3 = -1073741248;
          else
            v3 = -1073741595;
        }
        break;
      }
      ++v10;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v3;
}
