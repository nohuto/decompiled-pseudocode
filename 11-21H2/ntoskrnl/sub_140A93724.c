/*
 * XREFs of sub_140A93724 @ 0x140A93724
 * Callers:
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402D86CC @ 0x1402D86CC (sub_1402D86CC.c)
 *     sub_140A821E0 @ 0x140A821E0 (sub_140A821E0.c)
 *     sub_140A942C0 @ 0x140A942C0 (sub_140A942C0.c)
 *     sub_140A94324 @ 0x140A94324 (sub_140A94324.c)
 */

__int64 __fastcall sub_140A93724(__int64 a1)
{
  void *v1; // rsi
  unsigned int v3; // ebx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  PVOID v6; // r14
  ULONG v7; // esi
  unsigned int v8; // eax
  ULONG Size; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 48);
  v3 = 0;
  Size = 0;
  v4 = sub_1402D86CC((unsigned __int64)v1);
  v5 = v4;
  if ( v4 )
  {
    if ( (v4[6] & 1) == 0 )
    {
      v6 = RtlImageDirectoryEntryToData(v1, 1u, 0xCu, &Size);
      if ( v6 )
      {
        v7 = Size;
        if ( Size )
        {
          v8 = sub_140A821E0(a1);
          if ( (unsigned int)sub_140A94324(v6, v7 >> 3, v8) )
          {
            sub_140A942C0(v5);
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
