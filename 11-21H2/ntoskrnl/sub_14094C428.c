/*
 * XREFs of sub_14094C428 @ 0x14094C428
 * Callers:
 *     sub_14095BE50 @ 0x14095BE50 (sub_14095BE50.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_1406D01BC @ 0x1406D01BC (sub_1406D01BC.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140827888 @ 0x140827888 (sub_140827888.c)
 *     sub_140A2296C @ 0x140A2296C (sub_140A2296C.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_14094C428(__int64 a1)
{
  void *Pool2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // eax
  _WORD *i; // rdi
  int v10; // r15d
  HANDLE v11; // r14
  __int64 v12; // rax
  __int64 v14; // [rsp+28h] [rbp-29h]
  unsigned int v15; // [rsp+28h] [rbp-29h]
  __int64 v16; // [rsp+30h] [rbp-21h]
  int v17; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+70h] [rbp+1Fh] BYREF
  HANDLE v19; // [rsp+78h] [rbp+27h] BYREF
  HANDLE v20; // [rsp+80h] [rbp+2Fh] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+37h] BYREF
  char v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v20 = 0LL;
  P = 0LL;
  Pool2 = 0LL;
  v17 = 0;
  LODWORD(v3) = 0;
  v19 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  v22 = 0;
  if ( *(_QWORD *)&qword_140D00AC0 )
    v4 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
  if ( (int)sub_14077FFEC(v4, 2147483650LL, a1, 0, 0x2000000u, (__int64)&v20) >= 0 )
  {
    if ( (int)sub_140827888(v5, (__int64)v20, v6, 0LL, v14, v16, &P) >= 0 )
    {
      v7 = 2048;
      v17 = 2048;
      while ( v7 > (unsigned int)v3 )
      {
        v3 = v7;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, 2 * v3, 1667526736LL);
        if ( !Pool2 )
          goto LABEL_28;
        v8 = sub_1406D01BC((__int64)P, (__int64)L"Root", 1, 0LL, 0LL, (__int64)Pool2, v3, (__int64)&v17);
        if ( v8 != -1073741789 )
        {
          if ( v8 >= 0 )
          {
            if ( (_DWORD)v3 )
            {
              for ( i = Pool2; *i; i += v12 + 1 )
              {
                if ( (int)sub_14077F2EC((__int64)P, (__int64)i, 16, 0, 0x2000000, 0, (__int64)&v19, 0LL) >= 0 )
                {
                  v10 = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)i, 131103, &Handle, &v22, 0);
                  if ( v10 >= 0 )
                  {
                    v11 = Handle;
                    if ( v22 )
                      v10 = sub_140698298((__int64)P, (__int64)i, 1, v19, v15, (__int64)i, 1, Handle, 0LL, 0LL, 0x20000);
                    ZwClose(v11);
                    if ( v10 < 0 )
                      sub_140A236A4(qword_140D00AC0);
                  }
                  ZwClose(v19);
                }
                v12 = -1LL;
                do
                  ++v12;
                while ( i[v12] );
              }
            }
          }
          goto LABEL_27;
        }
        v7 = v17;
      }
      if ( !Pool2 )
        goto LABEL_28;
LABEL_27:
      ExFreePoolWithTag(Pool2, 0);
    }
LABEL_28:
    if ( P )
      sub_140A2296C(P);
  }
  if ( v20 )
    ZwClose(v20);
  return 1;
}
