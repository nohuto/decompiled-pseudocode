/*
 * XREFs of sub_140A98420 @ 0x140A98420
 * Callers:
 *     sub_140A95E00 @ 0x140A95E00 (sub_140A95E00.c)
 *     sub_140A95E60 @ 0x140A95E60 (sub_140A95E60.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A7F8F2 @ 0x140A7F8F2 (sub_140A7F8F2.c)
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 *     sub_140A98DCC @ 0x140A98DCC (sub_140A98DCC.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A997C0 @ 0x140A997C0 (sub_140A997C0.c)
 */

__int64 __fastcall sub_140A98420(LONG *a1, __int64 a2, void *a3)
{
  __int64 v5; // rdi
  USHORT v6; // ax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  unsigned int v10; // esi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  if ( !sub_140A7F8F2(a1) )
    return 0LL;
  if ( *((_DWORD *)qword_140D57500 + 8196) )
    return 0LL;
  if ( *((int *)qword_140D57500 + 8282) > 1024 )
    return 0LL;
  v5 = sub_140A98DCC(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = v6;
  if ( v6 )
  {
    v8 = 1LL;
    if ( v7 )
      v8 = v7;
    if ( (unsigned int)v8 >= 8 )
      goto LABEL_11;
  }
  else
  {
    BackTrace[0] = a3;
    v8 = 1LL;
  }
  BackTrace[v8] = 0LL;
LABEL_11:
  v9 = sub_1406018DC();
  sub_140A994C4(1LL);
  v10 = sub_140A98ACC((int)a1, (__int64)&v14, (__int64)&v15);
  sub_140A994FC(1LL);
  sub_140601864(v9);
  if ( !v10 )
    sub_140A997C0(v5, 1LL);
  if ( v14 )
    sub_140A997C0(v14, 1LL);
  v11 = (_QWORD *)v15;
  if ( v15 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      sub_140A997C0(v11, 2LL);
      v11 = v12;
    }
    while ( v12 );
  }
  return v10;
}
