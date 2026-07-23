/*
 * XREFs of sub_14024F7C8 @ 0x14024F7C8
 * Callers:
 *     sub_1406D4A68 @ 0x1406D4A68 (sub_1406D4A68.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 * Callees:
 *     sub_140244090 @ 0x140244090 (sub_140244090.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14024F7C8(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  __int64 Root; // rbx
  unsigned __int64 v4; // rsi
  BOOLEAN v5; // r8
  int v6; // edi
  __int64 v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C46D6C);
  Root = (__int64)Parent.Root;
  v4 = v2;
  if ( ((__int64)Parent.Min & 1) != 0 && Parent.Root )
    Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
  v5 = 0;
  v6 = (__int64)Parent.Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)sub_140244090((unsigned __int64 *)&Node[1], Root) < 0 )
      {
        v7 = *(_QWORD *)Root;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_15;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_15:
          v5 = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(Root + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_16;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_16:
          v5 = 1;
          break;
        }
      }
      Root = v7;
    }
  }
  RtlRbInsertNodeEx(&Parent, (PRTL_BALANCED_NODE)Root, v5, Node);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C46D6C);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
