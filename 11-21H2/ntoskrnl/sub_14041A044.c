/*
 * XREFs of sub_14041A044 @ 0x14041A044
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 sub_14041A044()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 v1; // bx
  __int16 v2; // ax
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int8)*((_WORD *)CurrentThread + 827);
  if ( v1 == HIBYTE(*((_WORD *)CurrentThread + 827)) )
  {
    v2 = sub_140363220(1);
    v3 = (v2 << 8) | (unsigned __int8)(v2 + 1);
  }
  else
  {
    v3 = (unsigned __int8)(*((_WORD *)CurrentThread + 827) ^ (v1 + 1)) ^ *((_WORD *)CurrentThread + 827);
  }
  *((_WORD *)CurrentThread + 827) = v3;
  return v1;
}
