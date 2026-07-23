/*
 * XREFs of sub_14020B888 @ 0x14020B888
 * Callers:
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_140348640 @ 0x140348640 (sub_140348640.c)
 *     IoCleanupIrp @ 0x14039D770 (IoCleanupIrp.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     sub_140418218 @ 0x140418218 (sub_140418218.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140559250 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405592A0 (IoClearFsTrackOffsetState.c)
 *     sub_140559770 @ 0x140559770 (sub_140559770.c)
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     sub_1404182AC @ 0x1404182AC (sub_1404182AC.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall sub_14020B888(__int64 a1, int a2, char a3))()
{
  int v6; // ecx
  __int64 v7; // rdi
  char v8; // al
  __int64 (__fastcall *v9)(); // rbp
  int v10; // eax
  int v11; // eax
  int v13; // eax

  if ( dword_140C0959C == 1 )
  {
    v6 = 1;
  }
  else if ( dword_140C0959C )
  {
    v6 = (unsigned __int8)sub_14065863C();
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(_BYTE *)(a1 + 71);
  if ( v6 )
  {
    v9 = 0LL;
    if ( v8 < 0 )
    {
      *(_BYTE *)(a1 + 71) = v8 & 0x7F;
LABEL_28:
      *(_QWORD *)(a1 + 200) = 0LL;
      return v9;
    }
    if ( v7 )
    {
      if ( (a2 == 5 || a2 == -1) && (unsigned __int8)sub_14020C0F0(a1, 5LL) )
        *(_QWORD *)(v7 + 40) = 0LL;
      if ( a2 == 9 || a2 == -1 )
      {
        if ( (unsigned __int8)sub_14020C0F0(a1, 9LL) )
        {
          v10 = *(_DWORD *)(a1 + 16);
          if ( (v10 & 0x200) != 0 )
          {
            sub_1404182AC();
            *(_BYTE *)(a1 + 65) = 1;
          }
          else if ( (v10 & 0x100) != 0 )
          {
            v9 = sub_140417DE0;
          }
        }
        if ( a2 == -1 )
        {
          *(_WORD *)(v7 + 2) = 0;
          goto LABEL_25;
        }
      }
      v11 = *(unsigned __int16 *)(v7 + 2) & ~(1 << a2);
      *(_WORD *)(v7 + 2) = v11;
      if ( !(_WORD)v11 )
      {
LABEL_25:
        if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 || !a3 )
          return v9;
        ExFreePoolWithTag((PVOID)v7, 0x58707249u);
        *(_BYTE *)(a1 + 71) &= ~0x40u;
        goto LABEL_28;
      }
    }
    return v9;
  }
  if ( v8 < 0 )
  {
    *(_BYTE *)(a1 + 71) = v8 & 0x7F;
LABEL_44:
    *(_QWORD *)(a1 + 200) = 0LL;
    return 0LL;
  }
  if ( v7 )
  {
    if ( a2 == -1 )
    {
      if ( (unsigned __int8)sub_14020C0F0(a1, 5LL) )
        *(_QWORD *)(v7 + 40) = 0LL;
      *(_WORD *)(v7 + 2) = 0;
    }
    else
    {
      v13 = *(unsigned __int16 *)(v7 + 2) & ~(1 << a2);
      *(_WORD *)(v7 + 2) = v13;
      if ( a2 == 5 )
        *(_QWORD *)(v7 + 40) = 0LL;
      if ( (_WORD)v13 )
        return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 && a3 )
    {
      ExFreePoolWithTag((PVOID)v7, 0x58707249u);
      *(_BYTE *)(a1 + 71) &= ~0x40u;
      goto LABEL_44;
    }
  }
  return 0LL;
}
