/*
 * XREFs of sub_180007DE0 @ 0x180007DE0
 * Callers:
 *     HamCreateActivityForProcess @ 0x180002590 (HamCreateActivityForProcess.c)
 *     HamCreateActivityEx @ 0x180007B20 (HamCreateActivityEx.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 *     HamCreateExtendedExecution @ 0x18001D4B0 (HamCreateExtendedExecution.c)
 * Callees:
 *     sub_180008690 @ 0x180008690 (sub_180008690.c)
 *     sub_180016848 @ 0x180016848 (sub_180016848.c)
 */

__int64 __fastcall sub_180007DE0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  char v4; // di
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // edi
  unsigned __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)sub_180016848(v1, a1) )
    __int2c();
  v4 = *(_BYTE *)(v1 + 32);
  v5 = v1 + 24;
  v6 = *(_QWORD *)(v1 + 24);
  v7 = v4 & 1;
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    if ( !v6 )
    {
LABEL_18:
      LOBYTE(v3) = 0;
      return RtlRbInsertNodeEx(v5, v6, v3, a1);
    }
    v6 ^= v5;
  }
  LOBYTE(v3) = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)sub_180008690(a1, v6, v3) < 0 )
      {
        v8 = *(_QWORD *)v6;
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= v6;
        }
        if ( !v8 )
          goto LABEL_18;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_12;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_12:
          LOBYTE(v3) = 1;
          return RtlRbInsertNodeEx(v5, v6, v3, a1);
        }
      }
      v6 = v8;
    }
  }
  return RtlRbInsertNodeEx(v5, v6, v3, a1);
}
