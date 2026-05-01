/*
 * XREFs of sub_180006990 @ 0x180006990
 * Callers:
 *     sub_180016BC0 @ 0x180016BC0 (sub_180016BC0.c)
 *     sub_180016BE0 @ 0x180016BE0 (sub_180016BE0.c)
 *     sub_180016C00 @ 0x180016C00 (sub_180016C00.c)
 *     sub_180016C20 @ 0x180016C20 (sub_180016C20.c)
 *     sub_180016C40 @ 0x180016C40 (sub_180016C40.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180006990(__int64 a1)
{
  signed __int32 v1; // eax
  unsigned int v2; // ebx

  v1 = *(_DWORD *)(a1 + 108);
  if ( v1 == 0x7FFFFFFF )
  {
LABEL_8:
    v2 = 0x7FFFFFFF;
  }
  else
  {
    while ( 1 )
    {
      v2 = v1 + 1;
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 108);
      if ( v1 == 0x7FFFFFFF )
        goto LABEL_8;
    }
  }
  if ( (*(_BYTE *)(a1 + 128) & 4) == 0 && v2 == 2 && qword_1800328E0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 8LL))(qword_1800328E0);
  return v2;
}
