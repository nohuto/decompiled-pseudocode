/*
 * XREFs of sub_180092E30 @ 0x180092E30
 * Callers:
 *     sub_180091D14 @ 0x180091D14 (sub_180091D14.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180092E30(__int64 *a1)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 result; // rax

  v1 = *((_DWORD *)a1 + 459);
  *((_DWORD *)a1 + 475) = 0;
  *((_DWORD *)a1 + 454) = 0;
  *((_DWORD *)a1 + 473) = 0;
  *((_DWORD *)a1 + 468) = v1;
  *((_DWORD *)a1 + 469) = *((_DWORD *)a1 + 460);
  *((_DWORD *)a1 + 461) = 1065353216;
  *((_DWORD *)a1 + 462) = 1065353216;
  *((_DWORD *)a1 + 453) = 1065353216;
  v3 = *a1;
  *((_DWORD *)a1 + 455) = -1078806334;
  *((_DWORD *)a1 + 456) = 1068677314;
  *((_DWORD *)a1 + 467) = 2;
  *((_WORD *)a1 + 948) = 256;
  (*(void (**)(void))(v3 + 248))();
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 256))(a1);
  *((_BYTE *)a1 + 1864) = 0;
  return result;
}
