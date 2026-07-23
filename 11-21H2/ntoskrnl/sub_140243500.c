/*
 * XREFs of sub_140243500 @ 0x140243500
 * Callers:
 *     <none>
 * Callees:
 *     sub_140280D70 @ 0x140280D70 (sub_140280D70.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140243500(PVOID P)
{
  int v2; // eax
  __int128 *v3; // rcx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( qword_140D00A28 )
    v2 = sub_14042A5E0(*((_QWORD *)P + 11), 1024LL);
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    LODWORD(v3) = *((_QWORD *)P + 11) + 88;
  else
    v3 = &v4;
  sub_140280D70(
    (_DWORD)v3,
    *((_QWORD *)P + 12),
    *((_QWORD *)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    *((_DWORD *)P + 33),
    *((_QWORD *)P + 17),
    0);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
