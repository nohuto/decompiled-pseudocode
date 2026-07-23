/*
 * XREFs of sub_14098B868 @ 0x14098B868
 * Callers:
 *     sub_14098B4E0 @ 0x14098B4E0 (sub_14098B4E0.c)
 * Callees:
 *     sub_14025A904 @ 0x14025A904 (sub_14025A904.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 */

void __fastcall sub_14098B868(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  sub_1402D66A8((ULONG_PTR)(a1 + 4));
  v3 = a1[6];
  if ( v3 )
  {
    v4 = (unsigned __int8 *)a1[2];
    if ( v4 != (unsigned __int8 *)(a1 + 2) )
    {
      do
      {
        if ( v4[18] )
        {
          v4[18] = 0;
          if ( a1[17] )
          {
            sub_1407FD7A8((__int64)(v4 + 40), v4[16]);
            sub_14038AF44((__int64)v4);
            sub_1403C0F80(0);
          }
          if ( a1[16] )
          {
            LOBYTE(v2) = v4[17] == 0;
            sub_14081CEB4((__int64)(v4 + 40), v2);
            sub_1405D4150((__int64)v4);
          }
          CMSPAddress::get_DynamicTerminalClasses((CMSPAddress *)v4, (const EVENT_DESCRIPTOR *)&stru_140014998);
        }
        v4 = *(unsigned __int8 **)v4;
      }
      while ( v4 != (unsigned __int8 *)(a1 + 2) );
      v3 = a1[6];
    }
    *(_QWORD *)(sub_14025A904(v3) + 64) = 0LL;
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  sub_1402935D0((ULONG_PTR)(a1 + 4));
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
}
