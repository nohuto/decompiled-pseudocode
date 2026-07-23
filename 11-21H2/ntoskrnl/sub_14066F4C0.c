/*
 * XREFs of sub_14066F4C0 @ 0x14066F4C0
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14066F678 @ 0x14066F678 (sub_14066F678.c)
 *     sub_1406718F8 @ 0x1406718F8 (sub_1406718F8.c)
 */

__int64 __fastcall sub_14066F4C0(
        void *a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  char v7; // bp
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx

  v7 = byte_140CF6648;
  v9 = sub_14066F678(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( v9 >= 0 || (v9 = sub_1406718F8(a1, v7, (__int64)a5, (__int64)a6, (__int64)a7), v9 >= 0) )
  {
    v10 = (*a7 & 7u) - 1;
    if ( (*a7 & 7) == 1 )
    {
      *a5 |= 0x30u;
    }
    else if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
    v11 = 8;
    if ( (*a5 & 0xF) != 8 )
    {
      if ( qword_140C1B8E0 )
      {
        LOBYTE(v8) = 8;
        LOBYTE(v10) = *a5;
        if ( (unsigned int)sub_14042A5E0(v10, v8) )
        {
          if ( (dword_140C5AFD0 & 4) != 0
            || (dword_140C5AFD0 & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            if ( qword_140C1B8E0 && (LOBYTE(v12) = 8, LOBYTE(v13) = v7, (unsigned int)sub_14042A5E0(v13, v12))
              || (*a7 & 7) == 0 )
            {
              v11 = v7 & 0xF;
              *a5 = v7 & 0xF | *a5 & 0x30;
              if ( !qword_140C1B8E0 )
                goto LABEL_20;
              LOBYTE(v13) = v7;
            }
            else
            {
              *a5 = *a5 & 0x30 | 8;
              if ( !qword_140C1B8E0 )
              {
LABEL_20:
                *a6 = v11 | *a6 & 0x30;
                return (unsigned int)v9;
              }
              LOBYTE(v13) = 8;
            }
            LOBYTE(v12) = *a6;
            if ( !(unsigned int)sub_14042A5E0(v13, v12) )
              goto LABEL_20;
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
