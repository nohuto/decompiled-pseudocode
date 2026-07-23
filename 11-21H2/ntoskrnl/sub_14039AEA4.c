/*
 * XREFs of sub_14039AEA4 @ 0x14039AEA4
 * Callers:
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 * Callees:
 *     sub_14039AF3C @ 0x14039AF3C (sub_14039AF3C.c)
 */

__int64 __fastcall sub_14039AEA4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // rcx

  if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
  {
    v6 = HIDWORD(xmmword_140CF7090);
    v7 = *(_QWORD *)(a1 + 34512);
    do
    {
      v8 = *(_QWORD *)(v7 + 8 * v6);
      *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * (unsigned int)xmmword_140CF70A0);
    }
    while ( v8 != *(_QWORD *)(v7 + 8 * v6) );
    v9 = DWORD1(xmmword_140CF70A0);
    v10 = *(_QWORD *)(a1 + 34512);
    do
    {
      *a2 = *(_QWORD *)(v10 + 8 * v9);
      v11 = sub_14039AF3C();
    }
    while ( *a2 != *(_QWORD *)(v10 + 8 * v9) );
  }
  else
  {
    v11 = sub_14039AF3C();
    v13 = (unsigned int)xmmword_140CF70A0;
    *a2 = v11 - *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD1(xmmword_140CF7090));
    *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8 * v13);
  }
  return v11;
}
