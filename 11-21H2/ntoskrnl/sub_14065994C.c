/*
 * XREFs of sub_14065994C @ 0x14065994C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140659230 (PsRegisterSyscallProvider.c)
 * Callees:
 *     sub_140419D3C @ 0x140419D3C (sub_140419D3C.c)
 *     sub_140419D6C @ 0x140419D6C (sub_140419D6C.c)
 *     sub_140419ED8 @ 0x140419ED8 (sub_140419ED8.c)
 *     sub_1406599CC @ 0x1406599CC (sub_1406599CC.c)
 */

__int64 __fastcall sub_14065994C(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  volatile signed __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  sub_140419D3C();
  if ( (unsigned int)sub_1406599CC(a1 + 16, &v5) == -1073741275 )
  {
    v2 = off_140D3B2E8;
    if ( *off_140D3B2E8 != (_UNKNOWN *)&off_140D3B2E0 )
      __fastfail(3u);
    *(_QWORD *)a1 = &off_140D3B2E0;
    *(_QWORD *)(a1 + 8) = v2;
    *v2 = a1;
    off_140D3B2E8 = (_UNKNOWN **)a1;
    v3 = 0;
  }
  else
  {
    v3 = -1073741771;
  }
  sub_140419ED8();
  if ( v5 )
    sub_140419D6C(v5);
  return v3;
}
