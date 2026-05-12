/*
 * XREFs of sub_1C0041DFC @ 0x1C0041DFC
 * Callers:
 *     sub_1C0042360 @ 0x1C0042360 (sub_1C0042360.c)
 *     sub_1C0074730 @ 0x1C0074730 (sub_1C0074730.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C0041DFC(void *Src, size_t Size, _OWORD *a3)
{
  unsigned int v3; // edi
  size_t v4; // rsi
  _QWORD *v7; // rbx
  void *v8; // rax
  _QWORD *v9; // rax

  v3 = 0;
  v4 = (unsigned int)Size;
  v7 = (_QWORD *)sub_1C0007CF4(64LL, 40LL, 1213423954LL, 0LL);
  if ( !v7 )
    return (unsigned int)-1073741670;
  v8 = (void *)sub_1C0007CF4(64LL, v4, 1213423954LL, 0LL);
  v7[2] = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(v7, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  v7[1] = v7;
  *v7 = v7;
  memmove(v8, Src, v4);
  *(_OWORD *)(v7 + 3) = *a3;
  v9 = (_QWORD *)qword_1C00939F8;
  if ( *(PVOID **)qword_1C00939F8 != &qword_1C00939F0 )
    __fastfail(3u);
  *v7 = &qword_1C00939F0;
  v7[1] = v9;
  *v9 = v7;
  qword_1C00939F8 = (__int64)v7;
  return v3;
}
