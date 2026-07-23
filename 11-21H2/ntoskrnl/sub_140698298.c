/*
 * XREFs of sub_140698298 @ 0x140698298
 * Callers:
 *     sub_140697760 @ 0x140697760 (sub_140697760.c)
 *     sub_14094B580 @ 0x14094B580 (sub_14094B580.c)
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14069726C @ 0x14069726C (sub_14069726C.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140698298(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax
  void *Pool2; // rdi
  __int64 v21; // r14
  char *v22; // r12
  HANDLE v23; // rcx
  int v24; // eax
  HANDLE v25; // r9
  HANDLE v26; // r9
  int v27; // r9d
  int v28; // [rsp+20h] [rbp-69h]
  int v29; // [rsp+20h] [rbp-69h]
  int v30; // [rsp+28h] [rbp-61h]
  unsigned int v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+64h] [rbp-25h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+70h] [rbp-19h]
  HANDLE v35; // [rsp+78h] [rbp-11h] BYREF
  __int64 v36; // [rsp+80h] [rbp-9h]
  int v37; // [rsp+D8h] [rbp+4Fh]
  unsigned int v38; // [rsp+E8h] [rbp+5Fh] BYREF

  v37 = a2;
  Handle = 0LL;
  v35 = 0LL;
  v38 = 0;
  a5 = 0;
  v15 = qword_140D00AC0;
  v36 = *(_QWORD *)&qword_140D00AC0;
  v32 = 1;
  if ( !a4 )
  {
    v17 = sub_14077C924(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( v17 < 0 )
      goto LABEL_8;
    v15 = v36;
  }
  if ( a8 || (v17 = sub_14077C924(v15, a6, a7, 33554433, 0, (__int64)&v35), v17 >= 0) )
  {
    if ( a3 )
    {
      v25 = Handle;
      if ( a4 )
        v25 = a4;
      v16 = sub_14069726C(a1, a2, a3, (__int64)v25, v28, 0, 0LL, 0, (__int64)&v38);
    }
    else
    {
      v16 = sub_140698AAC(a1, (_DWORD)a4, 0, 0, 0LL, 0, (__int64)&v38);
    }
    v17 = v16;
    if ( (int)(v16 + 0x80000000) < 0 || v16 == -1073741789 )
    {
      if ( !v38 )
      {
        v17 = 0;
        goto LABEL_8;
      }
      P = (PVOID)ExAllocatePool2(256LL, 20LL * v38, 1667526736LL);
      if ( !P )
      {
        v17 = -1073741670;
        goto LABEL_8;
      }
      if ( a3 )
      {
        v26 = Handle;
        if ( a4 )
          v26 = a4;
        v19 = sub_14069726C(a1, a2, a3, (__int64)v26, v29, 0, (__int64)P, v38, (__int64)&v38);
      }
      else
      {
        v19 = sub_140698AAC(a1, (_DWORD)a4, 0, 0, (__int64)P, v38, (__int64)&v38);
      }
      v17 = v19;
      if ( v19 < 0 )
        goto LABEL_32;
      v31 = 256;
      Pool2 = (void *)ExAllocatePool2(256LL, 256LL, 1667526736LL);
      if ( !Pool2 )
      {
LABEL_45:
        v17 = -1073741670;
        goto LABEL_32;
      }
      v21 = 0LL;
      if ( !v38 )
        goto LABEL_31;
      while ( 1 )
      {
        if ( a9 && !(unsigned __int8)sub_14042A5E0((char *)P + 20 * v21, a10) )
          goto LABEL_30;
        if ( a3 )
        {
          v27 = (int)Handle;
          if ( a4 )
            v27 = (int)a4;
          v22 = (char *)P + 20 * v21;
          v17 = sub_14077DA5C(
                  a1,
                  v37,
                  a3,
                  v27,
                  0LL,
                  (__int64)v22,
                  (__int64)&v32,
                  (__int64)Pool2,
                  v31,
                  (__int64)&a5,
                  a11);
          if ( v17 == -1073741822 )
            goto LABEL_33;
        }
        else
        {
          v22 = (char *)P + 20 * v21;
          v17 = sub_14077DF24(
                  a1,
                  (_DWORD)a4,
                  0,
                  (int)P + 20 * (int)v21,
                  (__int64)&v32,
                  (__int64)Pool2,
                  v31,
                  (__int64)&a5);
        }
        if ( v17 != -1073741789 )
        {
          if ( v17 < 0 )
            goto LABEL_31;
          v23 = v35;
          if ( a8 )
            v23 = a8;
          v24 = sub_14077139C(v36, 0, a6, a7, (__int64)v23, v30, (__int64)v22, v32, (__int64)Pool2, a5, a11);
          v17 = v24;
          if ( v24 != -1073741790 )
          {
            if ( v24 < 0 )
              goto LABEL_31;
            goto LABEL_30;
          }
LABEL_33:
          v17 = 0;
          goto LABEL_30;
        }
        if ( a5 <= v31 )
        {
          v17 = -1073741595;
LABEL_31:
          ExFreePoolWithTag(Pool2, 0);
LABEL_32:
          ExFreePoolWithTag(P, 0);
          break;
        }
        ExFreePoolWithTag(Pool2, 0);
        v31 = a5;
        Pool2 = (void *)ExAllocatePool2(256LL, a5, 1667526736LL);
        if ( !Pool2 )
          goto LABEL_45;
        v17 = 0;
        LODWORD(v21) = v21 - 1;
LABEL_30:
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v38 )
          goto LABEL_31;
      }
    }
  }
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)v17;
}
