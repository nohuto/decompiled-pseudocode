/*
 * XREFs of sub_180015888 @ 0x180015888
 * Callers:
 *     sub_1800157A4 @ 0x1800157A4 (sub_1800157A4.c)
 * Callees:
 *     sub_180011428 @ 0x180011428 (sub_180011428.c)
 *     sub_180015704 @ 0x180015704 (sub_180015704.c)
 *     sub_180015C68 @ 0x180015C68 (sub_180015C68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180015888(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  _BYTE v19[32]; // [rsp+48h] [rbp-20h] BYREF

  v10 = sub_180015C68(v19, a1, a5);
  v11 = *(_QWORD *)(v10 + 16);
  v17 = *(_OWORD *)v10;
  v18 = v11;
  sub_180015704(v12, a5, v13, a1, &v17);
  v15 = 0;
  if ( a3 )
    sub_180011428();
  if ( !(_DWORD)v18 )
  {
    if ( qword_180032998 )
    {
      LOBYTE(v14) = a8;
      qword_180032998(39841886LL, a5, v14);
    }
    return 1;
  }
  return v15;
}
