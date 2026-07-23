/*
 * XREFs of sub_1402D0BA0 @ 0x1402D0BA0
 * Callers:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 * Callees:
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 *     sub_14054CAE0 @ 0x14054CAE0 (sub_14054CAE0.c)
 */

unsigned __int64 __fastcall sub_1402D0BA0(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((unsigned __int8 *)CurrentPrcb + 209);
  v5 = 8LL * *((unsigned __int8 *)CurrentPrcb + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v5 + a1), v4);
  v6 = *(_QWORD *)(a1 + 40);
  if ( byte_140E01840 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( (v6 & 2) != 0 )
      v7 = v6 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v7);
    sub_140347550(*(unsigned __int8 *)(a1 + 912));
  }
  result = (unsigned int)dword_140D0689C;
  if ( (dword_140D0689C & 1) != 0 )
    result = sub_14054CAE0(v6);
  else
    __writecr3(v6);
  if ( !byte_140D0688A && byte_140E01840 )
  {
    v9 = __readcr4();
    if ( (v9 & 0x20080) != 0 )
    {
      result = v9 ^ 0x80;
      __writecr4(v9 ^ 0x80);
      __writecr4(v9);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v5 + a2), v4);
  return result;
}
