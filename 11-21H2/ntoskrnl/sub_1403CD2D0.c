/*
 * XREFs of sub_1403CD2D0 @ 0x1403CD2D0
 * Callers:
 *     sub_140527CF0 @ 0x140527CF0 (sub_140527CF0.c)
 *     sub_1408459C0 @ 0x1408459C0 (sub_1408459C0.c)
 *     sub_140846600 @ 0x140846600 (sub_140846600.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 */

__int64 __fastcall sub_1403CD2D0(__int64 a1, _QWORD *a2)
{
  void *v4; // rbx
  int Interface; // edi
  int v6; // eax
  __int64 v7; // rdx
  _QWORD v9[12]; // [rsp+40h] [rbp-19h] BYREF

  memset(v9, 0, 0x58uLL);
  v4 = sub_14036B86C(a1, 0x746C6644u);
  Interface = IoQueryInterface(a1, 0, (int)&qword_14000FEC8, 88, 2, (__int64)v4, v9);
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  if ( Interface >= 0 )
  {
    v6 = sub_14042A5E0(v9[1], 0LL);
    Interface = v6;
    if ( v6 == -1073741789 )
    {
      v7 = 0LL;
    }
    else if ( v6 < 0 )
    {
LABEL_4:
      sub_14042A5E0(v9[1], v7);
      goto LABEL_5;
    }
    Interface = -1073741823;
    goto LABEL_4;
  }
  if ( Interface != -1073741670 )
    Interface = -1073741275;
LABEL_5:
  *a2 = 0LL;
  return (unsigned int)Interface;
}
