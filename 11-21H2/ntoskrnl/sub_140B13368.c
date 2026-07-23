/*
 * XREFs of sub_140B13368 @ 0x140B13368
 * Callers:
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 * Callees:
 *     sub_14082F3C4 @ 0x14082F3C4 (sub_14082F3C4.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_140B13368(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  ULONG_PTR v4; // rcx
  int v5; // eax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v2 = sub_140AB43C0(*(_QWORD *)(a1 + 40), 0LL);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 32LL);
    *(_QWORD *)(a1 + 48) = v4;
    v5 = sub_14082F3C4(v4, *(unsigned int *)(*(_QWORD *)(v3 + 8) + 40LL), (int)&stru_140A37EE8, &v7);
    *(_DWORD *)(a1 + 56) = v5;
    if ( v5 == -1 )
      return (unsigned int)-1073741275;
  }
  return (unsigned int)v2;
}
