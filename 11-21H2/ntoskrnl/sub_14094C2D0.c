/*
 * XREFs of sub_14094C2D0 @ 0x14094C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E5528 @ 0x1406E5528 (sub_1406E5528.c)
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_1407476FC @ 0x1407476FC (sub_1407476FC.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 */

__int64 __fastcall sub_14094C2D0(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-5h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v13[10]; // [rsp+50h] [rbp+7h] BYREF
  int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  memset(v13, 0, 0x48uLL);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 16);
  Handle = 0LL;
  v14 = 0;
  v11 = 0;
  v15 = 0;
  v10 = 1;
  if ( (int)sub_14077C924(*(__int64 *)&qword_140D00AC0, v6, v5, 983103, 0, (__int64)&Handle) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v15 = 4;
    if ( (int)sub_14077CD90(
                *(__int64 *)&qword_140D00AC0,
                v7,
                (__int64)Handle,
                11,
                (__int64)&v10,
                (__int64)&v14,
                (__int64)&v15,
                0) < 0
      || v10 != 4
      || v15 != 4 )
    {
      v14 = 0;
    }
    if ( (int)sub_1407448BC(*(_QWORD *)(a1 + 16), (__int64)Handle, v13) >= 0 )
    {
      if ( (int)sub_14094AA64((__int64)v13, &v11) >= 0 && v11 )
      {
        v14 |= v11;
        sub_1406E5528(v8, (__int64)v13, 0xBu, 4, (__int64)&v14, 4);
      }
      *a3 = 0;
    }
  }
  sub_1407476FC((__int64)v13);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
