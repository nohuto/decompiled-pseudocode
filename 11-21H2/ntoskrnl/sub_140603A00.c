/*
 * XREFs of sub_140603A00 @ 0x140603A00
 * Callers:
 *     sub_14060369C @ 0x14060369C (sub_14060369C.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     sub_1406023D4 @ 0x1406023D4 (sub_1406023D4.c)
 *     sub_140602C9C @ 0x140602C9C (sub_140602C9C.c)
 *     sub_140602CF4 @ 0x140602CF4 (sub_140602CF4.c)
 *     sub_140605078 @ 0x140605078 (sub_140605078.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A81D40 @ 0x140A81D40 (sub_140A81D40.c)
 */

__int64 __fastcall sub_140603A00(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 **a4, __int64 a5)
{
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdi
  wchar_t *Pool2; // rax
  wchar_t *v14; // rbp

  if ( !a1 )
    return 3221225711LL;
  *(_DWORD *)(a1 + 1120) = a3;
  v10 = (_QWORD *)(a1 + 1128);
  *(_DWORD *)a1 = dword_140C18FD4;
  RtlCaptureStackBackTrace(4u, 0xAu, (PVOID *)(a1 + 1128), 0LL);
  *(_QWORD *)(a1 + 1112) = a5;
  if ( a4 )
  {
    v11 = (__int64)a4[7];
    if ( v11 )
    {
LABEL_7:
      sub_140602C9C(v11, a1);
      return sub_140605078(a1, a2, a3);
    }
    if ( a4[6] )
    {
      v11 = sub_140A81D40();
      goto LABEL_7;
    }
  }
  if ( qword_140C1A8C8 && *(_QWORD *)qword_140C1A8C8 )
  {
    sub_1406023D4((_WORD *)(a1 + 4), (unsigned __int16 *)(*(_QWORD *)qword_140C1A8C8 + 24LL));
  }
  else if ( a3 - 8195 <= 2 )
  {
    v12 = *a4;
    if ( !v12 )
      return 3221225712LL;
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, 2LL * *v12 + 2, 1316118851LL);
    v14 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    wcsncpy_s(Pool2, *v12 + 1LL, *((const wchar_t **)v12 + 1), 0xFFFFFFFFFFFFFFFFuLL);
    sub_140602C9C((__int64)v14, a1);
    ExFreePoolWithTag(v14, 0x4E726143u);
  }
  else
  {
    sub_140602CF4(v10, a1 + 80, a1 + 4, (_QWORD *)(a1 + 72), (_DWORD *)(a1 + 80), (_DWORD *)(a1 + 68));
  }
  return sub_140605078(a1, a2, a3);
}
