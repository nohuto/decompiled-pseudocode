/*
 * XREFs of sub_14025A250 @ 0x14025A250
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14025A250(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rbx

  v1 = a1 - 120;
  if ( *(_BYTE *)(v1 + 65) || (*(_DWORD *)(v1 + 48) & 0xC0000000) != 0xC0000000 )
  {
    *(_OWORD *)*(_QWORD *)(v1 + 72) = *(_OWORD *)(v1 + 48);
    v2 = *(_QWORD *)(v1 + 96);
    v3 = *(_QWORD *)(v1 + 72);
    IoFreeIrp((PIRP)v1);
    sub_14042A5E0(v2, v3);
  }
  else
  {
    IoFreeIrp((PIRP)v1);
  }
}
