/*
 * XREFs of sub_140B26258 @ 0x140B26258
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     sub_14085594C @ 0x14085594C (sub_14085594C.c)
 */

void sub_140B26258()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  if ( (_BYTE)dword_140D051DC )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 1) = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  sub_14085594C(&ValueName, (BOOLEAN **)((char *)&NlsMbCodePageTag + 1));
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  sub_14085594C(&ValueName, &dword_140D3B0D0);
  if ( !dword_140D3B0D0 )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 1) = 0;
  dword_140D3B0D0 *= 10000000;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 1) > 0xFFFFu )
  {
    Depth = 256;
  }
  else
  {
    Depth = *(_WORD *)((char *)&NlsMbCodePageTag + 1) >> 4;
    if ( !(*(_WORD *)((char *)&NlsMbCodePageTag + 1) >> 4) )
    {
      if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 1) )
        goto LABEL_9;
      Depth = *(_WORD *)((char *)&NlsMbCodePageTag + 1) + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
LABEL_9:
  ExInitializePagedLookasideList(&stru_140CF88C0, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
