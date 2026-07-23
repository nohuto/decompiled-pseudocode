/*
 * XREFs of sub_14077386C @ 0x14077386C
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     sub_14024F418 @ 0x14024F418 (sub_14024F418.c)
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077386C(
        PVOID *a1,
        unsigned int *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        char a9,
        __int64 *a10)
{
  char v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned int v15; // ecx
  int v17; // r13d
  PVOID v18; // r8
  int v19; // eax
  int v20; // ecx
  int v22; // r10d
  unsigned int v23; // r9d
  const WCHAR *v24; // rbx
  int v25; // r14d
  __int64 v26; // rdi
  unsigned int v27; // edi
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 Pool2; // rax
  int v31; // eax
  int v32; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v33[3]; // [rsp+64h] [rbp-Ch] BYREF
  unsigned int v35; // [rsp+C8h] [rbp+58h] BYREF

  v10 = a7;
  v11 = a6;
  v12 = a5;
  v32 = 0;
  v15 = *a2;
  v35 = *a2;
  v17 = 0;
  v18 = *a1;
  v33[0] = 0;
  if ( a4 )
  {
    v17 = (a7 != 0) + 1;
    v19 = sub_14077DA5C(qword_140D00AC0, a5, v17, a6, 0LL, a4, (__int64)v33, (__int64)v18, v15, (__int64)&v35, 0);
  }
  else if ( a7 )
  {
    v19 = sub_1406BDAE4(*(__int64 *)&qword_140D00AC0, a5, a6, a3, (__int64)&v32, (__int64)v18, (__int64)&v35);
  }
  else
  {
    v19 = sub_14077CD90(qword_140D00AC0, a5, a6, a3, (__int64)&v32, (__int64)v18, (__int64)&v35, 0);
  }
  v20 = v19;
  if ( v19 == -1073741789 )
  {
    ExFreePoolWithTag(*a1, 0);
    v29 = v35;
    *a2 = v35;
    Pool2 = ExAllocatePool2(256LL, v29, 1852141648LL);
    *a1 = (PVOID)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( a4 )
    {
      v20 = sub_14077DA5C(qword_140D00AC0, v12, v17, v11, 0LL, a4, (__int64)v33, Pool2, v35, (__int64)&v35, 0);
    }
    else
    {
      if ( v10 )
        v31 = sub_1406BDAE4(*(__int64 *)&qword_140D00AC0, v12, v11, a3, (__int64)&v32, Pool2, (__int64)&v35);
      else
        v31 = sub_14077CD90(qword_140D00AC0, v12, v11, a3, (__int64)&v32, Pool2, (__int64)&v35, 0);
      v20 = v31;
    }
  }
  if ( v20 >= 0 )
  {
    if ( a4 )
    {
      if ( v33[0] == 8210 )
      {
        v32 = 7;
        goto LABEL_14;
      }
      if ( v33[0] != 18 )
      {
        v22 = 0;
        v32 = 0;
        return (unsigned int)sub_14067B998(v22, (const WCHAR *)*a1, v35, a10, a8);
      }
      v22 = 1;
      v32 = 1;
    }
    else
    {
      v22 = v32;
    }
    if ( v22 != 7 )
      return (unsigned int)sub_14067B998(v22, (const WCHAR *)*a1, v35, a10, a8);
LABEL_14:
    if ( *a2 < 2 )
      return (unsigned int)-1073741823;
    v23 = v35;
    if ( v35 < 2 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v24 = (const WCHAR *)*a1;
      if ( *(_WORD *)*a1 )
      {
        v25 = a8;
        while ( 1 )
        {
          v26 = -1LL;
          do
            ++v26;
          while ( v24[v26] );
          v27 = v26 + 1;
          if ( (int)sub_14024F418(v23, 2 * v27, (int *)&v35) < 0 )
            break;
          v20 = sub_14067B998(1, v24, v28, a10, v25);
          if ( v20 >= 0 )
          {
            v23 = v35;
            if ( v35 >= 2 )
            {
              v24 += v27;
              if ( *v24 )
                continue;
            }
          }
          return (unsigned int)v20;
        }
        return 0;
      }
    }
  }
  return (unsigned int)v20;
}
