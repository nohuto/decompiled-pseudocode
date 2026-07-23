/*
 * XREFs of sub_140A24D6C @ 0x140A24D6C
 * Callers:
 *     sub_140A24C40 @ 0x140A24C40 (sub_140A24C40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D01BC @ 0x1406D01BC (sub_1406D01BC.c)
 *     sub_140A231DC @ 0x140A231DC (sub_140A231DC.c)
 *     sub_140A27790 @ 0x140A27790 (sub_140A27790.c)
 *     sub_140A2B950 @ 0x140A2B950 (sub_140A2B950.c)
 *     sub_140A2C51C @ 0x140A2C51C (sub_140A2C51C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A24D6C(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int v6; // eax
  int v7; // r9d
  int *v8; // rdi
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // eax
  void *Pool2; // rdi
  int v13; // eax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rbp
  int v16; // r9d
  unsigned int v17; // r12d
  __int64 v18; // rbp
  int v19; // eax
  unsigned int v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v23[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v22 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  v6 = sub_1406D01BC(a1, a2, 128, 0LL, 0LL, 0LL, 0, (__int64)&v22);
  if ( v6 == -1073741789 )
    return (unsigned int)-1073741535;
  if ( v6 )
    return v6;
  v23[0] = 800;
  v8 = v23;
  v23[1] = 544;
  v9 = 0;
  v23[2] = 288;
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 )
    {
      if ( (v10 & 0xFFFFFCDF) == 0 )
      {
        v11 = sub_140A231DC(a1, a2, v10);
        if ( v11 )
        {
          if ( v11 != -1073741772 && v11 != -1073741811 && v11 != -1073741637 )
            break;
        }
      }
    }
    ++v9;
    ++v8;
    if ( v9 >= 3 )
      goto LABEL_17;
  }
  v3 = v11;
  if ( v11 < 0 )
    return (unsigned int)v3;
LABEL_17:
  Pool2 = 0LL;
  v21 = 0;
  LOBYTE(v7) = 1;
  v13 = sub_140A2B950(a1, a2, 0, v7, 0LL, 0, (__int64)&v21);
  if ( v13 == -1073741789 )
  {
    while ( 1 )
    {
      v14 = v21;
      v15 = 20LL * v21;
      if ( v15 > 0xFFFFFFFF )
        break;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
      if ( !Pool2 )
      {
        v13 = -1073741801;
        goto LABEL_25;
      }
      LOBYTE(v16) = 1;
      v13 = sub_140A2B950(a1, a2, 0, v16, (__int64)Pool2, v14, (__int64)&v21);
      if ( v13 != -1073741789 )
        goto LABEL_23;
    }
    v13 = -1073741811;
LABEL_25:
    v3 = v13;
    goto LABEL_42;
  }
LABEL_23:
  if ( v13 && v13 != -1073741275 )
    goto LABEL_25;
  v17 = v21;
  v18 = 0LL;
  if ( v21 )
  {
    while ( 1 )
    {
      v19 = sub_140A2C51C(a1, a2, (__int64)Pool2 + 20 * v18, 0, 0LL, 0);
      if ( v19 )
      {
        if ( v19 != -1073741275 && v19 != -1073741790 && v19 != -1073741802 && v19 != -1073741637 )
          break;
      }
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= v17 )
        goto LABEL_37;
    }
    v3 = v19;
  }
LABEL_37:
  if ( v3 < 0 )
    goto LABEL_42;
  v13 = sub_140A231DC(a1, a2, 32);
  if ( v13 )
  {
    if ( v13 != -1073741772 && v13 != -1073741811 )
      goto LABEL_25;
  }
  sub_140A27790(a1, a2, 2LL);
LABEL_42:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v3;
}
