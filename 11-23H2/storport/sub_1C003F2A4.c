/*
 * XREFs of sub_1C003F2A4 @ 0x1C003F2A4
 * Callers:
 *     sub_1C00173C4 @ 0x1C00173C4 (sub_1C00173C4.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C003F348 @ 0x1C003F348 (sub_1C003F348.c)
 */

__int64 __fastcall sub_1C003F2A4(__int64 *a1, __int64 a2, ULONG a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  void *v8; // rax
  PMDL Mdl; // rax

  v3 = *a1;
  v7 = 0;
  sub_1C003F348(a1);
  v8 = (void *)sub_1C0007CF4(64LL, a3, 842096978LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = v8;
  if ( !v8 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(a2 + 40) = a3;
  Mdl = IoAllocateMdl(v8, a3, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  if ( !Mdl )
  {
    sub_1C003F348(a1);
    return (unsigned int)-1073741801;
  }
  return v7;
}
