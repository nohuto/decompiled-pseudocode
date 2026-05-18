/*
 * XREFs of sub_180017788 @ 0x180017788
 * Callers:
 *     sub_1800178DC @ 0x1800178DC (sub_1800178DC.c)
 * Callees:
 *     sub_180012DAC @ 0x180012DAC (sub_180012DAC.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180017788(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rax

  *a1 = 0LL;
  v6 = sub_18001D6AC(208LL, &unk_1801289A6);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &ISpectreLightNode::`vftable';
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = off_18011C6E0;
    if ( qword_1801F7490 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801F7490 + 8LL))(qword_1801F7490);
    *(_QWORD *)v7 = off_18011CA58;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 52) = 0LL;
    *(_QWORD *)(v7 + 60) = 0LL;
    *(_DWORD *)(v7 + 68) = 1065353216;
    *(_QWORD *)(v7 + 184) = 0LL;
    *(_QWORD *)(v7 + 192) = 0LL;
    *(_DWORD *)(v7 + 200) = 0;
    v8 = sub_180012DAC(v7, *a2, a3);
    v9 = *(_QWORD *)v7;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(v9 + 8))(v7);
      *a1 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(v9 + 16))(v7);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
