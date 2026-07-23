/*
 * XREFs of sub_1402246C0 @ 0x1402246C0
 * Callers:
 *     sub_140399068 @ 0x140399068 (sub_140399068.c)
 *     sub_140399140 @ 0x140399140 (sub_140399140.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_14080BBA0 @ 0x14080BBA0 (sub_14080BBA0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402246C0(int *a1)
{
  char v1; // dl
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned int v5; // r9d
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  if ( !byte_140D07398 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - qword_140D072E0;
    qword_140D072E8 += MEMORY[0xFFFFF78000000008] - qword_140D072E0;
    if ( byte_140D068E1 )
      qword_140D072F8 += v4;
    v5 = 0;
    v6 = &unk_140D07308;
    do
    {
      v7 = dword_140D06B50;
      if ( _bittest(&v7, v5) )
        *v6 += v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 9 );
  }
  if ( a1 )
  {
    if ( !qword_140D072E0 || (v8 = *a1, dword_140D06B50 != *a1) )
    {
      v8 = *a1;
      v1 = 1;
    }
    dword_140D06B50 = v8;
  }
  qword_140D072E0 = v3;
  return v1;
}
