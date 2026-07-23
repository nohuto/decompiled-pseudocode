/*
 * XREFs of sub_140840AEC @ 0x140840AEC
 * Callers:
 *     sub_140840A78 @ 0x140840A78 (sub_140840A78.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 *     sub_140840B90 @ 0x140840B90 (sub_140840B90.c)
 *     sub_1409DB0F0 @ 0x1409DB0F0 (sub_1409DB0F0.c)
 */

__int64 __fastcall sub_140840AEC(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  PSLIST_ENTRY v5; // rax
  _OWORD *v6; // rsi

  v1 = 0;
  if ( a1 )
  {
    v3 = sub_140840B90();
    if ( v3 )
    {
      *(_QWORD *)(a1 + 40) = v3;
    }
    else if ( (unsigned int)dword_140C18E80 >= 0x400 )
    {
      if ( EtwEventEnabled(qword_140C16E68, &stru_140037A38) )
        sub_1409DB0F0(a1);
      return (unsigned int)-1073741823;
    }
    else
    {
      v5 = sub_14081538C(2, 0x50u);
      v6 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x50uLL);
        *v6 = *(_OWORD *)a1;
        qword_140C16E80[dword_140C18E80++] = v6;
        *(_QWORD *)(a1 + 40) = v6;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
