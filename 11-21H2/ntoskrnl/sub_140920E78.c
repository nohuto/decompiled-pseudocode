/*
 * XREFs of sub_140920E78 @ 0x140920E78
 * Callers:
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_1407C0C50 @ 0x1407C0C50 (sub_1407C0C50.c)
 */

void __fastcall sub_140920E78(PPRIVILEGE_SET Privileges, __int64 a2, char a3)
{
  ULONG *p_Attributes; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v7 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v8 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a3 )
          sub_1407C0C50(v8, a2);
        else
          sub_14071BF40(v8);
      }
      p_Attributes += 6;
      --v7;
    }
    while ( v7 );
  }
  SeFreePrivileges(Privileges);
}
