/*
 * XREFs of sub_14038D068 @ 0x14038D068
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     sub_140570250 @ 0x140570250 (sub_140570250.c)
 */

struct _KPRCB *sub_14038D068()
{
  struct _KPRCB *result; // rax
  __int64 v1; // rdx

  if ( (_DWORD)dword_140D06964 )
  {
    result = KeGetCurrentPrcb();
    v1 = *((_QWORD *)result + 4410);
    if ( v1 )
      return (struct _KPRCB *)sub_140570250(v1 + (unsigned int)dword_140D050A0);
  }
  return result;
}
