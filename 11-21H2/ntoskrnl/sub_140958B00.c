/*
 * XREFs of sub_140958B00 @ 0x140958B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140958B94 @ 0x140958B94 (sub_140958B94.c)
 */

void __fastcall sub_140958B00(PVOID CallbackContext, unsigned __int64 Argument1, int *Argument2)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 *v7; // rcx
  int v8; // eax

  if ( Argument1 <= 0x19 )
  {
    if ( (_DWORD)Argument1 )
    {
      v4 = Argument1 - 1;
      if ( !v4 )
      {
        if ( !byte_140C445D0 )
          return;
        byte_140C445D0 = 0;
        v7 = &qword_14003A360;
        goto LABEL_13;
      }
      v5 = v4 - 4;
      if ( v5 )
      {
        v6 = v5 - 15;
        if ( v6 )
        {
          if ( v6 != 5 )
            return;
          v7 = qword_14003A370;
        }
        else
        {
          v7 = qword_14003A390;
        }
LABEL_13:
        sub_140958B94(v7);
        return;
      }
      if ( *Argument2 < 0 )
        return;
      v8 = sub_140958B94(&qword_14003A450);
    }
    else
    {
      if ( *Argument2 < 0 )
        return;
      v8 = sub_140958B94(&qword_14003A440);
      byte_140C445D0 = 1;
    }
    *Argument2 = v8;
  }
}
