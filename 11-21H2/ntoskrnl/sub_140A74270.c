/*
 * XREFs of sub_140A74270 @ 0x140A74270
 * Callers:
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 * Callees:
 *     sub_14041F650 @ 0x14041F650 (sub_14041F650.c)
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     sub_140A6F708 @ 0x140A6F708 (sub_140A6F708.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A7328C @ 0x140A7328C (sub_140A7328C.c)
 */

void __fastcall sub_140A74270(char **a1, char **a2, char a3, __int64 a4, __int64 a5)
{
  char v8; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v10; // bp
  int v11; // edx
  int v12; // ebx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v8 = sub_140A6F7A0(a5);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    sub_14041F720((__int64)CurrentPrcb + 256, v11);
    sub_140A6F708(*((char **)CurrentPrcb + 4408), *((_DWORD *)CurrentPrcb + 8818) & *(_DWORD *)(a4 + 48), (_BYTE *)a4);
    sub_140A7328C(a1, a2, *((_QWORD *)CurrentPrcb + 4408));
    v12 = *(_DWORD *)(a4 + 48);
    sub_140A6F708((char *)a4, *((_DWORD *)CurrentPrcb + 8818) & v12, *((_BYTE **)CurrentPrcb + 4408));
    *(_DWORD *)(a4 + 48) = v12;
    sub_14041F650((__int64)CurrentPrcb + 256);
    LOBYTE(v13) = v10;
    sub_140A6F900(v13, v14);
  }
}
