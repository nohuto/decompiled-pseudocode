/*
 * XREFs of sub_140AB2008 @ 0x140AB2008
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB2608 @ 0x140AB2608 (sub_140AB2608.c)
 *     sub_140AB26C8 @ 0x140AB26C8 (sub_140AB26C8.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB304C @ 0x140AB304C (sub_140AB304C.c)
 *     sub_140AB315C @ 0x140AB315C (sub_140AB315C.c)
 *     sub_140AB346C @ 0x140AB346C (sub_140AB346C.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140AB2008(
        __int64 a1,
        _BYTE *a2,
        volatile void *a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rcx
  __int64 v11; // rax

  if ( a4 == 1 )
  {
    if ( a7 )
    {
      ProbeForWrite(a3, a6, 1u);
    }
    else if ( a6 )
    {
      v9 = (unsigned __int64)a3 + a6;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v10 = a3;
  if ( !a7 )
  {
    v10 = a2;
    a2 = a3;
  }
  switch ( a6 )
  {
    case 1u:
      *v10 = *a2;
      return 0LL;
    case 2u:
      *(_WORD *)v10 = *(_WORD *)a2;
      return 0LL;
    case 4u:
      if ( !a7 || !a5 )
      {
        *(_DWORD *)v10 = *(_DWORD *)a2;
        return 0LL;
      }
      v11 = *(unsigned int *)a2;
      break;
    default:
      v11 = *(_QWORD *)a2;
      break;
  }
  *(_QWORD *)v10 = v11;
  return 0LL;
}
