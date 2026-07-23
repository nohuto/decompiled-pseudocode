/*
 * XREFs of sub_14038C0C8 @ 0x14038C0C8
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     sub_140570120 @ 0x140570120 (sub_140570120.c)
 */

struct _KPRCB *__fastcall sub_14038C0C8(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *result; // rax
  __int64 v4; // rdx

  if ( (_DWORD)dword_140D06964 )
  {
    result = KeGetCurrentPrcb();
    v4 = *((_QWORD *)result + 4410);
    if ( v4 )
      return (struct _KPRCB *)sub_140570120(v4 + (unsigned int)dword_140D050A0, v4, a3);
  }
  return result;
}
