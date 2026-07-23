/*
 * XREFs of sub_1403C0FF4 @ 0x1403C0FF4
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 */

void sub_1403C0FF4()
{
  char v0; // bl
  _DWORD *v1; // rax
  int Src; // [rsp+40h] [rbp+8h] BYREF

  Src = 0;
  sub_14075140C(&stru_140011F28, &Src);
  Src = 1;
  sub_14075140C(&stru_140011F28, &Src);
  v0 = 0;
  ExAcquireFastMutex(&stru_140C237C0);
  v1 = (_DWORD *)sub_140751880(&stru_140011F28, 0xFFFFFFFFLL);
  if ( v1[14] || v1[15] )
  {
    v1[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex(&stru_140C237C0);
  if ( (unsigned int)dword_140C22F80 >= 3 )
  {
    if ( v0 )
      sub_1402D6220(0x80u);
    sub_1402D6220(0x20u);
  }
}
