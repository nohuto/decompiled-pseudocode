/*
 * XREFs of sub_140957044 @ 0x140957044
 * Callers:
 *     sub_140956608 @ 0x140956608 (sub_140956608.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

__int64 __fastcall sub_140957044(__int64 *a1, int a2, char a3)
{
  int v4; // edi
  int v5; // ecx
  __int64 v6; // rdx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = a2;
  Handle = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a1[90] + 20);
  if ( a2 != v5 && (a3 || v5) )
  {
    v4 = sub_14076E894(a1[4], (__int64)&Handle, 983103);
    if ( v4 >= 0 )
    {
      v4 = sub_14077198C(
             *(__int64 *)&qword_140D00AC0,
             a1[6],
             1,
             (__int64)Handle,
             0LL,
             (__int64)&stru_140017C08,
             7,
             (__int64)&v9,
             4u,
             0);
      if ( v4 >= 0 )
      {
        *(_DWORD *)(a1[90] + 20) = v9;
        if ( !v9 )
          sub_14042A5E0(a1[4], v6);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v4;
}
