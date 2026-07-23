/*
 * XREFs of sub_140A25124 @ 0x140A25124
 * Callers:
 *     sub_140A24FF8 @ 0x140A24FF8 (sub_140A24FF8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 *     sub_140A231DC @ 0x140A231DC (sub_140A231DC.c)
 *     sub_140A27790 @ 0x140A27790 (sub_140A27790.c)
 *     sub_140A2BE80 @ 0x140A2BE80 (sub_140A2BE80.c)
 *     sub_140A2CC38 @ 0x140A2CC38 (sub_140A2CC38.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A25124(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int v6; // eax
  int v7; // r9d
  int *v8; // rdi
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // eax
  void *Pool2; // rdi
  unsigned int v13; // ebp
  int v14; // eax
  unsigned __int64 v15; // r14
  unsigned int v16; // r14d
  int v17; // ebp
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-48h] BYREF
  int v21; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v22[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v21 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = sub_140787F7C(a1, a2, 0LL, 0, 0LL, 0LL, 0LL, 0, (__int64)&v21, 0);
    if ( v6 == -1073741789 )
    {
      return (unsigned int)-1073741535;
    }
    else if ( v6 )
    {
      return v6;
    }
    else
    {
      v22[0] = 832;
      v8 = v22;
      v22[1] = 576;
      v9 = 0;
      v22[2] = 320;
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          if ( (v10 & 0xFFFFFCBF) == 0 )
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
      v13 = 0;
      v20 = 0;
      while ( 1 )
      {
        LOBYTE(v7) = 1;
        v14 = sub_140A2BE80(a1, a2, 0, v7, (__int64)Pool2, v13, (__int64)&v20);
        if ( v14 != -1073741789 )
          break;
        v13 = v20;
        v15 = 20LL * v20;
        if ( v15 > 0xFFFFFFFF )
        {
          v14 = -1073741811;
          goto LABEL_27;
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
        if ( !Pool2 )
        {
          v14 = -1073741801;
LABEL_27:
          v3 = v14;
          goto LABEL_42;
        }
      }
      if ( v14 && v14 != -1073741275 )
        goto LABEL_27;
      v16 = v20;
      v17 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          v18 = sub_140A2CC38(a1, (int)Pool2 + 20 * v17, 0, 0LL, 0);
          if ( v18 )
          {
            if ( v18 != -1073741275 && v18 != -1073741790 && v18 != -1073741802 && v18 != -1073741637 )
              break;
          }
          if ( ++v17 >= v16 )
            goto LABEL_37;
        }
        v3 = v18;
      }
LABEL_37:
      if ( v3 >= 0 )
      {
        v14 = sub_140A231DC(a1, a2, 64);
        if ( v14 && v14 != -1073741772 && v14 != -1073741811 )
          goto LABEL_27;
        sub_140A27790(a1, a2, 4LL);
      }
LABEL_42:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
  return (unsigned int)v3;
}
