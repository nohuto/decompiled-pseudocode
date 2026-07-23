/*
 * XREFs of sub_140A6F61C @ 0x140A6F61C
 * Callers:
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 * Callees:
 *     sub_14041F650 @ 0x14041F650 (sub_14041F650.c)
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     sub_140A6F708 @ 0x140A6F708 (sub_140A6F708.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A6FA44 @ 0x140A6FA44 (sub_140A6FA44.c)
 */

void __fastcall sub_140A6F61C(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rsi
  char v12; // r14
  int v13; // edx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v10 = sub_140A6F7A0(a6, a7);
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v10;
    sub_14041F720((__int64)CurrentPrcb + 256, v13);
    sub_140A6F708(
      *((_QWORD *)CurrentPrcb + 4408),
      (unsigned int)(*((_DWORD *)CurrentPrcb + 8818) & *(_DWORD *)(a5 + 48)),
      a5);
    LOBYTE(v14) = a3;
    sub_140A6FA44(a1, a2, v14, *((_QWORD *)CurrentPrcb + 4408));
    v15 = *(_DWORD *)(a5 + 48);
    sub_140A6F708(a5, *((_DWORD *)CurrentPrcb + 8818) & v15, *((_QWORD *)CurrentPrcb + 4408));
    *(_DWORD *)(a5 + 48) = v15;
    sub_14041F650((__int64)CurrentPrcb + 256);
    LOBYTE(v16) = v12;
    sub_140A6F900(v16);
  }
}
