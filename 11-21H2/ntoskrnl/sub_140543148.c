/*
 * XREFs of sub_140543148 @ 0x140543148
 * Callers:
 *     sub_140A032A0 @ 0x140A032A0 (sub_140A032A0.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

bool __fastcall sub_140543148(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // r14
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r15
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  __int128 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  _BYTE v17[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[2064]; // [rsp+100h] [rbp+0h] BYREF

  v3 = (__int16)a3;
  v15 = 0LL;
  LODWORD(v16) = 0;
  v5 = 0;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v14 = 0LL;
  v11 = 0LL;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v3 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = sub_14039DF90((PHYSICAL_ADDRESS *)&v14, 1, (__int64)v18, 1032LL);
    sub_14039DF90((PHYSICAL_ADDRESS *)&v11, 2, (__int64)v17, 72LL);
    *v9 = (a1 != 0) + 1;
    v9[1] = v8;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    LOWORD(v9) = HvlInvokeHypercall(147);
    sub_14039D8F0((__int64)&v11);
    sub_14039D8F0((__int64)&v14);
    v5 = (_WORD)v9 == 0;
    IoFreeMdl(v7);
  }
  return v5;
}
