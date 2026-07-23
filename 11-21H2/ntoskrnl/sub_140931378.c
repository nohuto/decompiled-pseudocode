/*
 * XREFs of sub_140931378 @ 0x140931378
 * Callers:
 *     sub_140931360 @ 0x140931360 (sub_140931360.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_1403731A0 @ 0x1403731A0 (sub_1403731A0.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 *     sub_140931064 @ 0x140931064 (sub_140931064.c)
 */

__int64 __fastcall sub_140931378(void *a1, ULONG a2, char a3)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  __int16 v9; // ax
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  void *v15; // [rsp+40h] [rbp-48h] BYREF
  ULONG v16; // [rsp+48h] [rbp-40h]
  BOOL v17; // [rsp+58h] [rbp-30h]

  v14 = 0LL;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  sub_1403731A0(7, &v14);
  LODWORD(v14) = v14 | 0x10000;
  v15 = a1;
  v16 = a2;
  v17 = a3 != 0;
  while ( 1 )
  {
    v9 = HvlInvokeFastExtendedHypercall(v14, (__int64)&v15, 0x20u, 0LL, 0);
    if ( !sub_140459C2A(v9) )
      break;
    v13 = sub_1405438E8(v11, v10, v12);
    if ( v13 < 0 )
      goto LABEL_8;
  }
  v13 = sub_14054CA70(v11);
LABEL_8:
  IoFreeMdl(v7);
  if ( v13 >= 0 )
    sub_140931064();
  return (unsigned int)v13;
}
