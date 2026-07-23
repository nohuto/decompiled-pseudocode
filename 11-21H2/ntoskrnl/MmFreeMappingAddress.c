/*
 * XREFs of MmFreeMappingAddress @ 0x1407FA560
 * Callers:
 *     sub_1402376C4 @ 0x1402376C4 (sub_1402376C4.c)
 *     sub_14095212C @ 0x14095212C (sub_14095212C.c)
 *     sub_1409525B4 @ 0x1409525B4 (sub_1409525B4.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     sub_140B1DD34 @ 0x140B1DD34 (sub_140B1DD34.c)
 *     sub_140B1DEB4 @ 0x140B1DEB4 (sub_140B1DEB4.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403864DC @ 0x1403864DC (sub_1403864DC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B6E94 @ 0x1405B6E94 (sub_1405B6E94.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // rbp
  ULONG_PTR BugCheckParameter4; // rsi
  _QWORD *v8; // r14
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r12
  unsigned __int64 v11; // rax

  v2 = PoolTag;
  v4 = sub_1403864DC((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  v6 = v4[3];
  BugCheckParameter4 = v4[4];
  v8 = (_QWORD *)sub_140313C70(v6);
  v9 = (unsigned __int64)v8;
  v10 = &v8[BugCheckParameter4];
  if ( v8 < v10 )
  {
    do
    {
      if ( (_QWORD *)v9 == v8 || (v9 & 0xFFF) == 0 )
      {
        v11 = sub_140313C70(v9);
        if ( (sub_140317A10(v11) & 0x80u) != 0LL )
          KeBugCheckEx(0xDAu, 0x109uLL, v6, v2, BugCheckParameter4);
      }
      if ( sub_140317A10(v9) )
        KeBugCheckEx(0xDAu, 0x103uLL, v6, v2, BugCheckParameter4);
      v9 += 8LL;
    }
    while ( v9 < (unsigned __int64)v10 );
  }
  if ( (dword_140D051BC & 1) != 0 )
    sub_1405B6E94(0LL, v6, BugCheckParameter4);
  sub_1402BB6D0((__int64)&qword_140C534C0, v8, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
