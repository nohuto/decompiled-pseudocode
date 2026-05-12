/*
 * XREFs of GenShortDataBytes @ 0x1C0080ADC
 * Callers:
 *     GenDataBytes @ 0x1C00806B8 (GenDataBytes.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 */

__int64 __fastcall GenShortDataBytes(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]

  v5 = *(unsigned int *)(a1 + 12);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v5 + a3 + 1 <= v7 )
  {
    *(_BYTE *)(v5 + *(_QWORD *)a1) = a3 - 96;
    v8 = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = v8;
    if ( a3 )
    {
      memmove((void *)(*(_QWORD *)a1 + v8), a2, a3);
      *(_DWORD *)(a1 + 12) += a3;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v10 = v5 + a3 + 1;
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v7,
        v10);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
