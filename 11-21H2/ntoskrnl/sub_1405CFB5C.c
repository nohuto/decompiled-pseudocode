/*
 * XREFs of sub_1405CFB5C @ 0x1405CFB5C
 * Callers:
 *     sub_14098F0F0 @ 0x14098F0F0 (sub_14098F0F0.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1405CFBF0 @ 0x1405CFBF0 (sub_1405CFBF0.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_14083248C @ 0x14083248C (sub_14083248C.c)
 *     sub_1409927E0 @ 0x1409927E0 (sub_1409927E0.c)
 *     sub_140992810 @ 0x140992810 (sub_140992810.c)
 */

__int64 __fastcall sub_1405CFB5C(char a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = 0;
  if ( a1 )
  {
    v2 = dword_140D06C04;
    if ( byte_140D068FA )
      v2 = dword_140D06C08;
    byte_140C23908 |= 1u;
    qword_140C238A0 = MEMORY[0xFFFFF78000000008];
    dword_140D06A80 = v2;
    sub_1405CFBF0();
    sub_14083248C();
    LOBYTE(v1) = byte_140D068FA == 0;
    return sub_140992810(v4, v3, v5, v1);
  }
  else
  {
    byte_140C23908 &= ~1u;
    dword_140D06A80 = 0;
    KeCancelTimer(&stru_140C238C0);
    sub_1407EED48();
    sub_14083248C();
    return sub_1409927E0();
  }
}
