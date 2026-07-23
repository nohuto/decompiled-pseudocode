/*
 * XREFs of sub_1407ED644 @ 0x1407ED644
 * Callers:
 *     sub_1407ED88C @ 0x1407ED88C (sub_1407ED88C.c)
 * Callees:
 *     sub_1407ED774 @ 0x1407ED774 (sub_1407ED774.c)
 *     sub_1407EDCAC @ 0x1407EDCAC (sub_1407EDCAC.c)
 *     sub_1407EF190 @ 0x1407EF190 (sub_1407EF190.c)
 *     sub_14099C794 @ 0x14099C794 (sub_14099C794.c)
 */

__int64 __fastcall sub_1407ED644(unsigned int a1, char a2, __int64 a3)
{
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]

  sub_1407ED774(&stru_140011048);
  if ( a2 )
  {
    byte_140C1F418 = 1;
    dword_140C1F3B8 = a1;
  }
  sub_1407EDCAC(a1, 1LL, 0LL);
  v7 = 0LL;
  v10 = 0LL;
  v12 = 0;
  v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v9 = v8;
  v11 = 1;
  if ( (_BYTE)xmmword_140C1F400 )
    sub_14099C794(1LL);
  return sub_1407EF190(a1, &v7, a3);
}
