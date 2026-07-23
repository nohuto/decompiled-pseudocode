/*
 * XREFs of sub_140A25D48 @ 0x140A25D48
 * Callers:
 *     sub_140A25858 @ 0x140A25858 (sub_140A25858.c)
 * Callees:
 *     sub_1406E7A78 @ 0x1406E7A78 (sub_1406E7A78.c)
 *     sub_140A25980 @ 0x140A25980 (sub_140A25980.c)
 *     sub_140A263D8 @ 0x140A263D8 (sub_140A263D8.c)
 *     sub_140A27790 @ 0x140A27790 (sub_140A27790.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A25D48(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  int *v6; // r14
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  void *Pool2; // rbx
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned int v19; // r14d
  __int64 v20; // rbp
  int v21; // eax
  unsigned int v23; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v23 = 336;
    v6 = (int *)&v23;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_140A25980(a1, a2, *v6);
      if ( v8 )
      {
        if ( v8 != -1073741772 && v8 != -1073741811 && v8 != -1073741637 )
          break;
      }
      ++v7;
      ++v6;
      if ( v7 )
        goto LABEL_11;
    }
    v3 = v8;
    if ( v8 < 0 )
      return (unsigned int)v3;
LABEL_11:
    Pool2 = 0LL;
    v14 = 0;
    v23 = 0;
    while ( 1 )
    {
      v15 = sub_140A263D8(v10, v9, v11, v12, (__int64)Pool2, v14, (__int64)&v23);
      if ( v15 != -1073741789 )
        break;
      v14 = v23;
      v18 = 20LL * v23;
      if ( v18 > 0xFFFFFFFF )
      {
        v15 = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v18, 1380994640LL);
      if ( !Pool2 )
      {
        v15 = -1073741801;
LABEL_21:
        v3 = v15;
        goto LABEL_36;
      }
    }
    if ( v15 && v15 != -1073741275 )
      goto LABEL_21;
    v19 = v23;
    v20 = 0LL;
    if ( v23 )
    {
      while ( 1 )
      {
        v21 = sub_1406E7A78(5 * v20, v16, v17, 0LL, (__int64)Pool2 + 20 * v20);
        if ( v21 )
        {
          if ( v21 != -1073741275 && v21 != -1073741790 && v21 != -1073741802 && v21 != -1073741637 )
            break;
        }
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v19 )
          goto LABEL_31;
      }
      v3 = v21;
    }
LABEL_31:
    if ( v3 >= 0 )
    {
      v15 = sub_140A25980(a1, a2, 80);
      if ( v15 && v15 != -1073741772 && v15 != -1073741811 )
        goto LABEL_21;
      sub_140A27790(a1, a2, 5LL);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v3;
}
