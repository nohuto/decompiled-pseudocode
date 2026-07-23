/*
 * XREFs of sub_14050BFD0 @ 0x14050BFD0
 * Callers:
 *     sub_14050CD98 @ 0x14050CD98 (sub_14050CD98.c)
 * Callees:
 *     sub_140256380 @ 0x140256380 (sub_140256380.c)
 *     sub_140257FB0 @ 0x140257FB0 (sub_140257FB0.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050C47C @ 0x14050C47C (sub_14050C47C.c)
 *     KeGetNextClockTickDuration @ 0x14056C950 (KeGetNextClockTickDuration.c)
 */

__int64 __fastcall sub_14050BFD0(ULONG_PTR BugCheckParameter3, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v3; // di
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  ULONG_PTR NextClockTickDuration; // rdi
  signed __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  char v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_BYTE *)(BugCheckParameter3 + 224) & 1;
  if ( a2 )
  {
    result = sub_140257FB0();
    if ( !v3 )
      ++dword_140C2B140;
  }
  else
  {
    v4 = qword_140C4E4C8;
    if ( !qword_140C4E4C8 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x21uLL, BugCheckParameter3, 0LL);
    if ( v3 )
    {
      result = (unsigned int)dword_140C2B1C0;
      if ( *((_DWORD *)KeGetCurrentPrcb() + 9) != (_DWORD)dword_140C2B1C0 )
        return result;
    }
    else
    {
      ++dword_140C2B140;
    }
    sub_140256380();
    NextClockTickDuration = KeGetNextClockTickDuration();
    v7 = 0x989680uLL / *(_QWORD *)(v4 + 192);
    if ( v7 < 5000 )
      v7 = 5000LL;
    if ( (__int64)NextClockTickDuration < v7 )
    {
      ++dword_140D0171C;
      NextClockTickDuration = v7;
    }
    if ( NextClockTickDuration > qword_140C54B78 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, NextClockTickDuration, 0LL);
    v8 = sub_140303720(v4);
    v10 = sub_14042A5E0(v8, v9);
    if ( v10 < 0 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v4, v10);
    result = sub_14050C47C(v4, (unsigned int)NextClockTickDuration, v11, &v12);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x23uLL, v4, (int)result);
    *((_BYTE *)CurrentPrcb + 34) |= 2u;
  }
  return result;
}
