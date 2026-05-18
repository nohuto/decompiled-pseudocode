/*
 * XREFs of sub_18001793C @ 0x18001793C
 * Callers:
 *     sub_180017A5C @ 0x180017A5C (sub_180017A5C.c)
 * Callees:
 *     sub_180013C9C @ 0x180013C9C (sub_180013C9C.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18001793C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  __int64 v7; // rax

  *a1 = 0LL;
  v4 = sub_18001D6AC(32LL, &unk_1801289A6);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreMaterial::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = off_18011C768;
    if ( qword_1801F7490 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801F7490 + 8LL))(qword_1801F7490);
    *v5 = off_18011C998;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v6 = sub_180013C9C((__int64)v5, a2);
    v7 = *v5;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(v7 + 8))(v5);
      *a1 = v5;
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v7 + 16))(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
