/*
 * XREFs of sub_1402C1D70 @ 0x1402C1D70
 * Callers:
 *     sub_140226EE0 @ 0x140226EE0 (sub_140226EE0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_140250B00 @ 0x140250B00 (sub_140250B00.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14027FD04 @ 0x14027FD04 (sub_14027FD04.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140332670 @ 0x140332670 (sub_140332670.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_140373880 @ 0x140373880 (sub_140373880.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_14045BF60 @ 0x14045BF60 (sub_14045BF60.c)
 * Callees:
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     sub_140274030 @ 0x140274030 (sub_140274030.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402C1D70(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v18; // [rsp+24h] [rbp-1A4h]
  __int16 v19; // [rsp+26h] [rbp-1A2h]
  __int64 v20; // [rsp+28h] [rbp-1A0h]
  __int64 v21; // [rsp+30h] [rbp-198h]
  __int64 v22; // [rsp+38h] [rbp-190h]
  _BYTE v23[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v24[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v19 = 0;
  memset(v23, 0, sizeof(v23));
  v6 = *(unsigned int *)(a2 + 12);
  v20 = 20LL;
  v7 = sub_140333AA0(a1);
  v8 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v9 = 0LL;
  v17 = v7;
  v18 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( v8 && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 344LL) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v12 = (char *)&v24[j] + 1;
      v13 = *(_QWORD *)&v12[a2 - ((_QWORD)v24 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        if ( v24[j] )
          LOWORD(v24[j]) = sub_1402C2AD0(a1, v13, a3);
        else
          *v12 &= ~1u;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))sub_1402C1F50)(a1, v13, a3, &v17);
        v24[j] = v14;
        if ( !v14 )
          ++v9;
      }
    }
    if ( !i )
      sub_14032F1B0(&v17);
  }
  if ( v9 != v6 )
  {
    v15 = sub_140218310(a1, a2, (char *)v24, v6);
    if ( v15 )
      sub_140274030(0LL, v15 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v9;
}
