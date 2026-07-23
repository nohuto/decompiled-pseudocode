/*
 * XREFs of sub_1403C445C @ 0x1403C445C
 * Callers:
 *     sub_1403C3FA0 @ 0x1403C3FA0 (sub_1403C3FA0.c)
 * Callees:
 *     sub_14036EDD4 @ 0x14036EDD4 (sub_14036EDD4.c)
 *     sub_14036FB38 @ 0x14036FB38 (sub_14036FB38.c)
 *     sub_1403C44EC @ 0x1403C44EC (sub_1403C44EC.c)
 */

__int64 sub_1403C445C()
{
  _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  sub_1403C44EC();
  v1.Ptr = (PVOID)0x500010200LL;
  sub_14036FB38(stru_140C5B140, &v1);
  dword_140C5EA20 = (unsigned __int16)word_140D05000;
  if ( (unsigned __int16)word_140D05000 > 0x40u )
    dword_140C5EA20 = 64;
  return sub_14036EDD4(stru_140C5B140, 1, 1LL, (_RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
