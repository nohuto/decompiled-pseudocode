/*
 * XREFs of sub_14039E160 @ 0x14039E160
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140549F88 @ 0x140549F88 (sub_140549F88.c)
 */

struct _KPRCB *__fastcall sub_14039E160(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *result; // rax

  if ( a3 != -1 )
  {
    sub_14042A5E0(a1, 0xFFFFFFFFLL);
    result = KeGetCurrentPrcb();
    if ( *((int *)result + 8456) >= 2 && a3 == dword_140C0C5EC )
      return (struct _KPRCB *)sub_140549F88(0LL);
  }
  return result;
}
