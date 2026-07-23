/*
 * XREFs of sub_140A1F9F4 @ 0x140A1F9F4
 * Callers:
 *     sub_140A1FE8C @ 0x140A1FE8C (sub_140A1FE8C.c)
 * Callees:
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1D808 @ 0x140A1D808 (sub_140A1D808.c)
 *     sub_140A1E118 @ 0x140A1E118 (sub_140A1E118.c)
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 *     sub_140A1F760 @ 0x140A1F760 (sub_140A1F760.c)
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 */

__int64 __fastcall sub_140A1F9F4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  bool v10; // al
  int v11; // ecx
  bool v12; // bp
  int v13; // eax
  int v14; // eax

  v2 = *a2;
  v3 = 0;
  if ( (__int64 *)*a2 == a2 )
    return v3;
  do
  {
    v6 = *(_DWORD *)(v2 + 48);
    v7 = v6 & 5;
    if ( (v6 & 5) == 0 )
      goto LABEL_23;
    if ( (v6 & 0x10) != 0 )
    {
      if ( (v6 & 1) == 0 )
        goto LABEL_23;
      v8 = sub_140A1F760(*(_DWORD *)(v2 + 32));
      if ( v8 >= 0 )
      {
        *(_DWORD *)(v2 + 48) &= ~1u;
        goto LABEL_23;
      }
LABEL_9:
      v3 = v8;
      goto LABEL_23;
    }
    if ( v7 == 1 )
    {
      v8 = sub_140A1F760(*(_DWORD *)(v2 + 32));
      if ( v8 >= 0 )
        goto LABEL_23;
      goto LABEL_9;
    }
    if ( v7 == 4 )
    {
      v9 = 0;
      v10 = sub_140A1D808();
      v11 = *(_DWORD *)(v2 + 48);
      v12 = v10;
      if ( (v11 & 8) != 0 || !v10 )
      {
        v13 = sub_140A1F234(a1, v2);
        v11 = *(_DWORD *)(v2 + 48);
        v9 = v13;
      }
      if ( (v11 & 8) != 0 || v12 )
      {
        if ( v9 < 0 )
          v3 = -2143748095;
      }
      else if ( v9 >= 0 )
      {
        sub_140A1E118(a1, v2);
      }
    }
    else
    {
      v14 = sub_140A210D4(a1, v2);
      if ( v14 < 0 )
      {
        v3 = v14;
        if ( (*(_BYTE *)(v2 + 48) & 8) != 0 )
          v3 = -2143748093;
      }
    }
LABEL_23:
    v2 = *(_QWORD *)v2;
  }
  while ( (__int64 *)v2 != a2 );
  if ( (v3 & 0x80000000) != 0 )
    sub_1408138F0(4LL, L"BiExportBcdObjects failed %x", v3);
  return v3;
}
