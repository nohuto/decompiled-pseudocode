/*
 * XREFs of sub_1800E0CD0 @ 0x1800E0CD0
 * Callers:
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800E0CD0(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001C190();
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
