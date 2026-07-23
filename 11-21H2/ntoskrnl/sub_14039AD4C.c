/*
 * XREFs of sub_14039AD4C @ 0x14039AD4C
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 *     sub_1409962E0 @ 0x1409962E0 (sub_1409962E0.c)
 *     sub_1409965B0 @ 0x1409965B0 (sub_1409965B0.c)
 *     sub_140996854 @ 0x140996854 (sub_140996854.c)
 *     sub_140997DE0 @ 0x140997DE0 (sub_140997DE0.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_14039A1C4 @ 0x14039A1C4 (sub_14039A1C4.c)
 */

unsigned __int64 __fastcall sub_14039AD4C(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 v6; // rbp
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned __int64 result; // rax
  unsigned __int64 *v10; // rsi
  int v11; // edi
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+68h] [rbp+10h]
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  v2 = a1;
  if ( qword_140D068A8 )
  {
    v3 = *(_QWORD *)(qword_140D068A8 + 48);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v15 = 0LL;
  v6 = sub_14039A1C4(dword_140C542C0);
  if ( v6 != -1LL )
    v6 /= 0xAuLL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v10 = (unsigned __int64 *)(v3 + 56);
    v11 = dword_140C542C0;
    do
    {
      v14 = qword_140D069F8;
      v1 += sub_14029394C(*v10, qword_140D069F8, 0xF4240uLL);
      if ( v11 != -1 && v8 == v11 )
      {
        v12 = sub_14029394C(*v10, v14, 0xF4240uLL);
        v7 = *((_DWORD *)v10 - 6);
        v15 = v12;
      }
      ++v8;
      v10 += 126;
    }
    while ( v8 < v4 );
    v2 = a1;
  }
  result = v15;
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v15;
  *(_QWORD *)(v2 + 16) = v6;
  *(_DWORD *)(v2 + 24) = v7;
  *(_DWORD *)(v2 + 28) = v5;
  return result;
}
