/*
 * XREFs of sub_1800FC1A0 @ 0x1800FC1A0
 * Callers:
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

_QWORD *__fastcall sub_1800FC1A0(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001D684();
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xE8uLL);
    Mtx_init_in_situ((_Mtx_t)v3, 2);
    Cnd_init_in_situ((_Cnd_t)(v3 + 80));
    Cnd_init_in_situ((_Cnd_t)(v3 + 152));
    *((_DWORD *)v3 + 56) = 0;
    v3[228] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
