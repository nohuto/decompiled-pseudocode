/*
 * XREFs of sub_18001CAA0 @ 0x18001CAA0
 * Callers:
 *     sub_18001CD8C @ 0x18001CD8C (sub_18001CD8C.c)
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18002EE38 @ 0x18002EE38 (sub_18002EE38.c)
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 *     sub_18004D6B4 @ 0x18004D6B4 (sub_18004D6B4.c)
 *     sub_18004D7D8 @ 0x18004D7D8 (sub_18004D7D8.c)
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 *     sub_18004DD30 @ 0x18004DD30 (sub_18004DD30.c)
 *     sub_18004DE24 @ 0x18004DE24 (sub_18004DE24.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 *     sub_18004FA5C @ 0x18004FA5C (sub_18004FA5C.c)
 *     sub_1800504A0 @ 0x1800504A0 (sub_1800504A0.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 * Callees:
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 */

__int64 __fastcall sub_18001CAA0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *(_QWORD *)a2 = v6;
    if ( (unsigned __int8)sub_18001C7B4(v6 + 4, a3) )
    {
      v6 = (__int64 *)v6[2];
      v7 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v6;
      v7 = 1;
      v6 = (__int64 *)*v6;
    }
    *(_DWORD *)(a2 + 8) = v7;
  }
  return a2;
}
