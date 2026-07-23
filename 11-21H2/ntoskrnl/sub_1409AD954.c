/*
 * XREFs of sub_1409AD954 @ 0x1409AD954
 * Callers:
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     IoIncrementKeepAliveCount @ 0x1405587A0 (IoIncrementKeepAliveCount.c)
 *     sub_140558DE0 @ 0x140558DE0 (sub_140558DE0.c)
 * Callees:
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 */

__int64 __fastcall sub_1409AD954(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  sub_1407AC250(a1, a4 == 0 ? 2 : 0, 1u, a3, a2, 0, (int *)&v5);
  return (unsigned int)v5;
}
