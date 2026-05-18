/*
 * XREFs of sub_1800508F0 @ 0x1800508F0
 * Callers:
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_1800508F0(void **Src, __int64 **a2)
{
  char v4; // si
  __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  sub_180010DD0(Src, (__int64)"{");
  v4 = 0;
  v5 = **a2;
  v9 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)(v5 + 32);
    if ( v4 )
      sub_18001DE60(Src, ",", 1uLL);
    else
      v4 = 1;
    v7 = v6[2];
    if ( v6[3] >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    sub_18001DE60(Src, v6, v7);
    sub_18001D3F8(&v9);
    v5 = v9;
  }
  sub_18001DE60(Src, "}", 1uLL);
  return Src;
}
