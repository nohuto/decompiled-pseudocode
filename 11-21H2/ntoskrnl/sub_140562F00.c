/*
 * XREFs of sub_140562F00 @ 0x140562F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 *     sub_140A68338 @ 0x140A68338 (sub_140A68338.c)
 */

__int64 __fastcall sub_140562F00(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si

  v3 = 0;
  if ( *(_BYTE *)(qword_140C448A8 + 208) )
  {
    if ( *(int *)(qword_140C448A8 + 200) < 2 )
      *(_DWORD *)(qword_140C448A8 + 200) = 2;
    sub_140A67C14(0LL);
  }
  else
  {
    v3 = 1;
  }
  LOBYTE(a3) = v3;
  return sub_140A68338(a1, a2, a3);
}
