/*
 * XREFs of sub_140337F60 @ 0x140337F60
 * Callers:
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140337F0C @ 0x140337F0C (sub_140337F0C.c)
 */

__int64 __fastcall sub_140337F60(__int64 a1, char a2)
{
  __int64 v2; // r10
  int v3; // edx
  __int64 v4; // rbx
  unsigned int v5; // r11d
  char v6; // si
  ULONG_PTR *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // ebx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 & 1;
  v4 = (unsigned int)-(v3 != 0);
  v5 = 4 * (v3 ^ 1) + 4;
  if ( v2 < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 || (unsigned int)sub_140337F0C(a1) )
  {
    v6 = 1;
    v7 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF));
    if ( !(unsigned int)sub_14032A4B0((__int64)v7, 1uLL, v5) )
      return 0LL;
  }
  else
  {
    v6 = 0;
    v7 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF));
  }
  if ( v7 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *((_DWORD *)CurrentPrcb + 8615);
    if ( v9 )
    {
      while ( v9 != -1 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v9 - 1, v9);
        if ( v10 == v9 )
          return 1;
        if ( !v9 )
          break;
      }
    }
  }
  v11 = sub_14028DC40((__int64)v7, 1uLL, v4);
  if ( !v11 )
  {
    if ( v6 )
      sub_14028CE10((__int64)v7, 1LL);
  }
  return v11;
}
