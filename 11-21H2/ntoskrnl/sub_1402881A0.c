/*
 * XREFs of sub_1402881A0 @ 0x1402881A0
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_1407F730C @ 0x1407F730C (sub_1407F730C.c)
 * Callees:
 *     sub_140417574 @ 0x140417574 (sub_140417574.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402881A0(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  char v5; // dl
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ecx

  v2 = *(_WORD *)(a1 + 74);
  if ( v2 )
  {
    v5 = *(_BYTE *)(a1 + 4);
    do
    {
      v6 = *(_QWORD *)(a1 + 80) + 32LL * v2;
      if ( v5 == -7 )
      {
        v7 = sub_140417574();
        v8 = a2;
        if ( !v7 )
          v8 = 0;
        *(_DWORD *)(a1 + 52) = v8;
      }
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v6 - 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v6 - 24);
      sub_14042A5E0(a1, a2);
      v5 = *(_BYTE *)(a1 + 4);
      if ( v5 == -7 )
        a2 = *(_DWORD *)(a1 + 52);
      v2 = *(_WORD *)(a1 + 74) - 1;
      *(_WORD *)(a1 + 74) = v2;
    }
    while ( v2 );
  }
  return a2;
}
