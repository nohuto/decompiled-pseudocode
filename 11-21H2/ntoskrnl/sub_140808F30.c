/*
 * XREFs of sub_140808F30 @ 0x140808F30
 * Callers:
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140809060 @ 0x140809060 (sub_140809060.c)
 *     sub_140809180 @ 0x140809180 (sub_140809180.c)
 */

void __fastcall sub_140808F30(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  _QWORD InputBuffer[14]; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+B8h] [rbp+6Fh] BYREF
  void *v8; // [rsp+C0h] [rbp+77h] BYREF

  v8 = 0LL;
  v7 = 0;
  v1 = qword_140C20760;
  v2 = a1;
  if ( qword_140C20760 && (unsigned __int8)sub_140809180() )
  {
    sub_140809060(&v8, &v7);
    sub_1402D66A8((ULONG_PTR)&xmmword_140C20768);
    v3 = v7;
    qword_140C20778 = v8;
    dword_140C20780 = v7;
    sub_1402935D0((ULONG_PTR)&xmmword_140C20768);
    if ( (unsigned int)v2 <= 0x10 && (v4 = 69728, _bittest(&v4, v2)) )
      v5 = dword_140C09830 + v3;
    else
      v5 = dword_140C0C664;
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = v1;
    LODWORD(InputBuffer[3]) = 160;
    InputBuffer[4] = 2050LL;
    LODWORD(InputBuffer[2]) = 1000 * v5;
    InputBuffer[6] = (unsigned int)dword_140D06D08;
    InputBuffer[7] = &qword_140C20760;
    InputBuffer[10] = InputBuffer;
    InputBuffer[9] = sub_1403A0800;
    InputBuffer[5] = v2;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
}
