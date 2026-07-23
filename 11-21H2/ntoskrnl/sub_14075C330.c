/*
 * XREFs of sub_14075C330 @ 0x14075C330
 * Callers:
 *     sub_14075C2E0 @ 0x14075C2E0 (sub_14075C2E0.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14027E128 @ 0x14027E128 (sub_14027E128.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1405B52C0 @ 0x1405B52C0 (sub_1405B52C0.c)
 *     sub_14096C6C4 @ 0x14096C6C4 (sub_14096C6C4.c)
 */

__int64 __fastcall sub_14075C330(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  void (__fastcall **v7)(ULONG_PTR); // r14
  _QWORD *v8; // r14
  ULONG Size; // [rsp+40h] [rbp+18h] BYREF

  Size = 0;
  if ( (dword_140D06880 & 0x40000) == 0 )
    return 0LL;
  v5 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
  v6 = (__int64)v5;
  if ( !v5 )
    return 0LL;
  if ( *(_DWORD *)v5 < 0x78u || (v7 = (void (__fastcall **)(ULONG_PTR))v5[14]) == 0LL )
  {
LABEL_14:
    if ( *(_DWORD *)v6 >= 0x80u )
    {
      v8 = *(_QWORD **)(v6 + 120);
      if ( v8 )
      {
        if ( a2 && !(unsigned int)sub_14027E128(a1, *(_QWORD *)(v6 + 120), 8, 4LL) )
        {
          sub_14096C6C4("CfgUnwritableLoadConfig");
          dword_140C4F3D0 = 104;
          return 3221225595LL;
        }
        *v8 = sub_14042A5E0;
        if ( a2 && *(_QWORD *)(a2 + 16) )
          sub_14027E128(a1, (unsigned __int64)v8, 8, 256LL);
      }
    }
    if ( *(_DWORD *)v6 >= 0xC0u && (*(_DWORD *)(v6 + 144) & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v6 + 184) )
        sub_1405B52C0(a1, v6);
    }
    return 0LL;
  }
  if ( !a2 || (unsigned int)sub_14027E128(a1, v5[14], 8, 4LL) )
  {
    *v7 = sub_14042A590;
    if ( a2 && *(_QWORD *)(a2 + 16) )
      sub_14027E128(a1, (unsigned __int64)v7, 8, 256LL);
    goto LABEL_14;
  }
  sub_14096C6C4("CfgUnwritableLoadConfig");
  dword_140C4F3D0 = 103;
  return 3221225595LL;
}
