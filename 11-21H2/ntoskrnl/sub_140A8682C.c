/*
 * XREFs of sub_140A8682C @ 0x140A8682C
 * Callers:
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FDEEC @ 0x1405FDEEC (sub_1405FDEEC.c)
 *     sub_1405FE548 @ 0x1405FE548 (sub_1405FE548.c)
 */

void __fastcall sub_140A8682C(char a1)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v2; // rdx
  struct _LIST_ENTRY *v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r9
  int v8; // r11d

  if ( a1 )
  {
    if ( dword_140C1AE0C )
    {
      dword_140D575B4 = 1;
      sub_1405FE548();
    }
  }
  else
  {
    if ( !dword_140D575B4 )
      return;
    Flink = stru_140D57590.Flink;
    dword_140C1AE0C = 1;
    dword_140D575B4 = 0;
    while ( &stru_140D57590 != Flink )
    {
      v2 = Flink[1].Flink;
      if ( v2 )
      {
        v3 = (struct _LIST_ENTRY *)&unk_140D4EE00;
        if ( LODWORD(Flink[12].Flink) >= 3 )
          v3 = (struct _LIST_ENTRY *)&unk_140D4EF40;
        v2->Blink = v3;
      }
      Flink = Flink->Flink;
    }
  }
  v4 = sub_1405FDEEC();
  if ( v4 == v8 )
  {
    if ( qword_140D575D0 )
    {
      LOBYTE(v6) = v7;
      sub_14042A5E0(v6, v5);
    }
  }
}
