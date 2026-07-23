/*
 * XREFs of sub_140A2E0D0 @ 0x140A2E0D0
 * Callers:
 *     sub_1407880F0 @ 0x1407880F0 (sub_1407880F0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_140A2E04C @ 0x140A2E04C (sub_140A2E04C.c)
 *     sub_140A2F540 @ 0x140A2F540 (sub_140A2F540.c)
 */

__int64 __fastcall sub_140A2E0D0(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int *a6)
{
  unsigned int *v6; // rsi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edi
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v14 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    v9 = sub_140A2F540(a1, a2, 1, 0, (__int64)Handle, 0LL);
    if ( v9 < 0 )
      goto LABEL_9;
    v8 = (int)Handle[0];
  }
  v9 = sub_1406994BC((__int64)&v14, v8, 0, 0, (__int64)&v14, 0LL, 0LL);
  if ( v9 >= 0 )
  {
    v11 = a5;
    if ( !v14 || (v9 = sub_140A2E04C(v10, (_OWORD **)off_140C093B8, 3u, a4, a5, v6), v9 >= 0) )
    {
      if ( v11 < *v6 )
        v9 = -1073741789;
    }
  }
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v9;
}
