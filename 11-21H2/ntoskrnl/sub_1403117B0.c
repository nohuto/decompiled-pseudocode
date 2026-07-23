/*
 * XREFs of sub_1403117B0 @ 0x1403117B0
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 * Callees:
 *     sub_140311870 @ 0x140311870 (sub_140311870.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140417964 @ 0x140417964 (sub_140417964.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 */

char __fastcall sub_1403117B0(unsigned __int64 Irp, __int64 a2, __int64 a3)
{
  IRP *v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = (IRP *)Irp;
  v6 = 0LL;
  v5 = 0LL;
  if ( !*(_BYTE *)(Irp + 65) )
  {
    Irp = *(unsigned int *)(Irp + 48);
    if ( (Irp & 0xC0000000) == 0xC0000000 || (*(_DWORD *)(a2 + 80) & 0x2000000) != 0 && (Irp & 0x80000000) == 0LL )
      return 0;
  }
  if ( *(_QWORD *)(a2 + 176) )
  {
    sub_140311870(v3);
    return 1;
  }
  if ( (dword_140C0959C == 1 || dword_140C0959C && (unsigned __int8)sub_14065863C(Irp, a2, a3))
    && (unsigned __int8)sub_140417964(v3) )
  {
    return 0;
  }
  sub_140347E10((_DWORD)v3 + 120, (unsigned int)&v6, (unsigned int)&v5, (_DWORD)v3 + 192, (__int64)&v5);
  return 1;
}
