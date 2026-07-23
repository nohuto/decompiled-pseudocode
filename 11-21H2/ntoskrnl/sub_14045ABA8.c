/*
 * XREFs of sub_14045ABA8 @ 0x14045ABA8
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_14045AAC0 @ 0x14045AAC0 (sub_14045AAC0.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B5B2 @ 0x14045B5B2 (sub_14045B5B2.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 */

__int64 __fastcall sub_14045ABA8(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  char v3; // cl
  char v4; // r11
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  v2 = a1;
  LOBYTE(a2) = 0;
  v3 = 0;
  v4 = 0;
  if ( (*(_DWORD *)(v2 + 236) & 0x300) != 0 )
  {
    result = (unsigned int)_InterlockedIncrement(&dword_140D01950);
    if ( (_DWORD)result != 1 )
      goto LABEL_9;
    if ( *(_BYTE *)(v2 + 33) )
    {
      v3 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    result = (unsigned int)_InterlockedDecrement(&dword_140D01950);
    if ( (_DWORD)result )
      goto LABEL_9;
    if ( *(_BYTE *)(v2 + 33) )
    {
      v3 = 1;
      v4 = 1;
      goto LABEL_9;
    }
  }
  LOBYTE(a2) = 1;
LABEL_9:
  if ( byte_140D06889 )
  {
    if ( v3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( v4 )
      {
        *(_BYTE *)(v2 + 37124) &= ~1u;
      }
      else if ( dword_140D06AA0 )
      {
        sub_14056CF48(v2, -dword_140D06AA0, 0, 6, 1, 1);
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v8 = KeGetCurrentIrql();
          if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  else if ( v3 )
  {
    LOBYTE(a1) = v4;
    return sub_14045B5B2(a1, a2);
  }
  else if ( (_BYTE)a2 )
  {
    if ( !qword_140C2BBF8 )
      word_140C2BBC2 = dword_140C2B1C0 + 2048;
    return sub_140345190((ULONG_PTR)&unk_140C2BBC0, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
