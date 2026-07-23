/*
 * XREFs of sub_1403CFB04 @ 0x1403CFB04
 * Callers:
 *     sub_140552A60 @ 0x140552A60 (sub_140552A60.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403CFB04(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C4EFD0 == 2 )
  {
    *(_BYTE *)a1 = byte_140C4EFD4;
    *(_DWORD *)(a1 + 4) = dword_140C4F004;
    *(_BYTE *)(a1 + 1) = dword_140C4F018 == 1;
    v1 = dword_140C4F020;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
