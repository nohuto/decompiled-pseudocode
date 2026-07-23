/*
 * XREFs of sub_140A9AFDC @ 0x140A9AFDC
 * Callers:
 *     sub_140A9C820 @ 0x140A9C820 (sub_140A9C820.c)
 * Callees:
 *     sub_140A887D4 @ 0x140A887D4 (sub_140A887D4.c)
 *     sub_140A90E38 @ 0x140A90E38 (sub_140A90E38.c)
 *     sub_140A967D0 @ 0x140A967D0 (sub_140A967D0.c)
 *     sub_140A99478 @ 0x140A99478 (sub_140A99478.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 *     sub_140A9AF9C @ 0x140A9AF9C (sub_140A9AF9C.c)
 *     sub_140A9B0FC @ 0x140A9B0FC (sub_140A9B0FC.c)
 *     sub_140A9B158 @ 0x140A9B158 (sub_140A9B158.c)
 */

void __fastcall sub_140A9AFDC(unsigned int a1, __int16 a2, int a3, unsigned int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  _BOOL8 v10; // rcx

  sub_140A967D0(a4);
  if ( (a2 & 8) != 0 )
  {
    if ( (a1 & 8) == 0 )
      dword_140D06994 = 1;
  }
  else if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 8) != 0 )
  {
    dword_140D06994 |= 0x10000000u;
  }
  sub_140A9B158(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) == 0 )
      sub_140A99478(1);
  }
  else if ( (a3 & 0x20) != 0 && (a1 & 0x20) != 0 )
  {
    sub_140A9952C();
  }
  if ( (a2 & 0x80u) == 0 )
  {
    v8 = a3 & a1;
    if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 0x80) != 0 )
      sub_140A887D4();
  }
  else
  {
    if ( (a1 & 0x80) == 0 )
      sub_140A887D4();
    v8 = a3 & a1;
  }
  if ( (a2 & 0x800) != 0 )
  {
    v9 = a1 & 0x800;
    v10 = v9 == 0;
    if ( (v9 & 0x800) == 0 )
      goto LABEL_23;
  }
  else if ( (v8 & 0x800) != 0 )
  {
    v10 = 0LL;
LABEL_23:
    sub_140A9B0FC(v10, v8);
    sub_140A9AF9C();
  }
  sub_140A90E38(a4);
}
