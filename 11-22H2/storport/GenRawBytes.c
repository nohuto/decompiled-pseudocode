/*
 * XREFs of GenRawBytes @ 0x1C0080A58
 * Callers:
 *     GenSetTableColumnParams @ 0x1C007C100 (GenSetTableColumnParams.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 */

__int64 __fastcall GenRawBytes(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  int v9; // [rsp+20h] [rbp-18h]

  v5 = *(unsigned int *)(a1 + 12);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v5 + a3 <= v7 )
  {
    memmove((void *)(*(_QWORD *)a1 + v5), a2, a3);
    *(_DWORD *)(a1 + 12) += a3;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v9 = v5 + a3;
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v7,
        v9);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
