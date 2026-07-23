/*
 * XREFs of sub_1409AFAA0 @ 0x1409AFAA0
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1409AF8C4 @ 0x1409AF8C4 (sub_1409AF8C4.c)
 */

__int64 __fastcall sub_1409AFAA0(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  v4 = sub_1409AF8C4(a1, a2, a3, &v10, v11);
  if ( v4 >= 0 )
  {
    _RCX = v11[0] - 8;
    _RAX = qword_140D07178;
    __asm { wrussq  qword ptr [rcx], rax }
    _RDX = v11[0] - 16;
    *a4 = v11[0] - 16;
    _RCX = _RCX & 0xFFFFFFFFFFFFFFFCuLL | 1;
    __asm { wrussq  qword ptr [rdx], rcx }
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11[0] = 0LL;
    sub_1407B99C0(0xFFFFFFFFFFFFFFFFuLL, (unsigned __int64 *)&v10, v11, 0x8000u, 0, 0x40000000);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
