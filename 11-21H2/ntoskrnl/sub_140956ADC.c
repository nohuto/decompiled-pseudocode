/*
 * XREFs of sub_140956ADC @ 0x140956ADC
 * Callers:
 *     sub_1409569C0 @ 0x1409569C0 (sub_1409569C0.c)
 *     sub_140956BBC @ 0x140956BBC (sub_140956BBC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140956BF8 @ 0x140956BF8 (sub_140956BF8.c)
 *     sub_140956ED0 @ 0x140956ED0 (sub_140956ED0.c)
 *     sub_14095EB04 @ 0x14095EB04 (sub_14095EB04.c)
 *     sub_14095EC14 @ 0x14095EC14 (sub_14095EC14.c)
 */

PVOID *sub_140956ADC()
{
  PVOID *v0; // rbx
  int v1; // eax
  PVOID *result; // rax
  _QWORD *v3; // rax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF

  if ( !dword_140C44634 || dword_140C44634 == 3 )
    KeBugCheckEx(0xCAu, 0x11uLL, 0LL, 0LL, 0LL);
  P[1] = P;
  P[0] = P;
  sub_14095EB04(P);
  v0 = (PVOID *)P[0];
  if ( P[0] == P )
    goto LABEL_10;
  do
  {
    v1 = *((_DWORD *)v0 + 6);
    if ( (v1 & 2) != 0 )
    {
      sub_140956BF8(v0[2]);
    }
    else if ( (v1 & 4) != 0 )
    {
      sub_140956ED0((ULONG_PTR)v0[2]);
    }
    v0 = (PVOID *)*v0;
  }
  while ( v0 != P );
  while ( 1 )
  {
    v0 = (PVOID *)P[0];
LABEL_10:
    result = P;
    if ( v0 == P )
      break;
    if ( v0[1] != P || (v3 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v3[1] = P;
    sub_14095EC14(v0);
  }
  return result;
}
