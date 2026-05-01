/*
 * XREFs of sub_18000D8F8 @ 0x18000D8F8
 * Callers:
 *     sub_18000BF7C @ 0x18000BF7C (sub_18000BF7C.c)
 *     sub_18000C00C @ 0x18000C00C (sub_18000C00C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D8F8(struct _TP_TIMER **a1, _BYTE *a2, __int64 a3)
{
  struct _TP_TIMER *v3; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    pftDueTime = (struct _FILETIME)(-10000 * a3);
    SetThreadpoolTimer(v3, &pftDueTime, 0, (unsigned int)a3 >> 2);
    *a2 = 1;
  }
}
